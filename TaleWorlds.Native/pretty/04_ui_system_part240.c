#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part240.c - 6 个函数
// 函数: void function_8054b4(void)
void function_8054b4(void)
{
  return;
}
uint64_t
function_8054c0(int64_t *param_1,int param_2,int64_t param_3,int param_4,uint *param_5,
             int32_t *param_6,int32_t *param_7)
{
  ushort uVar1;
  int64_t lVar2;
  ushort *puVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  lVar2 = *param_1;
  if ((param_3 != 0) && (0 < param_4)) {
    WideCharToMultiByte(0xfde9,0,*(uint64_t *)(lVar2 + ((int64_t)param_2 + 0xc) * 0x10),
                        0xffffffff,param_3,param_4 + -1,0,0);
  }
  if (param_5 != (uint *)0x0) {
    uVar7 = 0x811c9dc5;
    puVar3 = *(ushort **)((int64_t)param_2 * 0x10 + 0xb8 + lVar2);
    uVar1 = *puVar3;
    uVar6 = uVar1;
    while (uVar1 != 0) {
      cVar5 = (char)uVar6;
      puVar3 = puVar3 + 1;
      uVar4 = uVar1 >> 8;
      uVar1 = *puVar3;
      uVar6 = uVar1 & 0xff;
      uVar7 = (((int)cVar5 ^ uVar7) * 0x1000193 ^ (int)(char)uVar4) * 0x1000193;
    }
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    *param_5 = uVar7;
  }
  *param_6 = 48000;
  *param_7 = 8;
  return 0;
}
uint64_t function_8055a0(int64_t *param_1,int32_t *param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = (*(code *)param_1[2])(0x3d8,0,&processed_var_7872_ptr,0x1ee);
    *param_1 = lVar1;
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      memset(lVar1,0,0x3d8);
    }
    return 0x26;
  }
  if ((*(char *)(lVar1 + 0xb0) == '\0') && (uVar2 = function_8051c0(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *param_2 = *(int32_t *)(lVar1 + 0x2b8);
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_805640(int64_t *param_1,int param_2,uint64_t param_3,int *param_4,int32_t *param_5
void function_805640(int64_t *param_1,int param_2,uint64_t param_3,int *param_4,int32_t *param_5
                  ,int32_t *param_6,int32_t *param_7)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int32_t **ppuVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint uVar8;
  int8_t stack_array_f8 [32];
  int64_t *plStack_d8;
  int8_t local_var_d0;
  int8_t local_var_c8;
  int64_t *plStack_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int32_t **pplocal_var_a0;
  int64_t lStack_98;
  int32_t local_var_90;
  int iStack_8c;
  int iStack_88;
  int16_t local_var_84;
  int16_t local_var_82;
  int16_t local_var_80;
  int32_t *plocal_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int64_t lStack_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  if (*param_4 == 48000) {
    *param_4 = 48000;
    *param_5 = 8;
    *param_6 = 0xc;
    *param_7 = 5;
    plVar1 = (int64_t *)*param_1;
    if ((int)plVar1[0x57] != 0) {
      puVar7 = (uint64_t *)0x0;
      lVar5 = plVar1[(int64_t)param_2 * 2 + 0x17];
      plVar1[4] = 0;
      ppuVar4 = (int32_t **)CoTaskMemAlloc(0x30);
      if (ppuVar4 != (int32_t **)0x0) {
        local_var_90 = 0xb7b4e913;
        iStack_8c = 0x474002f7;
        iStack_88 = -0x5304725d;
        local_var_84 = 0xb3b;
        local_var_82 = 0x84de;
        CoCreateGuid(ppuVar4);
        *(int32_t *)(ppuVar4 + 4) = 2;
        *(int32_t *)((int64_t)ppuVar4 + 0x24) = 2;
        ppuVar4[2] = (int32_t *)CONCAT44(iStack_8c,local_var_90);
        ppuVar4[3] = (int32_t *)CONCAT26(local_var_82,CONCAT24(local_var_84,iStack_88));
        *(int32_t *)(ppuVar4 + 5) = 0xe;
        *(int32_t *)((int64_t)ppuVar4 + 0x2c) = 0x209aa;
        local_var_b0 = 0x41;
        local_var_a8 = 0x30;
        lStack_98 = 0;
        plStack_b8 = (int64_t *)0x0;
        pplocal_var_a0 = ppuVar4;
        iVar3 = (**(code **)(**(int64_t **)(*param_1 + 0x2c0) + 0x28))
                          (*(int64_t **)(*param_1 + 0x2c0),lVar5,&plStack_b8);
        if (-1 < iVar3) {
          plStack_d8 = &lStack_98;
          iVar3 = (**(code **)(*plStack_b8 + 0x18))(plStack_b8,&processed_var_7992_ptr,0x17,&local_var_b0);
          if (((iVar3 + 0x80000000U & 0x80000000) != 0) || (iVar3 == -0x7fffbffe)) {
            (**(code **)(*plStack_b8 + 0x10))();
            if (iVar3 != -0x7fffbffe) {
              plVar1[4] = lStack_98;
            }
            plVar2 = (int64_t *)plVar1[4];
            if (plVar2 != (int64_t *)0x0) {
              local_var_82 = 0x20;
              local_var_80 = 0;
              local_var_84 = 4;
              iStack_8c = *param_4;
              local_var_90 = 0x10003;
              plStack_b8 = (int64_t *)((uint64_t)plStack_b8 & 0xffffffff00000000);
              iStack_88 = iStack_8c * 4;
              iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,&plStack_b8);
              if (-1 < iVar3) {
                lVar5 = CreateEventA(0,0,0,0);
                plVar1[2] = lVar5;
                if (lVar5 != 0) {
                  plocal_var_78 = &local_var_90;
                  pplocal_var_a0 = &plocal_var_78;
                  local_var_58 = 0;
                  local_var_70 = 0x1ffe;
                  local_var_68 = CONCAT44(6,(int)plStack_b8);
                  local_var_b0 = 0x41;
                  local_var_a8 = 0x28;
                  lStack_60 = lVar5;
                  iVar3 = (**(code **)(*(int64_t *)plVar1[4] + 0x50))
                                    ((int64_t *)plVar1[4],&local_var_b0,&processed_var_8008_ptr,plVar1 + 5);
                  if (-1 < iVar3) {
                    lVar5 = CreateEventA(0,0,0,0);
                    plVar1[3] = lVar5;
                    if (lVar5 != 0) {
                      local_var_70 = 6;
                      local_var_68 = 0x700000000;
                      lStack_60 = lVar5;
                      iVar3 = (**(code **)(*(int64_t *)plVar1[4] + 0x50))
                                        ((int64_t *)plVar1[4],&local_var_b0,&processed_var_8008_ptr,plVar1 + 6)
                      ;
                      if (-1 < iVar3) {
                        ppuVar4 = &plocal_var_78;
                        plocal_var_78 = (int32_t *)0x400000002;
                        local_var_70 = 0x1000000008;
                        local_var_58 = 0x40000000200;
                        local_var_50 = 0x100000000800;
                        local_var_68 = 0x4000000020;
                        lStack_60 = 0x10000000080;
                        puVar6 = puVar7;
                        do {
                          iVar3 = (**(code **)(*(int64_t *)plVar1[5] + 0x50))
                                            ((int64_t *)plVar1[5],*(int32_t *)ppuVar4,
                                             plVar1 + (int64_t)(int)puVar6 + 7);
                          if (iVar3 < 0) goto label_805aea;
                          uVar8 = (int)puVar6 + 1;
                          puVar6 = (uint64_t *)(uint64_t)uVar8;
                          ppuVar4 = (int32_t **)((int64_t)ppuVar4 + 4);
                        } while ((int)uVar8 < 0xc);
                        ppuVar4 = &plocal_var_78;
                        puVar6 = puVar7;
                        do {
                          iVar3 = (**(code **)(*(int64_t *)plVar1[6] + 0x50))
                                            ((int64_t *)plVar1[6],*(int32_t *)ppuVar4,
                                             plVar1 + (int64_t)(int)puVar6 + 0x13);
                          if (iVar3 < 0) goto label_805aea;
                          uVar8 = (int)puVar6 + 1;
                          puVar6 = (uint64_t *)(uint64_t)uVar8;
                          ppuVar4 = (int32_t **)((int64_t)ppuVar4 + 4);
                        } while ((int)uVar8 < 2);
                        lVar5 = (*(code *)param_1[2])(0xc000,0,&processed_var_7872_ptr,0x2e7);
                        *plVar1 = lVar5;
                        if (lVar5 != 0) {
                          lVar5 = (*(code *)param_1[2])(0x2000,0,&processed_var_7872_ptr,0x2ed);
                          plVar1[1] = lVar5;
                          if (((lVar5 != 0) &&
                              (iVar3 = (**(code **)(*(int64_t *)plVar1[5] + 0x28))(), -1 < iVar3))
                             && (iVar3 = (**(code **)(*(int64_t *)plVar1[6] + 0x28))(), -1 < iVar3)
                             ) {
                            local_var_c8 = 1;
                            local_var_d0 = 0;
                            plStack_d8 = (int64_t *)((uint64_t)plStack_d8 & 0xffffffff00000000);
                            puVar6 = (uint64_t *)
                                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,
                                                   &processed_var_7872_ptr,0x301);
                            if (puVar6 != (uint64_t *)0x0) {
                              *(int32_t *)(puVar6 + 1) = 0;
                              *puVar6 = &processed_var_7536_ptr;
                              puVar7 = puVar6;
                            }
                            plVar1[0x59] = (int64_t)puVar7;
                            if ((puVar7 != (uint64_t *)0x0) &&
                               (iVar3 = (**(code **)(*(int64_t *)plVar1[0x58] + 0x30))(),
                               -1 < iVar3)) {
                              *(int32_t *)(plVar1[0x59] + 8) = 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_805aea:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_805689(int64_t *param_1,int param_2,int32_t *param_3,int32_t *param_4)
void function_805689(int64_t *param_1,int param_2,int32_t *param_3,int32_t *param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t *in_RAX;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t unaff_RBP;
  int *unaff_RSI;
  int32_t *puVar10;
  uint uVar11;
  int64_t *unaff_R12;
  uint64_t uVar12;
  int32_t local_var_40;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  *in_RAX = 8;
  *param_3 = 0xc;
  *param_4 = 5;
  param_1 = (int64_t *)*param_1;
  if ((int)param_1[0x57] != 0) {
    puVar9 = (uint64_t *)0x0;
    lVar7 = param_1[(int64_t)param_2 * 2 + 0x17];
    param_1[4] = 0;
    lVar6 = CoTaskMemAlloc(0x30);
    if (lVar6 != 0) {
      *(int32_t *)(unaff_RBP + -0x69) = 0xb7b4e913;
      *(int32_t *)(unaff_RBP + -0x65) = 0x474002f7;
      *(int32_t *)(unaff_RBP + -0x61) = 0xacfb8da3;
      *(int32_t *)(unaff_RBP + -0x5d) = 0x84de0b3b;
      CoCreateGuid(lVar6);
      uVar3 = *(uint64_t *)(unaff_RBP + -0x69);
      uVar4 = *(uint64_t *)(unaff_RBP + -0x61);
      *(int32_t *)(lVar6 + 0x20) = 2;
      *(int32_t *)(lVar6 + 0x24) = 2;
      *(uint64_t *)(lVar6 + 0x10) = uVar3;
      *(uint64_t *)(lVar6 + 0x18) = uVar4;
      *(int32_t *)(lVar6 + 0x28) = 0xe;
      *(int32_t *)(lVar6 + 0x2c) = 0x209aa;
      lVar1 = *unaff_R12;
      local_var_48 = 0x41;
      local_buffer_50 = 0x30;
      *(int64_t *)(unaff_RBP + -0x79) = lVar6;
      *(uint64_t *)(unaff_RBP + -0x71) = 0;
      _local_var_40 = (int64_t *)0x0;
      iVar5 = (**(code **)(**(int64_t **)(lVar1 + 0x2c0) + 0x28))
                        (*(int64_t **)(lVar1 + 0x2c0),lVar7,&local_buffer_00000040);
      if (-1 < iVar5) {
        uVar12 = unaff_RBP - 0x71;
        iVar5 = (**(code **)(*_local_var_40 + 0x18))
                          (_local_var_40,&processed_var_7992_ptr,0x17,&local_buffer_00000048,uVar12);
        if (((iVar5 + 0x80000000U & 0x80000000) != 0) || (iVar5 == -0x7fffbffe)) {
          (**(code **)(*_local_var_40 + 0x10))();
          if (iVar5 != -0x7fffbffe) {
            param_1[4] = *(int64_t *)(unaff_RBP + -0x71);
          }
          plVar2 = (int64_t *)param_1[4];
          if (plVar2 != (int64_t *)0x0) {
            *(int32_t *)(unaff_RBP + -0x5b) = 0x20;
            *(int16_t *)(unaff_RBP + -0x5d) = 4;
            iVar5 = *unaff_RSI;
            *(int *)(unaff_RBP + -0x65) = iVar5;
            *(int32_t *)(unaff_RBP + -0x69) = 0x10003;
            _local_var_40 =
                 (int64_t *)((uint64_t)_local_var_40 & 0xffffffff00000000);
            *(int *)(unaff_RBP + -0x61) = iVar5 * 4;
            iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_buffer_00000040);
            if (-1 < iVar5) {
              lVar7 = CreateEventA(0,0,0,0);
              param_1[2] = lVar7;
              if (lVar7 != 0) {
                *(int64_t *)(unaff_RBP + -0x39) = lVar7;
                *(int64_t *)(unaff_RBP + -0x51) = unaff_RBP + -0x69;
                *(int32_t *)(unaff_RBP + -0x41) = local_var_40;
                plVar2 = (int64_t *)param_1[4];
                *(uint64_t *)(unaff_RBP + -0x31) = 0;
                *(uint64_t *)(unaff_RBP + -0x49) = 0x1ffe;
                *(int32_t *)(unaff_RBP + -0x3d) = 6;
                local_var_48 = 0x41;
                local_buffer_50 = 0x28;
                *(int64_t *)(unaff_RBP + -0x79) = unaff_RBP + -0x51;
                iVar5 = (**(code **)(*plVar2 + 0x50))
                                  (plVar2,&local_buffer_00000048,&processed_var_8008_ptr,param_1 + 5);
                if (-1 < iVar5) {
                  lVar7 = CreateEventA(0,0,0,0);
                  param_1[3] = lVar7;
                  if (lVar7 != 0) {
                    plVar2 = (int64_t *)param_1[4];
                    *(uint64_t *)(unaff_RBP + -0x49) = 6;
                    *(int32_t *)(unaff_RBP + -0x41) = 0;
                    *(int32_t *)(unaff_RBP + -0x3d) = 7;
                    *(int64_t *)(unaff_RBP + -0x39) = lVar7;
                    iVar5 = (**(code **)(*plVar2 + 0x50))
                                      (plVar2,&local_buffer_00000048,&processed_var_8008_ptr,param_1 + 6);
                    if (-1 < iVar5) {
                      puVar10 = (int32_t *)(unaff_RBP + -0x51);
                      *(uint64_t *)(unaff_RBP + -0x51) = 0x400000002;
                      *(uint64_t *)(unaff_RBP + -0x49) = 0x1000000008;
                      *(uint64_t *)(unaff_RBP + -0x31) = 0x40000000200;
                      *(uint64_t *)(unaff_RBP + -0x29) = 0x100000000800;
                      *(uint64_t *)(unaff_RBP + -0x41) = 0x4000000020;
                      *(uint64_t *)(unaff_RBP + -0x39) = 0x10000000080;
                      puVar8 = puVar9;
                      do {
                        iVar5 = (**(code **)(*(int64_t *)param_1[5] + 0x50))
                                          ((int64_t *)param_1[5],*puVar10,
                                           param_1 + (int64_t)(int)puVar8 + 7);
                        if (iVar5 < 0) goto LAB_180805ac2;
                        uVar11 = (int)puVar8 + 1;
                        puVar8 = (uint64_t *)(uint64_t)uVar11;
                        puVar10 = puVar10 + 1;
                      } while ((int)uVar11 < 0xc);
                      puVar10 = (int32_t *)(unaff_RBP + -0x51);
                      puVar8 = puVar9;
                      do {
                        iVar5 = (**(code **)(*(int64_t *)param_1[6] + 0x50))
                                          ((int64_t *)param_1[6],*puVar10,
                                           param_1 + (int64_t)(int)puVar8 + 0x13);
                        if (iVar5 < 0) goto LAB_180805ac2;
                        uVar11 = (int)puVar8 + 1;
                        puVar8 = (uint64_t *)(uint64_t)uVar11;
                        puVar10 = puVar10 + 1;
                      } while ((int)uVar11 < 2);
                      lVar7 = (*(code *)unaff_R12[2])(0xc000,0,&processed_var_7872_ptr,0x2e7);
                      *param_1 = lVar7;
                      if (lVar7 != 0) {
                        lVar7 = (*(code *)unaff_R12[2])(0x2000,0,&processed_var_7872_ptr,0x2ed);
                        param_1[1] = lVar7;
                        if (((lVar7 != 0) &&
                            (iVar5 = (**(code **)(*(int64_t *)param_1[5] + 0x28))(), -1 < iVar5))
                           && (iVar5 = (**(code **)(*(int64_t *)param_1[6] + 0x28))(), -1 < iVar5))
                        {
                          puVar8 = (uint64_t *)
                                   SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,
                                                 &processed_var_7872_ptr,0x301,uVar12 & 0xffffffff00000000);
                          if (puVar8 != (uint64_t *)0x0) {
                            *(int32_t *)(puVar8 + 1) = 0;
                            *puVar8 = &processed_var_7536_ptr;
                            puVar9 = puVar8;
                          }
                          param_1[0x59] = (int64_t)puVar9;
                          if ((puVar9 != (uint64_t *)0x0) &&
                             (iVar5 = (**(code **)(*(int64_t *)param_1[0x58] + 0x30))(), -1 < iVar5
                             )) {
                            *(int32_t *)(param_1[0x59] + 8) = 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_180805ac2:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x21) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_805aea(void)
void function_805aea(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x21) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_805b10(int64_t *param_1)
void function_805b10(int64_t *param_1)
{
  uint64_t *puVar1;
  int iVar2;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  int aiStack_a4 [7];
  int8_t stack_array_88 [96];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  puVar1 = (uint64_t *)*param_1;
  iVar2 = WaitForSingleObject(puVar1[2],100);
  if (iVar2 != -1) {
    if (iVar2 == 0x102) {
      *(int8_t *)(puVar1 + 0x15) = 1;
      (*(code *)param_1[6])(param_1);
    }
    else {
      aiStack_a4[0] = 0;
      local_var_a8 = 0;
      iVar2 = (**(code **)(*(int64_t *)puVar1[5] + 0x40))
                        ((int64_t *)puVar1[5],aiStack_a4,&local_var_a8);
      if (-1 < iVar2) {
        if (aiStack_a4[0] != *(int *)((int64_t)puVar1 + 0xac)) {
          *(int *)((int64_t)puVar1 + 0xac) = aiStack_a4[0];
        }
        iVar2 = (*(code *)param_1[1])(param_1,*puVar1,local_var_a8);
        if (iVar2 == 0) {
// WARNING: Subroutine does not return
          memset(stack_array_88,0,0x60);
        }
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_c8);
}
// 函数: void function_805b77(int64_t *param_1)
void function_805b77(int64_t *param_1)
{
  int iVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R15;
  *(int32_t *)(unaff_RBP + -0x45) = 0;
  *(int32_t *)(unaff_RBP + -0x49) = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,unaff_RBP + -0x45);
  if (-1 < iVar1) {
    if (*(int *)(unaff_RBP + -0x45) != *(int *)(unaff_RSI + 0xac)) {
      *(int *)(unaff_RSI + 0xac) = *(int *)(unaff_RBP + -0x45);
    }
    iVar1 = (**(code **)(unaff_R15 + 8))();
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      memset(unaff_RBP + -0x29,0,0x60);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x37) ^ (uint64_t)&local_buffer_00000000);
}