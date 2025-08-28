#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part270.c - 12 个函数
// 函数: void function_417c50(uint64_t param_1,int64_t param_2)
void function_417c50(uint64_t param_1,int64_t param_2)
{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  int8_t stack_array_d8 [32];
  int32_t stack_array_b8 [2];
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  pcVar7 = "string";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  if (puVar6 != (uint64_t *)0x0) {
    pcVar7 = (char *)0x0;
    do {
      pcVar2 = (char *)*puVar6;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)0x180d48d24;
        pcVar3 = pcVar7;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a2161b) {
        pcVar3 = pcVar3 + (int64_t)pcVar2;
        if (pcVar3 <= pcVar2) {
LAB_180417cf0:
          pcVar8 = "keys";
          do {
            pcVar2 = pcVar8;
            pcVar8 = pcVar2 + 1;
          } while (*pcVar8 != '\0');
          puVar6 = (uint64_t *)puVar6[6];
          do {
            if (puVar6 == (uint64_t *)0x0) goto LAB_180417fa4;
            pcVar8 = (char *)*puVar6;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (char *)0x180d48d24;
              pcVar3 = pcVar7;
            }
            else {
              pcVar3 = (char *)puVar6[2];
            }
            if (pcVar3 == pcVar2 + -0x180a180c3) {
              pcVar3 = pcVar8 + (int64_t)pcVar3;
              if (pcVar3 <= pcVar8) {
LAB_180417d60:
                pcVar8 = "key";
                do {
                  pcVar2 = pcVar8;
                  pcVar8 = pcVar2 + 1;
                } while (*pcVar8 != '\0');
                for (pcVar8 = (char *)puVar6[6]; pcVar8 != (char *)0x0;
                    pcVar8 = *(char **)(pcVar8 + 0x58)) {
                  pcVar3 = *(char **)pcVar8;
                  if (pcVar3 == (char *)0x0) {
                    pcVar3 = (char *)0x180d48d24;
                    pcVar4 = pcVar7;
                  }
                  else {
                    pcVar4 = *(char **)(pcVar8 + 0x10);
                  }
                  if (pcVar4 == pcVar2 + -0x180a18107) {
                    pcVar4 = pcVar4 + (int64_t)pcVar3;
                    if (pcVar4 <= pcVar3) {
LAB_180417df0:
                      do {
                        plocal_var_a8 = &memory_allocator_3480_ptr;
                        plocal_var_a0 = stack_array_90;
                        local_var_98 = 0;
                        stack_array_90[0] = 0;
                        pcVar2 = "time";
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar2 != '\0');
                        for (puVar6 = *(uint64_t **)(pcVar8 + 0x40); puVar6 != (uint64_t *)0x0;
                            puVar6 = (uint64_t *)puVar6[6]) {
                          pcVar2 = (char *)*puVar6;
                          if (pcVar2 == (char *)0x0) {
                            pcVar2 = (char *)0x180d48d24;
                            pcVar4 = pcVar7;
                          }
                          else {
                            pcVar4 = (char *)puVar6[2];
                          }
                          if (pcVar4 == pcVar3 + -0x180a1810b) {
                            pcVar4 = pcVar4 + (int64_t)pcVar2;
                            if (pcVar4 <= pcVar2) {
LAB_180417e76:
                              lVar5 = 0x180d48d24;
                              if (puVar6[1] != 0) {
                                lVar5 = puVar6[1];
                              }
                              SystemCore_NetworkHandler(lVar5,&system_data_6430,stack_array_b8);
                              break;
                            }
                            lVar5 = (int64_t)&processed_var_5276_ptr - (int64_t)pcVar2;
                            while (*pcVar2 == pcVar2[lVar5]) {
                              pcVar2 = pcVar2 + 1;
                              if (pcVar4 <= pcVar2) goto LAB_180417e76;
                            }
                          }
                        }
                        pcVar2 = "value";
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar2 != '\0');
                        for (puVar6 = *(uint64_t **)(pcVar8 + 0x40); puVar6 != (uint64_t *)0x0;
                            puVar6 = (uint64_t *)puVar6[6]) {
                          pcVar2 = (char *)*puVar6;
                          if (pcVar2 == (char *)0x0) {
                            pcVar2 = (char *)0x180d48d24;
                            pcVar4 = pcVar7;
                          }
                          else {
                            pcVar4 = (char *)puVar6[2];
                          }
                          if (pcVar4 == pcVar3 + -0x180a0696b) {
                            pcVar4 = pcVar2 + (int64_t)pcVar4;
                            if (pcVar4 <= pcVar2) {
LAB_180417ef6:
                              lVar5 = 0x180d48d24;
                              if (puVar6[1] != 0) {
                                lVar5 = puVar6[1];
                              }
                              (**(code **)(plocal_var_a8 + 0x10))(&plocal_var_a8,lVar5);
                              break;
                            }
                            lVar5 = (int64_t)&memory_allocator_3692_ptr - (int64_t)pcVar2;
                            while (*pcVar2 == pcVar2[lVar5]) {
                              pcVar2 = pcVar2 + 1;
                              if (pcVar4 <= pcVar2) goto LAB_180417ef6;
                            }
                          }
                        }
                        function_417830(param_1,stack_array_b8[0],&plocal_var_a8);
                        pcVar2 = "key";
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar2 != '\0');
                        for (pcVar2 = *(char **)(pcVar8 + 0x58); pcVar8 = pcVar7,
                            pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x58)) {
                          pcVar4 = *(char **)pcVar2;
                          if (pcVar4 == (char *)0x0) {
                            pcVar4 = (char *)0x180d48d24;
                            pcVar1 = pcVar7;
                          }
                          else {
                            pcVar1 = *(char **)(pcVar2 + 0x10);
                          }
                          if (pcVar1 == pcVar3 + -0x180a18107) {
                            pcVar1 = pcVar1 + (int64_t)pcVar4;
                            pcVar8 = pcVar2;
                            if (pcVar1 <= pcVar4) break;
                            lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar4;
                            while (*pcVar4 == pcVar4[lVar5]) {
                              pcVar4 = pcVar4 + 1;
                              if (pcVar1 <= pcVar4) goto LAB_180417f8f;
                            }
                          }
                        }
LAB_180417f8f:
                        plocal_var_a8 = &system_state_ptr;
                      } while (pcVar8 != (char *)0x0);
                      break;
                    }
                    lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar3;
                    while (*pcVar3 == pcVar3[lVar5]) {
                      pcVar3 = pcVar3 + 1;
                      if (pcVar4 <= pcVar3) goto LAB_180417df0;
                    }
                  }
                }
                goto LAB_180417fa4;
              }
              lVar5 = (int64_t)&processed_var_5204_ptr - (int64_t)pcVar8;
              while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180417d60;
              }
            }
            puVar6 = (uint64_t *)puVar6[0xb];
          } while( true );
        }
        lVar5 = (int64_t)&memory_allocator_3436_ptr - (int64_t)pcVar2;
        while (*pcVar2 == pcVar2[lVar5]) {
          pcVar2 = pcVar2 + 1;
          if (pcVar3 <= pcVar2) goto LAB_180417cf0;
        }
      }
      puVar6 = (uint64_t *)puVar6[0xb];
    } while (puVar6 != (uint64_t *)0x0);
  }
LAB_180417fa4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_d8);
}
// 函数: void function_417fd0(int64_t param_1,int64_t *param_2,int64_t *param_3)
void function_417fd0(int64_t param_1,int64_t *param_2,int64_t *param_3)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  byte *pbVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int iStack_58;
  float fStack_54;
  uint64_t local_var_50;
  int iStack_48;
  float fStack_44;
  uint64_t local_var_40;
  param_3[2] = param_3[1];
  param_3[6] = param_3[5];
  function_418260();
  param_3[10] = param_3[9];
  lVar8 = *(int64_t *)(param_1 + 8);
  do {
    if (lVar8 == param_1) {
// WARNING: Could not recover jumptable at 0x000180418185. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(*param_3 + 0x20))(param_3,0xf0);
      return;
    }
    lVar6 = SystemFunction_00018066bd70(lVar8);
    if (lVar6 != param_1) {
      lVar4 = *param_2;
      iVar13 = 0;
      lVar5 = param_2[1] - lVar4 >> 0x3f;
      lVar9 = (param_2[1] - lVar4) / 0x58 + lVar5;
      if (lVar9 != lVar5) {
        iVar2 = *(int *)(lVar8 + 0x38);
        lVar12 = 0;
        do {
          iVar3 = *(int *)(lVar12 + 0x10 + lVar4);
          iVar10 = iVar2;
          if (iVar3 == iVar2) {
            if (iVar3 != 0) {
              pbVar7 = *(byte **)(lVar12 + 8 + lVar4);
              lVar11 = *(int64_t *)(lVar8 + 0x30) - (int64_t)pbVar7;
              do {
                pbVar1 = pbVar7 + lVar11;
                iVar10 = (uint)*pbVar7 - (uint)*pbVar1;
                if (iVar10 != 0) break;
                pbVar7 = pbVar7 + 1;
              } while (*pbVar1 != 0);
            }
LAB_1804180b0:
            if (iVar10 == 0) goto LAB_1804180c7;
          }
          else if (iVar3 == 0) goto LAB_1804180b0;
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 0x58;
        } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(lVar9 - lVar5));
      }
      iVar13 = -1;
LAB_1804180c7:
      if (iVar13 != -1) {
        iStack_58 = (int)*(float *)(lVar8 + 0x20);
        local_var_50 = 0x40000000;
        iStack_48 = (int)*(float *)(lVar6 + 0x20);
        fStack_54 = (float)iVar13;
        local_var_40 = 0xc0000000;
        fStack_44 = fStack_54;
        function_2b6e50(param_3 + 1,&iStack_58);
      }
    }
    lVar8 = SystemFunction_00018066bd70(lVar8);
  } while( true );
}
// 函数: void function_418014(void)
void function_418014(void)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t unaff_RBX;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  int iStackX_20;
  float fStackX_24;
  do {
    lVar5 = SystemFunction_00018066bd70(unaff_RBX);
    if (lVar5 != unaff_R14) {
      lVar5 = *unaff_R13;
      iVar11 = 0;
      lVar4 = unaff_R13[1] - lVar5 >> 0x3f;
      lVar7 = (unaff_R13[1] - lVar5) / 0x58 + lVar4;
      if (lVar7 != lVar4) {
        iVar2 = *(int *)(unaff_RBX + 0x38);
        lVar10 = 0;
        do {
          iVar3 = *(int *)(lVar10 + 0x10 + lVar5);
          iVar8 = iVar2;
          if (iVar3 == iVar2) {
            if (iVar3 != 0) {
              pbVar6 = *(byte **)(lVar10 + 8 + lVar5);
              lVar9 = *(int64_t *)(unaff_RBX + 0x30) - (int64_t)pbVar6;
              do {
                pbVar1 = pbVar6 + lVar9;
                iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
                if (iVar8 != 0) break;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar1 != 0);
            }
LAB_1804180b0:
            if (iVar8 == 0) goto LAB_1804180c7;
          }
          else if (iVar3 == 0) goto LAB_1804180b0;
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 0x58;
        } while ((uint64_t)(int64_t)iVar11 < (uint64_t)(lVar7 - lVar4));
      }
      iVar11 = -1;
LAB_1804180c7:
      if (iVar11 != -1) {
        iStackX_20 = (int)*(float *)(unaff_RBX + 0x20);
        fStackX_24 = (float)iVar11;
        function_2b6e50(unaff_R15 + 1,&iStackX_20);
      }
    }
    unaff_RBX = SystemFunction_00018066bd70(unaff_RBX);
    if (unaff_RBX == unaff_R14) {
// WARNING: Could not recover jumptable at 0x000180418185. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(*unaff_R15 + 0x20))(extraout_XMM0_Qa,0xf0);
      return;
    }
  } while( true );
}
// 函数: void function_41816d(void)
void function_41816d(void)
{
  int64_t *unaff_R15;
// WARNING: Could not recover jumptable at 0x000180418185. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*unaff_R15 + 0x20))();
  return;
}
// 函数: void function_418190(int64_t param_1,int64_t *param_2,int64_t param_3)
void function_418190(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  function_3aeb70(param_1,*(uint64_t *)(param_1 + 0x10));
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  lVar2 = *(int64_t *)(param_3 + 8);
  if (lVar2 != *(int64_t *)(param_3 + 0x10)) {
    do {
      uVar1 = (param_2[1] - *param_2) / 0x58;
      if ((uint64_t)(int64_t)(int)*(float *)(lVar2 + 4) < uVar1) {
        function_417830(param_1,uVar1,*param_2 + (int64_t)(int)*(float *)(lVar2 + 4) * 0x58);
        function_417830(param_1);
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(int64_t *)(param_3 + 0x10));
  }
  return;
}
// 函数: void function_4181cd(void)
void function_4181cd(void)
{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  do {
    if ((uint64_t)(int64_t)(int)*(float *)(unaff_RDI + 4) <
        (uint64_t)((unaff_R14[1] - *unaff_R14) / 0x58)) {
      function_417830();
      function_417830();
    }
    unaff_RDI = unaff_RDI + 0x20;
  } while (unaff_RDI != *(int64_t *)(unaff_RBP + 0x10));
  return;
}
// 函数: void function_41824c(void)
void function_41824c(void)
{
  return;
}
// 函数: void function_418260(uint64_t *param_1)
void function_418260(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  puVar2 = (uint64_t *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 5;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4182d0(int64_t param_1)
void function_4182d0(int64_t param_1)
{
  int64_t lVar1;
  void **ppuVar2;
  byte bVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  byte *pbVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t extraout_XMM0_Da;
  void **ppstack_special_x_8;
  void *plocal_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  void *plocal_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  void *plocal_var_c0;
  int64_t lStack_b8;
  int32_t local_var_b0;
  uint64_t local_var_a8;
  int8_t stack_array_a0 [104];
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  lVar1 = param_1 + 8;
  local_var_120 = 0;
  local_var_118 = 0;
  uVar9 = 0;
  local_var_110 = 0;
  local_var_108 = 3;
  plocal_var_128 = &processed_var_9512_ptr;
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_f0 = 0;
  local_var_e8 = 5;
  ppstack_special_x_8 = &plocal_var_e0;
  plocal_var_e0 = (void *)0x0;
  local_var_d8 = 0;
  local_var_d0 = 0;
  local_var_c8 = 5;
  CoreEngineDataTransformer(&plocal_var_c0);
  function_41afd0(stack_array_a0,&plocal_var_128);
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xa8,*(int8_t *)(param_1 + 0x30));
  ppuVar2 = (void **)(lVar5 + 0x20);
  *ppuVar2 = &system_state_ptr;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *ppuVar2 = &system_data_buffer_ptr;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *(int32_t *)(lVar5 + 0x30) = local_var_b0;
  *(int64_t *)(lVar5 + 0x28) = lStack_b8;
  *(int32_t *)(lVar5 + 0x3c) = local_var_a8._4_4_;
  *(int32_t *)(lVar5 + 0x38) = (int32_t)local_var_a8;
  local_var_b0 = 0;
  lStack_b8 = 0;
  local_var_a8 = 0;
  ppstack_special_x_8 = ppuVar2;
  function_41afd0(lVar5 + 0x40,stack_array_a0);
  lVar6 = SystemCore_SecurityValidator(lVar1,&ppstack_special_x_8,ppuVar2);
  if ((char)ppstack_special_x_8 == '\0') {
    function_41b200(extraout_XMM0_Da,lVar5);
    function_41aa70(stack_array_a0);
    ppstack_special_x_8 = &plocal_var_c0;
    plocal_var_c0 = &system_data_buffer_ptr;
    if (lStack_b8 == 0) {
      lStack_b8 = 0;
      local_var_a8 = local_var_a8 & 0xffffffff00000000;
      plocal_var_c0 = &system_state_ptr;
      function_41aa70(&plocal_var_128);
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (lVar6 == lVar1) goto LAB_180418472;
  if (*(int *)(lVar6 + 0x30) != 0) {
    if (*(int *)(lVar5 + 0x30) == 0) goto LAB_180418472;
    pbVar7 = *(byte **)(lVar6 + 0x28);
    lVar8 = *(int64_t *)(lVar5 + 0x28) - (int64_t)pbVar7;
    do {
      bVar3 = *pbVar7;
      uVar4 = (uint)pbVar7[lVar8];
      if (bVar3 != uVar4) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar4 != 0);
    if (0 < (int)(bVar3 - uVar4)) goto LAB_180418472;
  }
  uVar9 = 1;
LAB_180418472:
// WARNING: Subroutine does not return
  SystemStateController(lVar5,lVar6,lVar1,uVar9);
}
// 函数: void function_4184f0(uint64_t *param_1)
void function_4184f0(uint64_t *param_1)
{
  function_41aa70(param_1 + 4);
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}
int32_t function_418550(int64_t param_1,uint64_t param_2,float param_3)
{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  lVar7 = function_41adc0(param_1 + 8);
  iVar9 = 0;
  iVar4 = 0;
  lVar2 = *(int64_t *)(lVar7 + 0x28);
  uVar10 = *(int64_t *)(lVar7 + 0x30) - lVar2 >> 3;
  uVar8 = uVar10 & 0xffffffff;
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar4 = (uint)uVar8 - iVar6;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = (iVar4 >> 1) + iVar6;
      bVar3 = *(float *)(lVar2 + (int64_t)(int)uVar1 * 8) < param_3;
      uVar5 = uVar1;
      if (bVar3) {
        uVar5 = (uint)uVar8;
      }
      uVar8 = (uint64_t)uVar5;
      iVar4 = iVar6;
      if (bVar3) {
        iVar4 = uVar1 + 1;
      }
      iVar6 = iVar4;
    } while (iVar4 < (int)uVar5);
  }
  uVar8 = uVar10 & 0xffffffff;
  if (0 < (int)uVar10) {
    do {
      iVar6 = (int)uVar8 - iVar9;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar9;
      iVar6 = uVar1 + 1;
      if (param_3 < *(float *)(lVar2 + (int64_t)(int)uVar1 * 8)) {
        uVar8 = (uint64_t)uVar1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
    } while (iVar9 < (int)uVar8);
  }
  uVar8 = (uint64_t)iVar4;
  if (uVar8 != uVar10) {
    if (ABS(*(float *)(lVar2 + (int64_t)iVar9 * 8) - param_3) <=
        ABS(*(float *)(lVar2 + uVar8 * 8) - param_3)) {
      return *(int32_t *)(lVar2 + 4 + (int64_t)iVar9 * 8);
    }
    return *(int32_t *)(lVar2 + 4 + uVar8 * 8);
  }
  if (lVar2 != *(int64_t *)(lVar7 + 0x30)) {
    return *(int32_t *)(*(int64_t *)(lVar7 + 0x30) + -4);
  }
  return 0x7f7fffff;
}
// 函数: void function_418670(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_418670(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_41b140(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_4186a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4186a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_41b140(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address