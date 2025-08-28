#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part093.c - 2 个函数
// 函数: void function_895e7e(void)
void function_895e7e(void)
{
  return;
}
int32_t function_895ef0(uint64_t param_1)
{
  int iVar1;
  int32_t astack_special_x_10 [6];
  astack_special_x_10[0] = 0;
  iVar1 = Function_3359b5c0(param_1,astack_special_x_10);
  if (iVar1 == 0) {
    return astack_special_x_10[0];
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_895f20(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0xc - 1U < 0x3fffffff) {
      puVar3 = (uint64_t *)
               SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar3 != (uint64_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(uint64_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
            *(int32_t *)(puVar5 + 1) =
                 *(int32_t *)((lVar2 - (int64_t)puVar3) + 8 + (int64_t)puVar5);
            puVar5 = (uint64_t *)((int64_t)puVar5 + 0xc);
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_180895fdc;
      }
    }
    return 0x26;
  }
LAB_180895fdc:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_895f44(uint64_t param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t *unaff_RBX;
  int unaff_EDI;
  puVar3 = (uint64_t *)0x0;
  if (unaff_EDI == 0) {
LAB_180895fdc:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar3;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0xc - 1U < 0x3fffffff) {
    puVar3 = (uint64_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&processed_var_8432_ptr,0xf4
                           ,0);
    if (puVar3 != (uint64_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(uint64_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
          *(int32_t *)(puVar5 + 1) =
               *(int32_t *)((lVar2 - (int64_t)puVar3) + 8 + (int64_t)puVar5);
          puVar5 = (uint64_t *)((int64_t)puVar5 + 0xc);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_180895fdc;
    }
  }
  return 0x26;
}
uint64_t function_896027(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_896040(int64_t *param_1,int param_2)
{
  int64_t lVar1;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0xc - 1U < 0x3fffffff) {
      lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] * 0xc);
        }
        goto LAB_1808960d4;
      }
    }
    return 0x26;
  }
LAB_1808960d4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_896064(uint64_t param_1,int param_2)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808960d4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0xc - 1U < 0x3fffffff) {
    lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&processed_var_8432_ptr,0xf4,
                          0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] * 0xc);
      }
      goto LAB_1808960d4;
    }
  }
  return 0x26;
}
uint64_t function_89611f(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_896140(int64_t param_1)
{
  byte *pbVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  int32_t *puVar12;
  int64_t *plVar13;
  int iVar14;
  int64_t lVar15;
  int iVar16;
  bool bVar17;
  int aiStackX_8 [2];
  uint astack_special_x_10 [2];
  uint64_t stack_special_x_18;
  int8_t astack_special_x_20 [8];
  uint64_t local_var_118;
  uint64_t local_var_110;
  int64_t *plStack_108;
  uint64_t local_var_100;
  int aiStack_f8 [2];
  void *plocal_var_f0;
  int32_t local_var_e8;
  int32_t local_var_e0;
  void *plocal_var_d8;
  int32_t local_var_d0;
  int32_t local_var_c8;
  int32_t local_var_c0;
  void *plocal_var_b8;
  int32_t local_var_b0;
  int32_t local_var_a8;
  uint local_var_a0;
  void *plocal_var_98;
  int32_t local_var_90;
  int32_t local_var_88;
  int8_t local_var_80;
  int8_t stack_array_78 [8];
  int8_t stack_array_70 [8];
  int8_t stack_array_68 [40];
  uVar8 = *(uint *)(param_1 + 0x6c);
  uVar6 = 0;
  iVar4 = 0;
  if ((uVar8 >> 0x1a & 1) == 0) goto LAB_1808963ec;
  if ((uVar8 & 1) == 0) {
    plStack_108 = (int64_t *)(param_1 + 0x70);
    local_var_118 = 0;
    iVar16 = 0;
    astack_special_x_10[0] = 0;
    local_var_110 = 0;
    local_var_100 = 0xffffffffffffffff;
    aiStack_f8[0] = -1;
    NetworkSystem_ConnectionHandler(plStack_108,&local_var_100,aiStack_f8);
    aiStackX_8[0] = aiStack_f8[0];
    if (aiStack_f8[0] != -1) {
      plVar13 = plStack_108;
      uVar10 = uVar6;
      iVar11 = (int)local_var_100;
      do {
        do {
          iVar16 = (int)uVar10;
          lVar5 = plVar13[2];
          lVar15 = (int64_t)aiStackX_8[0];
          iVar4 = *(int *)(lVar5 + 8 + lVar15 * 0x10);
          if (iVar4 == 2) {
            iVar4 = Function_85b738db(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),&stack_special_x_18);
            uVar3 = stack_special_x_18;
            plVar13 = plStack_108;
            if ((iVar4 == 0) &&
               (iVar4 = Function_9f92c561(stack_special_x_18), plVar13 = plStack_108, 0 < iVar4)) {
              do {
                local_var_e0 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
                local_var_e8 = 0;
                plocal_var_f0 = &processed_var_6120_ptr;
                function_892120(&plocal_var_f0,*(uint64_t *)(param_1 + 0x58));
                iVar4 = Function_9f92c561(uVar3);
              } while (0 < iVar4);
              uVar6 = (uint64_t)astack_special_x_10[0];
              plVar13 = plStack_108;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = Function_85b738db(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),astack_special_x_20);
            plVar13 = plStack_108;
            if (iVar4 == 0) {
              plocal_var_d8 = &processed_var_7624_ptr;
              local_var_c8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_d0 = 0;
              local_var_c0 = 1;
              function_893420(&plocal_var_d8,*(uint64_t *)(param_1 + 0x58));
              plocal_var_f0 = &processed_var_8024_ptr;
              local_var_e0 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_e8 = 0;
              function_8920e0(&plocal_var_f0,*(uint64_t *)(param_1 + 0x58));
              plVar13 = plStack_108;
            }
          }
          else if (iVar4 == 5) {
            iVar4 = Function_85b738db(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),stack_array_78);
            plVar13 = plStack_108;
            if (iVar4 == 0) {
              plocal_var_d8 = &processed_var_9536_ptr;
              local_var_c8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_d0 = 0;
              local_var_c0 = 0x3f800000;
              function_891d40(&plocal_var_d8,*(uint64_t *)(param_1 + 0x58));
              plocal_var_98 = &processed_var_9656_ptr;
              local_var_88 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_90 = 0;
              local_var_80 = 0;
              function_891cf0(&plocal_var_98,*(uint64_t *)(param_1 + 0x58));
              plocal_var_b8 = &system_string2_ptr;
              local_var_a8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_b0 = 0;
              local_var_a0 = local_var_a0 & 0xffffff00;
              function_891ca0(&plocal_var_b8,*(uint64_t *)(param_1 + 0x58));
              plocal_var_f0 = &processed_var_9280_ptr;
              local_var_e0 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_e8 = 0;
              function_891de0(&plocal_var_f0,*(uint64_t *)(param_1 + 0x58));
              plVar13 = plStack_108;
            }
          }
          else if (iVar4 == 6) {
            iVar4 = Function_85b738db(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),stack_array_70);
            plVar13 = plStack_108;
            if (iVar4 == 0) {
              plocal_var_b8 = &rendering_buffer_24_ptr;
              local_var_a8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              local_var_b0 = 0;
              local_var_a0 = 0x3f800000;
              function_894300(&plocal_var_b8,*(uint64_t *)(param_1 + 0x58));
              plVar13 = plStack_108;
            }
          }
          else if ((iVar4 == 7) &&
                  (iVar4 = Function_85b738db(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),
                                               stack_array_68), plVar13 = plStack_108, iVar4 == 0)) {
            uVar2 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
            iVar7 = (int)uVar6 + 1;
            iVar4 = iVar16;
            if (iVar16 < 0) {
              iVar4 = -iVar16;
            }
            iVar14 = (int)uVar6;
            if (iVar4 < iVar7) {
              if (iVar16 < 0) {
                iVar16 = -iVar16;
              }
              iVar16 = (int)((float)iVar16 * 1.5);
              iVar4 = iVar7;
              if (iVar7 <= iVar16) {
                iVar4 = iVar16;
              }
              if (iVar4 < 0x10) {
                iVar16 = 0x10;
              }
              else if (iVar16 < iVar7) {
                iVar16 = iVar7;
              }
              uVar8 = function_84c470(&local_var_118,iVar16);
              uVar6 = (uint64_t)uVar8;
              iVar4 = (int)local_var_110;
              if (uVar8 != 0) {
                uVar8 = local_var_110._4_4_;
                if ((int64_t)local_var_110 < 0) {
                  uVar8 = -local_var_110._4_4_;
                }
                lVar5 = (int64_t)(int)local_var_110;
                uVar9 = local_var_110._4_4_;
                if ((int)uVar8 < 0) {
                  if (0 < (int)local_var_110) {
                    return uVar6;
                  }
                  if ((0 < (int)local_var_110._4_4_) && (local_var_118 != 0)) {
// WARNING: Subroutine does not return
                    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),local_var_118,&processed_var_8432_ptr,
                                  0x100,1);
                  }
                  local_var_118 = 0;
                  local_var_110 = 0;
                  uVar9 = 0;
                }
                if (iVar4 < 0) {
                  puVar12 = (int32_t *)(local_var_118 + lVar5 * 4);
                  lVar5 = (int64_t)-iVar4;
                  if (iVar4 < 0) {
                    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 1;
                    }
                  }
                }
                local_var_110 = local_var_110 & 0xffffffff00000000;
                if ((int)uVar9 < 0) {
                  uVar9 = -uVar9;
                }
                if (uVar9 == 0) {
                  return uVar6;
                }
                function_84c470(&local_var_118,0);
                return uVar6;
              }
              uVar10 = (uint64_t)local_var_110._4_4_;
              iVar14 = (int)local_var_110;
            }
            astack_special_x_10[0] = iVar14 + 1;
            uVar6 = (uint64_t)astack_special_x_10[0];
            local_var_110 = CONCAT44(local_var_110._4_4_,astack_special_x_10[0]);
            *(int32_t *)(local_var_118 + (int64_t)iVar14 * 4) = uVar2;
            plVar13 = plStack_108;
          }
          iVar4 = (int)uVar10;
          iVar16 = (int)uVar6;
        } while ((aiStackX_8[0] != -1) &&
                (aiStackX_8[0] = *(int *)(plVar13[2] + 4 + lVar15 * 0x10), aiStackX_8[0] != -1));
        iVar7 = iVar11 + 1;
        bVar17 = iVar11 != -1;
        iVar11 = 0;
        if (bVar17) {
          iVar11 = iVar7;
        }
        if (iVar11 != (int)plVar13[1]) {
          lVar5 = (int64_t)iVar11;
          do {
            if (*(int *)(*plVar13 + lVar5 * 4) != -1) {
              aiStackX_8[0] = *(int *)(*plVar13 + (int64_t)iVar11 * 4);
              goto LAB_1808962af;
            }
            iVar11 = iVar11 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != (int)plVar13[1]);
        }
        aiStackX_8[0] = -1;
        iVar11 = aiStackX_8[0];
LAB_1808962af:
      } while (aiStackX_8[0] != -1);
      aiStackX_8[0] = -1;
      uVar6 = local_var_118;
    }
    lVar5 = (int64_t)(iVar16 + -1);
    if (-1 < iVar16 + -1) {
      do {
        local_var_100 = local_var_100 & 0xffffffff00000000;
        plStack_108 = (int64_t *)&processed_var_4128_ptr;
        aiStack_f8[0] = *(int *)(uVar6 + lVar5 * 4);
        function_891af0(&plStack_108,*(uint64_t *)(param_1 + 0x58));
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    iVar11 = iVar4;
    if (iVar4 < 0) {
      iVar11 = -iVar4;
    }
    if (iVar11 < 0) {
      if (0 < iVar16) goto LAB_18089638e;
      if ((0 < iVar4) && (uVar6 != 0)) {
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6,&processed_var_8432_ptr,0x100,1);
      }
      local_var_118 = 0;
      local_var_110 = 0;
      uVar6 = 0;
      iVar4 = 0;
    }
    if (iVar16 < 0) {
      lVar5 = (int64_t)-iVar16;
      puVar12 = (int32_t *)(uVar6 + (int64_t)iVar16 * 4);
      if (iVar16 < 0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
    }
    local_var_110 = local_var_110 & 0xffffffff00000000;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 != 0) {
      function_84c470(&local_var_118,0);
    }
  }
LAB_18089638e:
  uVar6 = 0;
  uVar10 = uVar6;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar8 = (int)uVar10 + 1;
      pbVar1 = (byte *)(uVar6 + 0xb + *(int64_t *)(param_1 + 0x18));
      *pbVar1 = *pbVar1 & 0xfe;
      uVar6 = uVar6 + 0xc;
      uVar10 = (uint64_t)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x20));
  }
  iVar4 = SystemLockProcessor(param_1 + 0x70);
  if ((iVar4 == 0) && (iVar4 = function_895130(param_1 + 0x80), iVar4 == 0)) {
    *(int32_t *)(param_1 + 0x90) = 0xffffffff;
    *(int32_t *)(param_1 + 0x94) = 0;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfbffffff;
  uVar8 = *(uint *)(param_1 + 0x6c);
LAB_1808963ec:
  if ((uVar8 >> 0x19 & 1) != 0) {
    lVar5 = *(int64_t *)(param_1 + 0xa0);
    uVar6 = UtilitiesSystem_MathCalculator(*(uint64_t *)(param_1 + 0x60),param_1 + 0xa0,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((*(uint *)(param_1 + 0x6c) >> 0x18 & 1) == 0) {
      if ((*(int *)(param_1 + 0xb0) == -1) || (*(int *)(param_1 + 0xac) <= *(int *)(param_1 + 0xb0))
         ) {
        aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,1);
        astack_special_x_10[0] = 0;
        do {
          uVar6 = function_895360(param_1,aiStackX_8,astack_special_x_10);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        } while ((char)aiStackX_8[0] != (char)uVar6);
      }
      else {
        *(uint64_t *)(param_1 + 0xa8) = 0;
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x6000000;
        *(uint64_t *)(param_1 + 0x98) = 0;
        *(uint64_t *)(param_1 + 0xa0) = 0;
      }
    }
    else if ((*(int64_t *)(param_1 + 0x98) != 0) && (lVar5 != 0)) {
      *(int64_t *)(param_1 + 0x98) =
           (*(int64_t *)(param_1 + 0x98) - lVar5) + *(int64_t *)(param_1 + 0xa0);
    }
  }
  return 0;
}
uint64_t * function_896800(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_7840_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}
uint64_t * function_896830(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_7872_ptr;
  SystemCore_MemoryManager(param_1 + 5);
  *param_1 = &processed_var_7840_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}
// 函数: void function_896880(int64_t *param_1)
void function_896880(int64_t *param_1)
{
  int iVar1;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 == 0) {
    *(int8_t *)(param_1 + 4) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8968a0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int *piVar3;
  uint64_t uVar4;
  int iVar5;
  if ((*(int64_t *)(param_1 + 8) != 0) && (iVar5 = *(int *)(param_1 + 0x30), 0 < iVar5)) {
    lVar1 = *(int64_t *)(param_1 + 0x28);
    if (0x40000 < iVar5) {
      lVar2 = Function_6c4a8787(lVar1 + 0x40000,10);
      if (lVar2 != 0) {
        iVar5 = ((int)lVar2 - (int)lVar1) + 1;
      }
    }
    piVar3 = (int *)SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5 + 0x19,
                                  &processed_var_9216_ptr,0x278,0,0,1);
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    *piVar3 = iVar5 + 0x19;
    *(int16_t *)(piVar3 + 2) = 0x508;
    *(int8_t *)((int64_t)piVar3 + 10) = 3;
    piVar3[3] = 1;
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90);
    uVar4 = Function_f5e8822d(*(uint64_t *)(lVar2 + 0x4d0),*(int32_t *)(lVar2 + 0x774));
    *(uint64_t *)(piVar3 + 4) = uVar4;
// WARNING: Subroutine does not return
    memcpy(piVar3 + 6,lVar1,(int64_t)iVar5);
  }
  return 0;
}
int function_896a30(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar2 = Function_fe6d9439(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = Function_5cdd918c(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_896aa0(int64_t param_1,int64_t param_2,int param_3)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  iVar2 = DataProcessor(param_2,param_3,&processed_var_8008_ptr);
  iVar3 = DataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = Function_a96b25c7(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}
int function_896b20(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = DataProcessor(param_2,param_3,&processed_var_8128_ptr);
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_fe6d9439(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = DataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = Function_5cdd918c(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
uint64_t function_896c10(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  uVar1 = UISystem_LayoutEngine(param_3,param_1 + 0x10);
  if ((int)uVar1 == 0) {
    *(int32_t *)(param_1 + 0x14) = 0;
    if ((1 < *(int *)(param_1 + 0x10)) && (uVar1 = SystemCore_DataProcessor(param_3), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address