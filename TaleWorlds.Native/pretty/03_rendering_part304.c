// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part304.c - 10 个函数
// 函数: void UISystem_2d180(int *param_1,int *param_2,int *param_3,int *param_4)
void UISystem_2d180(int *param_1,int *param_2,int *param_3,int *param_4)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int64_t lVar7;
  int *piVar8;
  int *piVar9;
  int8_t stack_array_4c8 [32];
  int aiStack_4a8 [2];
  int *piStack_4a0;
  int *piStack_498;
  int *piStack_490;
  int *apiStack_488 [3];
  int iStack_470;
  int32_t local_var_46c;
  int8_t stack_array_458 [1024];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4c8;
  apiStack_488[0] = param_1;
  iVar3 = UISystem_26a80(apiStack_488,2);
  if (iVar3 == 0) {
    *(uint64_t *)(apiStack_488[0] + 0x2e) = *(uint64_t *)(apiStack_488[0] + 0x32);
    *(uint64_t *)(apiStack_488[0] + 0x30) = *(uint64_t *)(apiStack_488[0] + 0x34);
    piVar6 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x4860,0x22);
    iVar3 = UISystem_2b010(param_1,piVar6,param_4,1);
    if (iVar3 == 0) {
      if (piVar6 != (int *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(piVar6);
      }
      *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x32);
      *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x34);
      local_var_46c = 0xff;
      lVar7 = UISystem_276f0(param_1,apiStack_488);
      *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x32);
      *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x34);
      if (lVar7 == 0) {
        piVar6 = aiStack_4a8;
        if (param_2 != (int *)0x0) {
          piVar6 = param_2;
        }
        piStack_4a0 = aiStack_4a8;
        if (param_3 != (int *)0x0) {
          piStack_4a0 = param_3;
        }
        piVar9 = aiStack_4a8;
        if (param_4 != (int *)0x0) {
          piVar9 = param_4;
        }
        iVar3 = RenderingSystem_Renderer(param_1);
        iVar4 = RenderingSystem_Renderer(param_1);
        if ((iVar4 + iVar3 * 0x10000 == 0x38425053) && (iVar3 = RenderingSystem_Renderer(param_1), iVar3 == 1))
        {
          if ((*(int64_t *)(param_1 + 4) == 0) ||
             (iVar3 = param_1[0x2e], 5 < param_1[0x30] - iVar3)) {
            *(int64_t *)(param_1 + 0x2e) = *(int64_t *)(param_1 + 0x2e) + 6;
          }
          else {
            *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x30);
            (**(code **)(param_1 + 6))(*(uint64_t *)(param_1 + 10),6 - (param_1[0x30] - iVar3));
          }
          uVar5 = RenderingSystem_Renderer(param_1);
          if (uVar5 < 0x11) {
            iVar3 = UISystem_1f070(param_1);
            *piStack_4a0 = iVar3;
            iVar3 = UISystem_1f070(param_1);
            *piVar6 = iVar3;
            iVar3 = RenderingSystem_Renderer(param_1);
            if ((iVar3 == 8) && (iVar3 = RenderingSystem_Renderer(param_1), iVar3 == 3)) {
              *piVar9 = 4;
              goto LAB_18042d5a9;
            }
          }
        }
        *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x32);
        *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x34);
        iVar3 = UISystem_2c990(param_1,param_2,param_3,param_4);
        if ((iVar3 == 0) && (iVar3 = UISystem_2cfb0(param_1,param_2,param_3,param_4), iVar3 == 0)) {
          bVar2 = false;
          piStack_498 = aiStack_4a8;
          if (param_2 != (int *)0x0) {
            piStack_498 = param_2;
          }
          piVar6 = aiStack_4a8;
          if (param_3 != (int *)0x0) {
            piVar6 = param_3;
          }
          piStack_490 = aiStack_4a8;
          if (param_4 != (int *)0x0) {
            piStack_490 = param_4;
          }
          iVar3 = UISystem_2bf80(param_1);
          if ((iVar3 != 0) &&
             (piStack_4a0 = (int *)UISystem_2bff0(param_1,stack_array_458), (char)*piStack_4a0 != '\0'))
          {
            do {
              iVar3 = strcmp(piStack_4a0,&processed_var_9832_ptr);
              if (iVar3 == 0) {
                bVar2 = true;
              }
              piStack_4a0 = (int *)UISystem_2bff0(param_1,stack_array_458);
              piVar9 = piStack_498;
            } while ((char)*piStack_4a0 != '\0');
            if (bVar2) {
              piStack_4a0 = (int *)UISystem_2bff0(param_1,stack_array_458);
              iVar3 = strncmp(piStack_4a0,&processed_var_9856_ptr,3);
              if (iVar3 == 0) {
                piStack_4a0 = (int *)((int64_t)piStack_4a0 + 3);
                iVar3 = strtol(piStack_4a0,&piStack_4a0,10);
                piVar8 = piStack_4a0;
                *piVar6 = iVar3;
                cVar1 = (char)*piVar8;
                while (cVar1 == ' ') {
                  piVar8 = (int *)((int64_t)piVar8 + 1);
                  piStack_4a0 = piVar8;
                  cVar1 = *(char *)piVar8;
                }
                iVar3 = strncmp(piVar8,&processed_var_9828_ptr,3);
                if (iVar3 == 0) {
                  piStack_4a0 = (int *)((int64_t)piStack_4a0 + 3);
                  iVar3 = strtol(piStack_4a0,0,10);
                  piVar6 = piStack_490;
                  *piVar9 = iVar3;
                  *piVar6 = 3;
                  goto LAB_18042d5a9;
                }
              }
            }
          }
          *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x32);
          *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x34);
          UISystem_28680(param_1,param_2,param_3,param_4);
        }
      }
      else {
        if (param_2 != (int *)0x0) {
          *param_2 = *param_1;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = param_1[1];
        }
        if (param_4 != (int *)0x0) {
          *param_4 = (iStack_470 != 0) + 3;
        }
      }
    }
    else {
      if (param_2 != (int *)0x0) {
        *param_2 = *piVar6;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = piVar6[1];
      }
      if (piVar6 != (int *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(piVar6);
      }
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      *param_2 = *apiStack_488[0];
    }
    if (param_3 != (int *)0x0) {
      *param_3 = apiStack_488[0][1];
    }
    if (param_4 != (int *)0x0) {
      *param_4 = apiStack_488[0][2];
    }
  }
LAB_18042d5a9:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_4c8);
}
// 函数: void UISystem_2d5f0(uint64_t *param_1,char *param_2,int64_t param_3)
void UISystem_2d5f0(uint64_t *param_1,char *param_2,int64_t param_3)
{
  int32_t uVar1;
  char cVar2;
  int8_t *puVar3;
  uint64_t uVar4;
  int8_t astack_special_x_10 [8];
  int8_t stack_special_x_20;
  int8_t stack_special_x_21;
  int8_t local_var_18;
  int8_t local_var_17;
  int8_t local_var_16;
  int8_t local_var_15;
  cVar2 = *param_2;
  if (cVar2 != '\0') {
    param_3 = param_3 + -8;
    do {
      param_2 = param_2 + 1;
      if (cVar2 != ' ') {
        if (cVar2 == '1') {
          astack_special_x_10[0] = *(int8_t *)(param_3 + 8);
          puVar3 = astack_special_x_10;
          uVar4 = 1;
        }
        else if (cVar2 == '2') {
          puVar3 = &stack_special_x_20;
          stack_special_x_20 = (int8_t)*(int32_t *)(param_3 + 8);
          uVar4 = 2;
          stack_special_x_21 = (int8_t)((uint)*(int32_t *)(param_3 + 8) >> 8);
        }
        else {
          if (cVar2 != '4') {
            return;
          }
          uVar1 = *(int32_t *)(param_3 + 8);
          puVar3 = &local_var_18;
          local_var_18 = (int8_t)uVar1;
          uVar4 = 4;
          local_var_17 = (int8_t)((uint)uVar1 >> 8);
          local_var_15 = (int8_t)((uint)uVar1 >> 0x18);
          local_var_16 = (int8_t)((uint)uVar1 >> 0x10);
        }
        param_3 = param_3 + 8;
        (*(code *)*param_1)(param_1[1],puVar3,uVar4);
      }
      cVar2 = *param_2;
    } while (cVar2 != '\0');
  }
  return;
}
// 函数: void UISystem_2d60b(uint64_t param_1,uint64_t param_2,int64_t param_3)
void UISystem_2d60b(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  char in_AL;
  uint64_t *puVar2;
  char *unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uVar3;
  int8_t stack_special_x_20;
  int8_t stack_special_x_21;
  int8_t stack_special_x_22;
  int8_t stack_special_x_23;
  int8_t local_var_48;
  int8_t local_buffer_58;
  int8_t local_buffer_59;
  param_3 = param_3 + -8;
  do {
    unaff_RSI = unaff_RSI + 1;
    if (in_AL != ' ') {
      if (in_AL == '1') {
        local_var_48 = *(int8_t *)(param_3 + 8);
        puVar2 = (uint64_t *)&local_buffer_00000048;
        uVar3 = 1;
      }
      else if (in_AL == '2') {
        puVar2 = (uint64_t *)&local_buffer_00000058;
        local_buffer_58 = (int8_t)*(int32_t *)(param_3 + 8);
        uVar3 = 2;
        local_buffer_59 = (int8_t)((uint)*(int32_t *)(param_3 + 8) >> 8);
      }
      else {
        if (in_AL != '4') {
          return;
        }
        uVar1 = *(int32_t *)(param_3 + 8);
        puVar2 = (uint64_t *)&stack_special_x_20;
        stack_special_x_20 = (int8_t)uVar1;
        uVar3 = 4;
        stack_special_x_21 = (int8_t)((uint)uVar1 >> 8);
        stack_special_x_23 = (int8_t)((uint)uVar1 >> 0x18);
        stack_special_x_22 = (int8_t)((uint)uVar1 >> 0x10);
      }
      param_3 = param_3 + 8;
      (*(code *)*unaff_RDI)(unaff_RDI[1],puVar2,uVar3);
    }
    in_AL = *unaff_RSI;
  } while (in_AL != '\0');
  return;
}
// 函数: void UISystem_2d6ac(void)
void UISystem_2d6ac(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_2d6c0(uint64_t *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
void UISystem_2d6c0(uint64_t *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                  int64_t param_7,int param_8,int32_t param_9,int param_10)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int64_t lVar8;
  byte *pbVar9;
  int32_t uVar10;
  uint64_t uVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int iStackX_18;
  byte bStack_58;
  int8_t local_var_57;
  int8_t local_var_56;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  int iStack_4c;
  int32_t local_var_48;
  int iStack_44;
  int iStack_40;
  iVar4 = param_8;
  iVar3 = param_6;
  local_var_48 = 0;
  if (0 < param_5) {
    iStackX_18 = param_3;
    if (render_system_data_config != 0) {
      iStackX_18 = -param_3;
    }
    iVar12 = param_5 + -1;
    if (-1 < iStackX_18) {
      iVar12 = 0;
    }
    iStack_40 = -1;
    if (-1 < iStackX_18) {
      iStack_40 = param_5;
    }
    if (iVar12 != iStack_40) {
      lVar8 = (int64_t)param_6;
      iStack_4c = iVar12 * param_4 * param_6;
      lVar14 = (int64_t)param_2;
      iStack_44 = iStackX_18 * param_4 * param_6;
      do {
        if (0 < (int)param_4) {
          pbVar9 = (byte *)(iStack_4c + param_7);
          uVar13 = (uint64_t)param_4;
          do {
            if (iVar4 < 0) {
              (*(code *)*param_1)(param_1[1],pbVar9 + (iVar3 + -1),1);
            }
            iVar2 = param_5;
            if (iVar3 < 1) {
LAB_18042d8d2:
              if (0 < iVar4) {
                uVar10 = 1;
                pbVar7 = pbVar9 + (iVar3 + -1);
                goto LAB_18042d8e5;
              }
            }
            else {
              if (iVar3 < 3) {
                if (param_10 == 0) {
                  uVar11 = 1;
                  pbVar7 = pbVar9;
                }
                else {
                  bStack_50 = *pbVar9;
                  uVar11 = 3;
                  pbVar7 = &bStack_50;
                  bStack_4f = bStack_50;
                  bStack_4e = bStack_50;
                }
LAB_18042d8cc:
                (*(code *)*param_1)(param_1[1],pbVar7,uVar11);
                goto LAB_18042d8d2;
              }
              if (iVar3 == 3) {
LAB_18042d870:
                uVar11 = 3;
                bStack_54 = pbVar9[1 - lVar14];
                bStack_53 = pbVar9[1];
                bStack_52 = pbVar9[lVar14 + 1];
                pbVar7 = &bStack_54;
                goto LAB_18042d8cc;
              }
              if (iVar3 != 4) goto LAB_18042d8d2;
              if (iVar4 != 0) goto LAB_18042d870;
              bVar1 = pbVar9[3];
              iVar5 = (*pbVar9 - 0xff) * (uint)bVar1;
              iVar6 = (pbVar9[2] - 0xff) * (uint)bVar1;
              local_var_57 = (int8_t)(((uint)pbVar9[1] * (uint)bVar1) / 0xff);
              uVar10 = 3;
              param_5._3_1_ = SUB41(iVar2,3);
              param_5._0_3_ =
                   CONCAT12((((char)(iVar6 / 0xff) + (char)(iVar6 >> 0x1f)) -
                            (char)((int64_t)iVar6 * 0x80808081 >> 0x3f)) + -1,
                            CONCAT11(local_var_57,
                                     (((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
                                     (char)((int64_t)iVar5 * 0x80808081 >> 0x3f)) + -1));
              pbVar7 = &bStack_58;
              bStack_58 = *(byte *)((int64_t)&param_5 + (1 - lVar14));
              local_var_56 = *(int8_t *)((int64_t)&param_5 + lVar14 + 1);
LAB_18042d8e5:
              (*(code *)*param_1)(param_1[1],pbVar7,uVar10);
            }
            pbVar9 = pbVar9 + lVar8;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        (*(code *)*param_1)(param_1[1],&local_var_48,param_9);
        iStack_4c = iStack_4c + iStack_44;
        iVar12 = iVar12 + iStackX_18;
      } while (iVar12 != iStack_40);
    }
  }
  return;
}
// 函数: void UISystem_2d6ee(int param_1,int param_2,int param_3,uint param_4,uint64_t param_5)
void UISystem_2d6ee(int param_1,int param_2,int param_3,uint param_4,uint64_t param_5)
{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint64_t *puVar4;
  int8_t *puVar5;
  uint64_t *unaff_RBX;
  int64_t lVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int64_t in_R11;
  int iVar10;
  uint64_t unaff_R13;
  uint64_t uVar11;
  int64_t lVar12;
  bool in_ZF;
  int8_t stack_special_x_20;
  int8_t stack_special_x_21;
  int8_t stack_special_x_22;
  int8_t stack_special_x_24;
  int8_t stack_special_x_25;
  int8_t stack_special_x_26;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int local_var_90;
  uint local_var_98;
  uint64_t local_var_a0;
  int local_var_a8;
  int64_t local_buffer_b0;
  int local_buffer_b8;
  int32_t local_buffer_c0;
  int local_buffer_c8;
  iVar2 = local_buffer_b8;
  iVar1 = local_var_a8;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  if (!in_ZF) {
    param_3 = -param_3;
    *(int *)(in_R11 + 0x18) = param_3;
  }
  iVar10 = in_EAX + -1;
  if (-1 < param_3) {
    iVar10 = param_1;
  }
  iStack0000000000000038 = -1;
  if (-1 < param_3) {
    iStack0000000000000038 = in_EAX;
  }
  if (iVar10 != iStack0000000000000038) {
    lVar6 = (int64_t)local_var_a8;
    param_5._4_4_ = iVar10 * param_4 * local_var_a8;
    lVar12 = (int64_t)param_2;
    iStack0000000000000034 = param_3 * param_4 * local_var_a8;
    do {
      if (0 < (int)param_4) {
        puVar7 = (uint64_t *)(param_5._4_4_ + local_buffer_b0);
        uVar11 = (uint64_t)param_4;
        do {
          if (iVar2 < 0) {
            (*(code *)*unaff_RBX)
                      (unaff_RBX[1],(int8_t *)((int64_t)(iVar1 + -1) + (int64_t)puVar7),1);
          }
          if (iVar1 < 1) {
LAB_18042d8d2:
            if (0 < iVar2) {
              uVar8 = 1;
              puVar5 = (int8_t *)((int64_t)(iVar1 + -1) + (int64_t)puVar7);
              goto LAB_18042d8e5;
            }
          }
          else {
            if (iVar1 < 3) {
              if (local_buffer_c8 == 0) {
                uVar9 = 1;
                puVar4 = puVar7;
              }
              else {
                param_5._0_1_ = *(int8_t *)puVar7;
                uVar9 = 3;
                puVar4 = &param_5;
                param_5._1_1_ = (int8_t)param_5;
                param_5._2_1_ = (int8_t)param_5;
              }
LAB_18042d8cc:
              (*(code *)*unaff_RBX)(unaff_RBX[1],puVar4,uVar9);
              goto LAB_18042d8d2;
            }
            if (iVar1 == 3) {
LAB_18042d870:
              uVar9 = 3;
              stack_special_x_24 = *(int8_t *)((int64_t)puVar7 + (1 - lVar12));
              stack_special_x_25 = *(int8_t *)((int64_t)puVar7 + 1);
              stack_special_x_26 = *(int8_t *)(lVar12 + 1 + (int64_t)puVar7);
              puVar4 = (uint64_t *)&stack_special_x_24;
              goto LAB_18042d8cc;
            }
            if (iVar1 != 4) goto LAB_18042d8d2;
            if (iVar2 != 0) goto LAB_18042d870;
            iVar3 = (*(byte *)((int64_t)puVar7 + 2) - 0xff) * (uint)*(byte *)((int64_t)puVar7 + 3)
            ;
            stack_special_x_21 = (int8_t)
                         (((uint)*(byte *)((int64_t)puVar7 + 1) *
                          (uint)*(byte *)((int64_t)puVar7 + 3)) / 0xff);
            local_var_a0._1_1_ = stack_special_x_21;
            uVar8 = 3;
            local_var_a0._2_1_ =
                 (((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                 (char)((int64_t)iVar3 * 0x80808081 >> 0x3f)) + -1;
            puVar5 = &stack_special_x_20;
            stack_special_x_20 = *(int8_t *)((int64_t)&local_buffer_000000a0 + (1 - lVar12));
            stack_special_x_22 = *(int8_t *)((int64_t)&local_buffer_000000a0 + lVar12 + 1);
LAB_18042d8e5:
            (*(code *)*unaff_RBX)(unaff_RBX[1],puVar5,uVar8);
          }
          puVar7 = (uint64_t *)((int64_t)puVar7 + lVar6);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      (*(code *)*unaff_RBX)(unaff_RBX[1],&local_buffer_00000030,local_buffer_c0);
      param_5._4_4_ = param_5._4_4_ + iStack0000000000000034;
      iVar10 = iVar10 + local_var_90;
      param_4 = local_var_98;
    } while (iVar10 != iStack0000000000000038);
  }
  return;
}
// 函数: void UISystem_2d71b(uint64_t param_1,int param_2,int param_3,uint param_4,uint64_t param_5,
void UISystem_2d71b(uint64_t param_1,int param_2,int param_3,uint param_4,uint64_t param_5,
                  uint64_t param_6,int param_7)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  int8_t *puVar5;
  uint64_t *unaff_RBX;
  int64_t lVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int unaff_R13D;
  uint64_t uVar10;
  int64_t lVar11;
  int8_t stack_special_x_20;
  int8_t stack_special_x_21;
  int8_t stack_special_x_22;
  int8_t stack_special_x_24;
  int8_t stack_special_x_25;
  int8_t stack_special_x_26;
  int local_var_90;
  uint local_var_98;
  uint64_t local_var_a0;
  int local_var_a8;
  int64_t local_buffer_b0;
  int local_buffer_b8;
  int32_t local_buffer_c0;
  int local_buffer_c8;
  iVar2 = local_buffer_b8;
  iVar1 = local_var_a8;
  lVar6 = (int64_t)local_var_a8;
  param_5._4_4_ = unaff_R13D * param_4 * local_var_a8;
  lVar11 = (int64_t)param_2;
  param_6._4_4_ = param_3 * param_4 * local_var_a8;
  do {
    if (0 < (int)param_4) {
      puVar7 = (uint64_t *)(param_5._4_4_ + local_buffer_b0);
      uVar10 = (uint64_t)param_4;
      do {
        if (iVar2 < 0) {
          (*(code *)*unaff_RBX)
                    (unaff_RBX[1],(int8_t *)((int64_t)(iVar1 + -1) + (int64_t)puVar7),1);
        }
        if (iVar1 < 1) {
LAB_18042d8d2:
          if (0 < iVar2) {
            uVar8 = 1;
            puVar5 = (int8_t *)((int64_t)(iVar1 + -1) + (int64_t)puVar7);
            goto LAB_18042d8e5;
          }
        }
        else {
          if (iVar1 < 3) {
            if (local_buffer_c8 == 0) {
              uVar9 = 1;
              puVar4 = puVar7;
            }
            else {
              param_5._0_1_ = *(int8_t *)puVar7;
              uVar9 = 3;
              puVar4 = &param_5;
              param_5._1_1_ = (int8_t)param_5;
              param_5._2_1_ = (int8_t)param_5;
            }
LAB_18042d8cc:
            (*(code *)*unaff_RBX)(unaff_RBX[1],puVar4,uVar9);
            goto LAB_18042d8d2;
          }
          if (iVar1 == 3) {
LAB_18042d870:
            uVar9 = 3;
            stack_special_x_24 = *(int8_t *)((int64_t)puVar7 + (1 - lVar11));
            stack_special_x_25 = *(int8_t *)((int64_t)puVar7 + 1);
            stack_special_x_26 = *(int8_t *)(lVar11 + 1 + (int64_t)puVar7);
            puVar4 = (uint64_t *)&stack_special_x_24;
            goto LAB_18042d8cc;
          }
          if (iVar1 != 4) goto LAB_18042d8d2;
          if (iVar2 != 0) goto LAB_18042d870;
          iVar3 = (*(byte *)((int64_t)puVar7 + 2) - 0xff) * (uint)*(byte *)((int64_t)puVar7 + 3);
          stack_special_x_21 = (int8_t)
                       (((uint)*(byte *)((int64_t)puVar7 + 1) *
                        (uint)*(byte *)((int64_t)puVar7 + 3)) / 0xff);
          local_var_a0._1_1_ = stack_special_x_21;
          uVar8 = 3;
          local_var_a0._2_1_ =
               (((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
               (char)((int64_t)iVar3 * 0x80808081 >> 0x3f)) + -1;
          puVar5 = &stack_special_x_20;
          stack_special_x_20 = *(int8_t *)((int64_t)&local_buffer_000000a0 + (1 - lVar11));
          stack_special_x_22 = *(int8_t *)((int64_t)&local_buffer_000000a0 + lVar11 + 1);
LAB_18042d8e5:
          (*(code *)*unaff_RBX)(unaff_RBX[1],puVar5,uVar8);
        }
        puVar7 = (uint64_t *)((int64_t)puVar7 + lVar6);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    (*(code *)*unaff_RBX)(unaff_RBX[1],&param_6,local_buffer_c0);
    param_5._4_4_ = param_5._4_4_ + param_6._4_4_;
    unaff_R13D = unaff_R13D + local_var_90;
    param_4 = local_var_98;
    if (unaff_R13D == param_7) {
      return;
    }
  } while( true );
}
// 函数: void UISystem_2d953(void)
void UISystem_2d953(void)
{
  return;
}
// 函数: void UISystem_2d958(void)
void UISystem_2d958(void)
{
  return;
}
uint64_t
UISystem_2d960(uint64_t param_1,int32_t param_2,int32_t param_3,int param_4,int param_5,
             int32_t param_6,int32_t param_7,uint64_t param_8,int32_t param_9,
             int32_t param_10,uint64_t param_11)
{
  if ((-1 < param_5) && (-1 < param_4)) {
    UISystem_2d5f0(param_1,param_11,&local_buffer_00000060);
    UISystem_2d6c0(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,param_7);
    return 1;
  }
  return 0;
}
// 函数: void UISystem_2da00(uint64_t param_1,uint param_2,int param_3,int32_t param_4,uint64_t param_5
void UISystem_2da00(uint64_t param_1,uint param_2,int param_3,int32_t param_4,uint64_t param_5
                  )
{
  UISystem_2d960(param_1,0xffffffff,0xffffffff,param_2,param_3,param_4,1,param_5,0,param_2 & 3,
                &processed_var_9864_ptr,0x42,0x4d,((param_2 & 3) + param_2 * 3) * param_3 + 0x36,0,0,0x36,
                0x28,param_2,param_3,1,0x18,0,0,0,0,0,0);
  return;
}