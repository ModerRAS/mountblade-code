#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part546.c - 7 个函数
// 函数: void function_568ac0(uint64_t *param_1,void **param_2)
void function_568ac0(uint64_t *param_1,void **param_2)
{
  uint uVar1;
  int *piVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int32_t uVar6;
  void *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int *piVar13;
  int64_t lVar14;
  int8_t stack_array_bf8 [32];
  int *piStack_bd8;
  void *plocal_var_bd0;
  int8_t *plocal_var_bc8;
  uint local_var_bb8;
  uint local_var_bb4;
  int iStack_bb0;
  uint local_var_bac;
  uint local_var_ba8;
  int iStack_ba4;
  uint local_var_ba0;
  uint local_var_b9c;
  int iStack_b98;
  uint local_var_b94;
  uint local_var_b90;
  int iStack_b8c;
  uint local_var_b88;
  uint local_var_b84;
  uint local_var_b80;
  int iStack_b7c;
  uint local_var_b78;
  uint local_var_b74;
  int *piStack_b70;
  int *piStack_b68;
  void *plocal_var_b60;
  int16_t local_var_b58;
  int8_t local_var_b56;
  int64_t lStack_b50;
  int64_t lStack_b48;
  int64_t lStack_b40;
  int16_t local_var_b38;
  int8_t local_var_b36;
  int64_t alStack_b30 [2];
  uint64_t *plocal_var_b20;
  void **pplocal_var_b18;
  void *plocal_var_b10;
  void *plocal_var_b08;
  uint local_var_b00;
  int32_t local_var_af8;
  int8_t stack_array_aec [4];
  void *plocal_var_ae8;
  int8_t local_var_ae0;
  uint64_t local_var_ad8;
  void **pplocal_var_ad0;
  int8_t stack_array_ac8 [24];
  char cStack_ab0;
  void *plocal_var_aa8;
  int64_t lStack_aa0;
  int32_t local_var_a90;
  int8_t stack_array_a88 [64];
  int8_t stack_array_a48 [1024];
  int8_t stack_array_648 [512];
  int8_t stack_array_448 [512];
  int8_t stack_array_248 [512];
  uint64_t local_var_48;
  local_var_ad8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_bf8;
  uVar9 = 0;
  plocal_var_b20 = param_1;
  pplocal_var_b18 = param_2;
  pplocal_var_ad0 = param_2;
  function_569560();
  function_0baa40(&plocal_var_b10);
  if (0 < *(int *)(param_2 + 2)) {
    CoreMemoryPoolProcessor(&plocal_var_b10,local_var_b00 + *(int *)(param_2 + 2));
// WARNING: Subroutine does not return
    memcpy(plocal_var_b08 + local_var_b00,param_2[1],(int64_t)(*(int *)(param_2 + 2) + 1));
  }
  alStack_b30[0] = -1;
  puVar7 = &system_buffer_ptr;
  if (plocal_var_b08 != (void *)0x0) {
    puVar7 = plocal_var_b08;
  }
  function_63ba00(alStack_b30,puVar7,5,0x104);
  lVar12 = alStack_b30[0];
  uVar8 = uVar9;
  if (alStack_b30[0] == -1) {
    plocal_var_bd0 = &system_buffer_ptr;
    if (param_2[1] != (void *)0x0) {
      plocal_var_bd0 = param_2[1];
    }
    piStack_bd8 = (int *)&processed_var_8736_ptr;
    SystemConfigurationManager(system_message_context,0,0x10000000000,8);
    puVar7 = &system_buffer_ptr;
    if (param_2[1] != (void *)0x0) {
      puVar7 = param_2[1];
    }
    function_627160(&processed_var_8776_ptr,puVar7);
    goto LAB_1805693bf;
  }
  do {
    uVar10 = 0x1000000;
    if (4 - uVar8 < 0x1000000) {
      uVar10 = 4 - uVar8 & 0xffffffff;
    }
    local_var_bb8 = 0;
    piStack_bd8 = (int *)0x0;
    iVar4 = ReadFile(lVar12,(int64_t)&iStack_bb0 + uVar8,uVar10,&local_var_bb8);
    if (iVar4 == 0) goto LAB_18056945f;
  } while ((local_var_bb8 != 0) && (uVar8 = uVar8 + local_var_bb8, uVar8 < 4));
  if (uVar8 == 4) {
    iVar4 = 0x200;
    if (iStack_bb0 + 1 < 0x200) {
      iVar4 = iStack_bb0 + 1;
    }
    uVar8 = uVar9;
    uVar10 = uVar9;
    if (iVar4 != 0) {
      do {
        uVar10 = (int64_t)iVar4 - uVar8;
        uVar11 = 0x1000000;
        if (uVar10 < 0x1000000) {
          uVar11 = uVar10 & 0xffffffff;
        }
        local_var_bb4 = 0;
        piStack_bd8 = (int *)0x0;
        iVar5 = ReadFile(lVar12,stack_array_648 + uVar8,uVar11,&local_var_bb4);
        uVar10 = uVar9;
      } while (((iVar5 != 0) && (uVar10 = uVar8, local_var_bb4 != 0)) &&
              (uVar10 = uVar8 + local_var_bb4, uVar8 = uVar10, uVar10 < (uint64_t)(int64_t)iVar4));
    }
    iVar4 = 0x200;
    if (iStack_bb0 + 1 < 0x200) {
      iVar4 = iStack_bb0 + 1;
    }
    uVar8 = uVar9;
    if (uVar10 == (int64_t)iVar4) {
      do {
        uVar10 = 0x1000000;
        if (4 - uVar8 < 0x1000000) {
          uVar10 = 4 - uVar8 & 0xffffffff;
        }
        local_var_bac = 0;
        piStack_bd8 = (int *)0x0;
        iVar4 = ReadFile(lVar12,(int64_t)&iStack_ba4 + uVar8,uVar10,&local_var_bac);
        if (iVar4 == 0) goto LAB_18056945f;
      } while ((local_var_bac != 0) && (uVar8 = uVar8 + local_var_bac, uVar8 < 4));
      if (uVar8 == 4) {
        iVar4 = 0x200;
        if (iStack_ba4 + 1 < 0x200) {
          iVar4 = iStack_ba4 + 1;
        }
        uVar8 = uVar9;
        uVar10 = uVar9;
        if (iVar4 != 0) {
          do {
            uVar10 = (int64_t)iVar4 - uVar8;
            uVar11 = 0x1000000;
            if (uVar10 < 0x1000000) {
              uVar11 = uVar10 & 0xffffffff;
            }
            local_var_ba8 = 0;
            piStack_bd8 = (int *)0x0;
            iVar5 = ReadFile(lVar12,stack_array_448 + uVar8,uVar11,&local_var_ba8);
            uVar10 = uVar9;
          } while (((iVar5 != 0) && (uVar10 = uVar8, local_var_ba8 != 0)) &&
                  (uVar8 = uVar8 + local_var_ba8, uVar10 = uVar8, uVar8 < (uint64_t)(int64_t)iVar4));
        }
        iVar4 = 0x200;
        if (iStack_ba4 + 1 < 0x200) {
          iVar4 = iStack_ba4 + 1;
        }
        uVar8 = uVar9;
        if (uVar10 == (int64_t)iVar4) {
          do {
            uVar10 = 0x1000000;
            if (4 - uVar8 < 0x1000000) {
              uVar10 = 4 - uVar8 & 0xffffffff;
            }
            local_var_ba0 = 0;
            piStack_bd8 = (int *)0x0;
            iVar4 = ReadFile(lVar12,(int64_t)&iStack_b98 + uVar8,uVar10,&local_var_ba0);
            if (iVar4 == 0) goto LAB_18056945f;
          } while ((local_var_ba0 != 0) && (uVar8 = uVar8 + local_var_ba0, uVar8 < 4));
          if (uVar8 == 4) {
            iVar4 = 0x200;
            if (iStack_b98 + 1 < 0x200) {
              iVar4 = iStack_b98 + 1;
            }
            uVar8 = uVar9;
            uVar10 = uVar9;
            if (iVar4 != 0) {
              do {
                uVar10 = (int64_t)iVar4 - uVar8;
                uVar11 = 0x1000000;
                if (uVar10 < 0x1000000) {
                  uVar11 = uVar10 & 0xffffffff;
                }
                local_var_b9c = 0;
                piStack_bd8 = (int *)0x0;
                iVar5 = ReadFile(lVar12,stack_array_248 + uVar8,uVar11,&local_var_b9c);
                uVar10 = uVar9;
              } while (((iVar5 != 0) && (uVar10 = uVar8, local_var_b9c != 0)) &&
                      (uVar8 = uVar8 + local_var_b9c, uVar10 = uVar8,
                      uVar8 < (uint64_t)(int64_t)iVar4));
            }
            iVar4 = 0x200;
            if (iStack_b98 + 1 < 0x200) {
              iVar4 = iStack_b98 + 1;
            }
            uVar8 = uVar9;
            if (uVar10 == (int64_t)iVar4) {
              do {
                uVar10 = 0x1000000;
                if (4 - uVar8 < 0x1000000) {
                  uVar10 = 4 - uVar8 & 0xffffffff;
                }
                local_var_b94 = 0;
                piStack_bd8 = (int *)0x0;
                iVar4 = ReadFile(lVar12,(int64_t)&iStack_b8c + uVar8,uVar10,&local_var_b94);
                if (iVar4 == 0) goto LAB_18056945f;
              } while ((local_var_b94 != 0) && (uVar8 = uVar8 + local_var_b94, uVar8 < 4));
              if (uVar8 == 4) {
                iVar4 = 0x40;
                if (iStack_b8c + 1 < 0x40) {
                  iVar4 = iStack_b8c + 1;
                }
                uVar8 = uVar9;
                uVar10 = uVar9;
                if (iVar4 != 0) {
                  do {
                    uVar10 = (int64_t)iVar4 - uVar8;
                    uVar11 = 0x1000000;
                    if (uVar10 < 0x1000000) {
                      uVar11 = uVar10 & 0xffffffff;
                    }
                    local_var_b90 = 0;
                    piStack_bd8 = (int *)0x0;
                    iVar5 = ReadFile(lVar12,stack_array_a88 + uVar8,uVar11,&local_var_b90);
                    uVar10 = uVar9;
                  } while (((iVar5 != 0) && (uVar10 = uVar8, local_var_b90 != 0)) &&
                          (uVar10 = uVar8 + local_var_b90, uVar8 = uVar10,
                          uVar10 < (uint64_t)(int64_t)iVar4));
                }
                iVar4 = 0x40;
                if (iStack_b8c + 1 < 0x40) {
                  iVar4 = iStack_b8c + 1;
                }
                uVar8 = uVar9;
                if (uVar10 == (int64_t)iVar4) {
                  do {
                    uVar10 = 0x1000000;
                    if (4 - uVar8 < 0x1000000) {
                      uVar10 = 4 - uVar8 & 0xffffffff;
                    }
                    local_var_b88 = 0;
                    piStack_bd8 = (int *)0x0;
                    iVar4 = ReadFile(lVar12,stack_array_aec + uVar8,uVar10,&local_var_b88);
                    if (iVar4 == 0) goto LAB_18056945f;
                  } while ((local_var_b88 != 0) && (uVar8 = uVar8 + local_var_b88, uVar8 < 4));
                  uVar10 = uVar9;
                  if (uVar8 == 4) {
                    do {
                      uVar8 = 0x1000000;
                      if (4 - uVar10 < 0x1000000) {
                        uVar8 = 4 - uVar10 & 0xffffffff;
                      }
                      local_var_b84 = 0;
                      piStack_bd8 = (int *)0x0;
                      iVar4 = ReadFile(lVar12,(int64_t)&iStack_b7c + uVar10,uVar8,&local_var_b84);
                      if (iVar4 == 0) goto LAB_18056945f;
                    } while ((local_var_b84 != 0) && (uVar10 = uVar10 + local_var_b84, uVar10 < 4));
                    if (uVar10 == 4) {
                      do {
                        uVar8 = 0x1000000;
                        if (4 - uVar9 < 0x1000000) {
                          uVar8 = 4 - uVar9 & 0xffffffff;
                        }
                        local_var_b80 = 0;
                        piStack_bd8 = (int *)0x0;
                        iVar4 = ReadFile(lVar12,(int64_t)&local_var_b74 + uVar9,uVar8,&local_var_b80);
                        if (iVar4 == 0) goto LAB_18056945f;
                      } while ((local_var_b80 != 0) && (uVar9 = uVar9 + local_var_b80, uVar9 < 4));
                      if (uVar9 == 4) {
                        lStack_b50 = 0;
                        lStack_b40 = 0;
                        local_var_b38 = 0;
                        local_var_b36 = 3;
                        lStack_b48 = 0;
                        System_BufferManager(&lStack_b50,(int64_t)(iStack_b7c + 1));
                        piStack_b70 = (int *)0x0;
                        plocal_var_b60 = (void *)0x0;
                        local_var_b58 = 0;
                        local_var_b56 = 3;
                        piStack_b68 = (int *)0x0;
                        System_BufferManager(&piStack_b70,(int64_t)(iStack_b7c + 1));
                        uVar1 = local_var_b74;
                        uVar9 = (uint64_t)local_var_b74;
                        if (local_var_b74 == 0) {
LAB_1805691fd:
                          LOCK();
                          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
                          UNLOCK();
                          CloseHandle(alStack_b30[0]);
                          lVar12 = -1;
                          alStack_b30[0] = -1;
                          plocal_var_ae8 = &memory_allocator_3856_ptr;
                          local_var_ae0 = 1;
                          plocal_var_bd0 = plocal_var_b60;
                          piStack_bd8 = piStack_b68;
                          function_21f710(&plocal_var_ae8,stack_array_ac8,lStack_b48,
                                        (int64_t)(int)local_var_b74);
                          piVar2 = piStack_b70;
                          if ((cStack_ab0 == '\0') &&
                             (piStack_b68 = piStack_b70 + 1, 0 < *piStack_b70)) {
                            iVar4 = *piStack_b68;
                            piVar13 = piStack_b70 + 2;
                            piStack_b68 = piVar13;
                            lVar12 = function_5696d0(plocal_var_b20);
                            *(int *)(lVar12 + 0x5a0) = *piVar13;
                            *(int32_t *)(lVar12 + 0x5a4) = 0;
                            piVar13 = piVar2 + 4;
                            *(double *)(lVar12 + 0x5a8) = (double)(float)piVar2[3];
                            piStack_b68 = piVar13;
                            function_55f4e0(lVar12,iVar4);
                            function_569620(lVar12,iVar4);
// WARNING: Subroutine does not return
                            memcpy(*(uint64_t *)(lVar12 + 0x598),piVar13,
                                   (int64_t)
                                   (int)((uint)((*(uint *)(lVar12 + 0x5c8) & 7) != 0) +
                                        ((int)*(uint *)(lVar12 + 0x5c8) >> 3)));
                          }
                          pplocal_var_b18 = &plocal_var_aa8;
                          plocal_var_aa8 = &system_data_buffer_ptr;
                          if (lStack_aa0 != 0) {
// WARNING: Subroutine does not return
                            CoreMemoryPoolInitializer();
                          }
                          lStack_aa0 = 0;
                          local_var_a90 = 0;
                          plocal_var_aa8 = &system_state_ptr;
                          lVar14 = lStack_b50;
                        }
                        else {
                          if ((uint64_t)((lStack_b40 - lStack_b48) + lStack_b50) <= uVar9) {
                            System_BufferManager(&lStack_b50,uVar9 + (lStack_b48 - lStack_b50));
                          }
                          lVar3 = lStack_b48;
                          lVar14 = lStack_b50;
                          uVar8 = 0;
                          if (uVar1 != 0) {
                            while( true ) {
                              uVar10 = 0x1000000;
                              if (uVar9 - uVar8 < 0x1000000) {
                                uVar10 = uVar9 - uVar8 & 0xffffffff;
                              }
                              local_var_b78 = 0;
                              piStack_bd8 = (int *)0x0;
                              iVar4 = ReadFile(lVar12,lVar3 + uVar8,uVar10,&local_var_b78);
                              if (iVar4 == 0) break;
                              if ((local_var_b78 == 0) || (uVar8 = uVar8 + local_var_b78, uVar9 <= uVar8))
                              goto LAB_180569148;
                            }
                            uVar8 = 0;
                          }
LAB_180569148:
                          if ((uint)uVar8 == uVar1) goto LAB_1805691fd;
                          uVar6 = GetLastError();
                          plocal_var_bc8 = (int8_t *)0x0;
                          plocal_var_bd0 = (void *)CONCAT44(plocal_var_bd0._4_4_,0x400);
                          piStack_bd8 = (int *)stack_array_a48;
                          iVar4 = FormatMessageA(0x1000,0,uVar6,0x400);
                          if (iVar4 == 0) {
                            uVar6 = GetLastError();
                            SystemCore_ResourceManager0(&memory_allocator_3400_ptr,uVar6);
                          }
                          plocal_var_bd0 = &system_buffer_ptr;
                          if (param_2[1] != (void *)0x0) {
                            plocal_var_bd0 = param_2[1];
                          }
                          plocal_var_bc8 = stack_array_a48;
                          piStack_bd8 = (int *)&processed_var_8672_ptr;
                          SystemConfigurationManager(system_message_context,0,0x10000000000,3);
                        }
                        if (((char)local_var_b58 == '\0') && (piStack_b70 != (int *)0x0)) {
// WARNING: Subroutine does not return
                          CoreMemoryPoolInitializer(piStack_b70);
                        }
                        if (((char)local_var_b38 == '\0') && (lVar14 != 0)) {
// WARNING: Subroutine does not return
                          CoreMemoryPoolInitializer(lVar14);
                        }
                        goto LAB_1805693bf;
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
LAB_18056945f:
  uVar6 = GetLastError();
  plocal_var_bc8 = (int8_t *)0x0;
  plocal_var_bd0 = (void *)CONCAT44(plocal_var_bd0._4_4_,0x400);
  piStack_bd8 = (int *)stack_array_a48;
  iVar4 = FormatMessageA(0x1000,0,uVar6,0x400);
  if (iVar4 == 0) {
    uVar6 = GetLastError();
    SystemCore_ResourceManager0(&memory_allocator_3400_ptr,uVar6);
  }
  plocal_var_bd0 = &system_buffer_ptr;
  if (param_2[1] != (void *)0x0) {
    plocal_var_bd0 = param_2[1];
  }
  plocal_var_bc8 = stack_array_a48;
  piStack_bd8 = (int *)&processed_var_8672_ptr;
  SystemConfigurationManager(system_message_context,0,0x10000000000,3);
LAB_1805693bf:
  plocal_var_b20[0xcd] = *plocal_var_b20;
  if (lVar12 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_b30[0]);
    alStack_b30[0] = -1;
  }
  plocal_var_b10 = &system_data_buffer_ptr;
  if (plocal_var_b08 == (void *)0x0) {
    plocal_var_b08 = (void *)0x0;
    local_var_af8 = 0;
    plocal_var_b10 = &system_state_ptr;
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] == (void *)0x0) {
      param_2[1] = (void *)0x0;
      *(int32_t *)(param_2 + 3) = 0;
      *param_2 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_bf8);
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// 函数: void function_569560(int64_t *param_1)
void function_569560(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != param_1) {
    do {
      lVar1 = plVar2[2];
      plVar2 = (int64_t *)*plVar2;
      if (lVar1 != 0) {
        if (*(int64_t *)(lVar1 + 0x588) == 0) {
          *(uint64_t *)(lVar1 + 0x588) = 0;
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(lVar1);
        }
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
    } while (plVar2 != param_1);
    plVar2 = (int64_t *)*param_1;
  }
  if (plVar2 == param_1) {
    *param_1 = (int64_t)param_1;
    param_1[1] = (int64_t)param_1;
    param_1[3] = 0;
    *(int32_t *)(param_1 + 0xbe) = 0;
    *(uint64_t *)((int64_t)param_1 + 0x5e4) = 0;
// WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    memset(param_1[0xb7],0,(int64_t)((int)param_1[0xb6] >> 3));
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(plVar2);
}
// 函数: void function_56957c(void)
void function_56957c(void)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  while( true ) {
    lVar1 = unaff_RBX[2];
    unaff_RBX = (int64_t *)*unaff_RBX;
    if (lVar1 != 0) break;
    if (unaff_RBX == unaff_RDI) {
      if ((int64_t *)*unaff_RDI != unaff_RDI) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer((int64_t *)*unaff_RDI);
      }
      *unaff_RDI = (int64_t)unaff_RDI;
      unaff_RDI[1] = (int64_t)unaff_RDI;
      unaff_RDI[3] = unaff_RBP;
      *(int *)(unaff_RDI + 0xbe) = (int)unaff_RBP;
      *(int64_t *)((int64_t)unaff_RDI + 0x5e4) = unaff_RBP;
// WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
      memset(unaff_RDI[0xb7],0,(int64_t)((int)unaff_RDI[0xb6] >> 3));
      return;
    }
  }
  if (*(int64_t *)(lVar1 + 0x588) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t *)(lVar1 + 0x588) = unaff_RBP;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(lVar1);
}
// 函数: void function_5695ba(void)
void function_5695ba(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  if (unaff_RBX != unaff_RDI) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t *)unaff_RDI = unaff_RDI;
  *(int64_t *)(unaff_RDI + 8) = unaff_RDI;
  *(uint64_t *)(unaff_RDI + 0x18) = unaff_RBP;
  *(int *)(unaff_RDI + 0x5f0) = (int)unaff_RBP;
  *(uint64_t *)(unaff_RDI + 0x5e4) = unaff_RBP;
// WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  memset(*(uint64_t *)(unaff_RDI + 0x5b8),0,(int64_t)(*(int *)(unaff_RDI + 0x5b0) >> 3));
  return;
}
// 函数: void function_569620(int64_t param_1,int param_2)
void function_569620(int64_t param_1,int param_2)
{
  function_55f4e0(param_1,*(int *)(param_1 + 0x5c4) + param_2);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + param_2;
  if (*(int *)(param_1 + 0x5c8) < *(int *)(param_1 + 0x5c4)) {
    *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c4);
  }
  return;
}
// 函数: void function_569670(int64_t param_1)
void function_569670(int64_t param_1)
{
  uint uVar1;
  int iVar2;
  uVar1 = *(uint *)(param_1 + 0x5c4) & 7;
  iVar2 = 8 - uVar1;
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    function_55f4e0(param_1,*(uint *)(param_1 + 0x5c4) + iVar2);
    *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + iVar2;
    if (*(int *)(param_1 + 0x5c8) < *(int *)(param_1 + 0x5c4)) {
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c4);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5696d0(void)
void function_5696d0(void)
{
  int64_t lVar1;
  lVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x5d0,8,3);
  *(uint64_t *)(lVar1 + 0x598) = 0;
  *(int32_t *)(lVar1 + 0x590) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = 0;
  *(uint64_t *)(lVar1 + 0x588) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = render_system_memory;
  *(uint64_t *)(lVar1 + 0x5c0) = 0;
  *(int64_t *)(lVar1 + 0x598) = lVar1;
  *(int32_t *)(lVar1 + 0x590) = 0x2c40;
  *(int32_t *)(lVar1 + 0x5c8) = 0;
// WARNING: Subroutine does not return
  memset(lVar1,0,0x588);
}