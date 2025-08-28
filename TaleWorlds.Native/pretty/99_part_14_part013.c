#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part013.c - 14 个函数
// 函数: void NetworkProtocol_f2439(void)
void NetworkProtocol_f2439(void)
{
  return;
}
uint64_t NetworkProtocol_f244d(void)
{
  free();
  return 0x80010004;
}
uint64_t NetworkProtocol_f2520(int64_t param_1,int64_t param_2,ushort param_3)
{
  char cVar1;
  short *psVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  lVar5 = 0;
  cVar1 = Function_7b3c91d8(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22));
  if (cVar1 == '\0') {
    cVar1 = Function_68c0c4ab(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22));
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint64_t)param_3 != 0) {
      psVar2 = (short *)(param_2 + 0x14);
      do {
        if ((((psVar2[-10] == -0x100) && (psVar2[0x12] == 0x26)) && (*psVar2 == 0x3f)) &&
           ((char)psVar2[-9] == ' ')) {
          return 0;
        }
        lVar5 = lVar5 + 1;
        psVar2 = psVar2 + 0x24;
      } while (lVar5 < (int64_t)(uint64_t)param_3);
    }
  }
  else if (0x12 < *(int *)(param_1 + 0x24)) {
    uVar3 = (uint64_t)param_3;
    if (uVar3 != 0) {
      psVar2 = (short *)(param_2 + 0x14);
      lVar4 = lVar5;
      do {
        if (((psVar2[-10] == -0xfc) && (psVar2[0x12] == 0x27)) &&
           ((*psVar2 == 0x34 && ((char)psVar2[-9] == '\x06')))) {
          bVar6 = 1;
          goto LAB_1808f25a4;
        }
        lVar4 = lVar4 + 1;
        psVar2 = psVar2 + 0x24;
      } while (lVar4 < (int64_t)uVar3);
    }
    bVar6 = 0;
LAB_1808f25a4:
    if (uVar3 != 0) {
      psVar2 = (short *)(param_2 + 0x14);
      lVar4 = lVar5;
      do {
        if (((psVar2[-10] == -0x80) && (psVar2[0x12] == 0x43)) &&
           ((*psVar2 == 0x30 && ((char)psVar2[-9] == -0x5d)))) goto LAB_1808f25e5;
        lVar4 = lVar4 + 1;
        psVar2 = psVar2 + 0x24;
      } while (lVar4 < (int64_t)uVar3);
    }
    if (bVar6 != 0) {
LAB_1808f25e5:
      if (bVar6 != 1) {
        if (uVar3 != 0) {
          psVar2 = (short *)(param_2 + 0x14);
          do {
            if (((psVar2[-10] == -0xfe) && (psVar2[0x12] == 0x22)) && (*psVar2 == 0x16)) break;
            lVar5 = lVar5 + 1;
            psVar2 = psVar2 + 0x24;
          } while (lVar5 < (int64_t)uVar3);
        }
        return (uint64_t)bVar6;
      }
    }
  }
  return 0xffffffff;
}
// 函数: void NetworkProtocol_f26a0(void)
void NetworkProtocol_f26a0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f34b0(void)
void NetworkProtocol_f34b0(void)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int16_t *puVar7;
  int32_t *puVar8;
  uVar6 = GetCurrentThread();
  SetThreadPriority(uVar6,0xf);
  system_system_memory = CreateSemaphoreW(0,0,0x20);
  InitializeCriticalSection(0x180c698d8);
  puVar7 = (int16_t *)0x180c69910;
  system_system_memory = (int32_t *)0x0;
  system_system_memory = (int32_t *)0x0;
  do {
    puVar3 = (int32_t *)(puVar7 + -8);
    *(uint64_t *)(puVar7 + -4) = 0;
    *puVar3 = 0xffffffff;
    *puVar7 = 0;
    *(uint64_t *)(puVar7 + 8) = 0;
    *(uint64_t *)(puVar7 + 4) = 0;
    EnterCriticalSection(0x180c698d8);
    *(uint64_t *)(puVar7 + 8) = 0;
    if (system_system_memory != (int32_t *)0x0) {
      puVar4 = *(int32_t **)(system_system_memory + 8);
      puVar8 = system_system_memory;
      while (puVar2 = puVar4, puVar2 != (int32_t *)0x0) {
        puVar8 = puVar2;
        puVar4 = *(int32_t **)(puVar2 + 8);
      }
      *(int32_t **)(puVar8 + 8) = puVar3;
      puVar3 = system_system_memory;
    }
    system_system_memory = puVar3;
    LeaveCriticalSection(0x180c698d8);
    puVar7 = puVar7 + 0x14;
  } while ((int64_t)puVar7 < 0x180c69e10);
  while ((system_data_8855 != '\0' &&
         (WaitForSingleObject(system_system_memory,0xffffffff), system_data_8855 != '\0'))) {
    EnterCriticalSection(0x180c698d8);
    puVar3 = system_system_memory;
    puVar8 = (int32_t *)0x0;
    if (system_system_memory != (int32_t *)0x0) {
      puVar1 = (uint64_t *)(system_system_memory + 8);
      system_system_memory = *(int32_t **)(system_system_memory + 8);
      *puVar1 = 0;
      puVar8 = puVar3;
    }
    LeaveCriticalSection(0x180c698d8);
    if (puVar8 != (int32_t *)0x0) {
      if (*(int64_t *)(puVar8 + 2) != 0) {
        uVar5 = NetworkProtocol_f2040(*puVar8,*(int64_t *)(puVar8 + 2),*(int16_t *)(puVar8 + 4));
        if (*(code **)(puVar8 + 6) != (code *)0x0) {
          (**(code **)(puVar8 + 6))(uVar5,*(int16_t *)(puVar8 + 4),*puVar8);
        }
        if (*(int64_t *)(puVar8 + 2) != 0) {
          if (system_system_memory == (code *)0x0) {
            free();
          }
          else {
            (*system_system_memory)();
          }
        }
      }
      *puVar8 = 0xffffffff;
      *(uint64_t *)(puVar8 + 2) = 0;
      *(int16_t *)(puVar8 + 4) = 0;
      *(uint64_t *)(puVar8 + 8) = 0;
      *(uint64_t *)(puVar8 + 6) = 0;
      EnterCriticalSection(0x180c698d8);
      *(uint64_t *)(puVar8 + 8) = 0;
      if (system_system_memory != (int32_t *)0x0) {
        puVar4 = *(int32_t **)(system_system_memory + 8);
        puVar3 = system_system_memory;
        while (puVar2 = puVar4, puVar2 != (int32_t *)0x0) {
          puVar3 = puVar2;
          puVar4 = *(int32_t **)(puVar2 + 8);
        }
        *(int32_t **)(puVar3 + 8) = puVar8;
        puVar8 = system_system_memory;
      }
      system_system_memory = puVar8;
      LeaveCriticalSection(0x180c698d8);
    }
  }
  while( true ) {
    EnterCriticalSection(0x180c698d8);
    puVar3 = system_system_memory;
    puVar8 = (int32_t *)0x0;
    if (system_system_memory != (int32_t *)0x0) {
      puVar1 = (uint64_t *)(system_system_memory + 8);
      system_system_memory = *(int32_t **)(system_system_memory + 8);
      *puVar1 = 0;
      puVar8 = puVar3;
    }
    LeaveCriticalSection(0x180c698d8);
    if (puVar8 == (int32_t *)0x0) break;
    if (*(int64_t *)(puVar8 + 2) != 0) {
      if (system_system_memory == (code *)0x0) {
        free();
      }
      else {
        (*system_system_memory)();
      }
    }
  }
  CloseHandle(system_system_memory);
  DeleteCriticalSection(0x180c698d8);
// WARNING: Could not recover jumptable at 0x0001808f374f. Too many branches
// WARNING: Treating indirect jump as call
  _endthread();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_f3760(uint64_t param_1,int64_t param_2,char param_3)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int16_t *puVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *plVar7;
  iVar2 = NetworkProtocol_f6c60();
  if (iVar2 != 0) {
    return 0;
  }
  puVar4 = (int16_t *)0x180c58882;
  iVar6 = 0;
  iVar2 = iVar6;
  do {
    if (*(int64_t *)(puVar4 + -0x11) != 0) {
      cVar1 = Function_233ee890(puVar4[-1],*puVar4);
      if (cVar1 == '\0') {
        cVar1 = Function_7b3c91d8(puVar4[-1],*puVar4,*(int32_t *)(puVar4 + 1));
        if ((cVar1 != '\0') || (cVar1 = Function_68c0c4ab(puVar4[-1],*puVar4), cVar1 != '\0')) {
          iVar2 = iVar2 + 1;
        }
      }
      else {
        iVar6 = iVar6 + 1;
      }
    }
    puVar4 = puVar4 + 0x10fc;
  } while ((int64_t)puVar4 < 0x180c69842);
  if (((iVar2 != 4) || (param_3 != '\x01')) && ((iVar6 != 4 || (param_3 != '\0')))) {
    plVar7 = (int64_t *)0x180c58860;
    do {
      if (*plVar7 == 0) {
        lVar5 = -1;
        do {
          lVar3 = lVar5;
          lVar5 = lVar3 + 1;
        } while (*(short *)(param_2 + lVar5 * 2) != 0);
        lVar5 = (lVar3 + 2) * 2;
        if (system_system_memory == (code *)0x0) {
          lVar3 = malloc(lVar5);
        }
        else {
          lVar3 = (*system_system_memory)();
        }
        *plVar7 = lVar3;
        if (lVar3 != 0) {
// WARNING: Subroutine does not return
          memset(lVar3,0,lVar5);
        }
      }
      plVar7 = plVar7 + 0x43f;
    } while ((int64_t)plVar7 < 0x180c69820);
  }
  Function_d48ca931();
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f3af0(void)
void NetworkProtocol_f3af0(void)
{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint64_t uVar4;
  int16_t *puVar5;
  char *pcVar6;
  pcVar6 = &system_data_9860;
  do {
    if ((*(int64_t *)(pcVar6 + 8) != 0) && (*pcVar6 == '\0')) {
      uVar4 = 0;
      do {
        bVar3 = (byte)uVar4;
        if (pcVar6[uVar4 + 1] != '\0') break;
        bVar3 = bVar3 + 1;
        uVar4 = (uint64_t)bVar3;
      } while (bVar3 < 6);
      if (bVar3 != 6) {
        puVar5 = (int16_t *)0x180c58882;
        do {
          if ((*(int64_t *)(puVar5 + -0x11) != 0) &&
             (cVar1 = Function_7b3c91d8(puVar5[-1],*puVar5,*(int32_t *)(puVar5 + 1)),
             cVar1 != '\0')) {
            bVar3 = 0;
            do {
              if (*(char *)((int64_t)puVar5 + (uint64_t)bVar3 + 7) != pcVar6[(uint64_t)bVar3 + 1]
                 ) break;
              bVar3 = bVar3 + 1;
            } while (bVar3 < 6);
            if (bVar3 == 6) {
              iVar2 = NetworkProtocol_f6c60();
              if (iVar2 == 0) {
                *(int8_t *)((int64_t)puVar5 + 0xd) = 0;
                Function_d48ca931();
              }
              break;
            }
          }
          puVar5 = puVar5 + 0x10fc;
        } while ((int64_t)puVar5 < 0x180c69842);
      }
      if (*(int64_t *)(pcVar6 + 8) != 0) {
        if (system_system_memory == (code *)0x0) {
          free();
        }
        else {
          (*system_system_memory)();
        }
      }
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      pcVar6[8] = '\0';
      pcVar6[9] = '\0';
      pcVar6[10] = '\0';
      pcVar6[0xb] = '\0';
      pcVar6[0xc] = '\0';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
    }
    pcVar6 = pcVar6 + 0x10;
    if (0x180c6989f < (int64_t)pcVar6) {
      return;
    }
  } while( true );
}
// 函数: void NetworkProtocol_f3c10(int64_t param_1)
void NetworkProtocol_f3c10(int64_t param_1)
{
  int iVar1;
  iVar1 = NetworkProtocol_f6c60();
  if (iVar1 != 0) {
    return;
  }
  if (param_1 != 0) {
    NetworkProtocol_f1d10(param_1);
  }
  if (system_data_9e20 != '\0') {
// WARNING: Could not recover jumptable at 0x0001808f6ca0. Too many branches
// WARNING: Treating indirect jump as call
    LeaveCriticalSection(0x180c69e50);
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f3c80(int64_t param_1)
void NetworkProtocol_f3c80(int64_t param_1)
{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint uVar11;
  bool bVar12;
  int8_t stack_array_188 [80];
  ushort stack_array_138 [2];
  uint local_var_134;
  uint local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int64_t lStack_118;
  int64_t lStack_110;
  uint64_t local_var_100;
  int64_t lStack_f8;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  uVar5 = GetCurrentThread();
  SetThreadPriority(uVar5,0xf);
  lVar7 = *(int64_t *)(param_1 + 0x18);
  iVar8 = 0;
  local_var_100 = 0;
  lStack_f8 = lVar7;
  cVar3 = HidD_GetPreparsedData(*(uint64_t *)(param_1 + 0x10),&local_var_120);
  if (cVar3 == '\0') {
    iVar4 = NetworkProtocol_f6c60();
    if (iVar4 == 0) {
      NetworkProtocol_f1d10(param_1);
      Function_d48ca931();
    }
    if (system_data_8853 != '\0') {
      plVar9 = (int64_t *)0x180c69820;
      do {
        if (*plVar9 == lVar7) goto LAB_1808f3dbc;
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 < 8);
    }
    goto LAB_1808f44e3;
  }
  local_var_78 = 0;
  local_var_70 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_40 = 0;
  iVar4 = HidP_GetCaps(local_var_120,&local_var_78);
  if (iVar4 != 0x110000) {
    HidD_FreePreparsedData(local_var_120);
    iVar4 = NetworkProtocol_f6c60();
    if (iVar4 == 0) {
      NetworkProtocol_f1d10(param_1);
      Function_d48ca931();
    }
    if (system_data_8853 != '\0') {
      plVar9 = (int64_t *)0x180c69820;
      do {
        if (*plVar9 == lVar7) goto LAB_1808f3dbc;
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 < 8);
    }
    goto LAB_1808f44e3;
  }
  stack_array_138[0] = local_var_40._4_2_;
  if (system_system_memory == (code *)0x0) {
    lVar6 = malloc((uint64_t)local_var_40._4_2_ * 0x48);
  }
  else {
    lVar6 = (*system_system_memory)();
  }
  lStack_118 = lVar6;
  if (lVar6 == 0) {
LAB_1808f44aa:
    HidD_FreePreparsedData(local_var_120);
    NetworkProtocol_f0550(*(int32_t *)(param_1 + 8));
    iVar8 = NetworkProtocol_f6c60();
    if (iVar8 == 0) {
      NetworkProtocol_f1d10(param_1);
      Function_d48ca931();
    }
    bVar12 = system_data_8853 == '\0';
  }
  else {
    iVar8 = HidP_GetValueCaps(2,lVar6,stack_array_138,local_var_120);
    if (iVar8 == 0x110000) {
      uVar2 = (ushort)local_var_70;
      uVar10 = local_var_70 & 0xffff;
      uVar1 = local_var_78._4_2_;
      uVar11 = (uint)local_var_78._4_2_;
      local_var_134 = (uint)local_var_78._4_2_;
      local_var_130 = local_var_134;
      cVar3 = Function_7b3c91d8(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22),
                                  *(int32_t *)(param_1 + 0x24));
      if (cVar3 == '\0') {
        cVar3 = Function_68c0c4ab(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22))
        ;
        if ((cVar3 != '\0') && (0x3f < uVar2)) goto LAB_1808f3ebf;
      }
      else if (0x34 < uVar2) {
LAB_1808f3ebf:
        if (0x3f < uVar1) {
          if (system_system_memory == (code *)0x0) {
            lVar7 = malloc(uVar10);
          }
          else {
            lVar7 = (*system_system_memory)();
          }
          lStack_110 = lVar7;
          if (lVar7 != 0) {
            iVar8 = NetworkProtocol_f2520(param_1,lVar6,stack_array_138[0]);
            if (0 < iVar8) {
              if (system_system_memory == (code *)0x0) {
                local_var_128 = malloc(local_var_134);
                uVar11 = local_var_134;
              }
              else {
                local_var_128 = (*system_system_memory)();
                uVar11 = local_var_134;
              }
LAB_1808f3fb9:
// WARNING: Subroutine does not return
              memset(local_var_128,0,uVar11);
            }
            if (-1 < iVar8) {
              if (local_var_134 == 0x40) {
                if (system_system_memory == (code *)0x0) {
                  local_var_128 = malloc(0x800);
                  uVar11 = local_var_134 << 5;
                  local_var_130 = uVar11;
                }
                else {
                  local_var_128 = (*system_system_memory)();
                  uVar11 = local_var_134 << 5;
                  local_var_130 = uVar11;
                }
              }
              else if (system_system_memory == (code *)0x0) {
                local_var_128 = malloc(local_var_134);
                local_var_130 = uVar11;
              }
              else {
                local_var_128 = (*system_system_memory)();
                local_var_130 = uVar11;
              }
              goto LAB_1808f3fb9;
            }
            if (system_system_memory == (code *)0x0) {
              free(lVar7);
            }
            else {
              (*system_system_memory)();
            }
          }
        }
      }
      if (system_system_memory == (code *)0x0) {
        free(lVar6);
        lVar7 = lStack_f8;
      }
      else {
        (*system_system_memory)();
        lVar7 = lStack_f8;
      }
      goto LAB_1808f44aa;
    }
    HidD_FreePreparsedData(local_var_120);
    NetworkProtocol_f3c10(param_1);
    if (system_system_memory == (code *)0x0) {
      free(lVar6);
      bVar12 = system_data_8853 == '\0';
    }
    else {
      (*system_system_memory)();
      bVar12 = system_data_8853 == '\0';
    }
  }
  if (!bVar12) {
    Function_905accca(lVar7);
  }
LAB_1808f44e3:
  _endthread();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_188);
LAB_1808f3dbc:
  *(uint64_t *)((int64_t)iVar8 * 8 + 0x180c69820) = 0;
  goto LAB_1808f44e3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f3e6b(void)
void NetworkProtocol_f3e6b(void)
{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_EDI;
  uint uVar6;
  uint local_buffer_54;
  uint local_buffer_58;
  uint64_t local_buffer_68;
  uVar1 = *(ushort *)(unaff_RBP + 0x14);
  uVar6 = (uint)uVar1;
  local_buffer_54 = (uint)uVar1;
  local_buffer_58 = local_buffer_54;
  cVar2 = Function_7b3c91d8();
  if (cVar2 == '\0') {
    cVar2 = Function_68c0c4ab(*(int16_t *)(unaff_RBX + 0x20),*(int16_t *)(unaff_RBX + 0x22))
    ;
    if ((cVar2 == '\0') || (unaff_EDI < 0x40)) goto NetworkProtocol_f4485;
  }
  else if (unaff_EDI < 0x35) goto NetworkProtocol_f4485;
  if (0x3f < uVar1) {
    if (system_system_memory == (code *)0x0) {
      lVar4 = malloc();
    }
    else {
      lVar4 = (*system_system_memory)();
    }
    if (lVar4 != 0) {
      iVar3 = NetworkProtocol_f2520();
      if (iVar3 < 1) {
        if (iVar3 < 0) {
          if (system_system_memory == (code *)0x0) {
            free(lVar4);
          }
          else {
            (*system_system_memory)();
          }
          goto NetworkProtocol_f4485;
        }
        if (local_buffer_54 == 0x40) {
          if (system_system_memory == (code *)0x0) {
            uVar5 = malloc(0x800);
            uVar6 = local_buffer_54 << 5;
            local_buffer_58 = uVar6;
          }
          else {
            uVar5 = (*system_system_memory)();
            uVar6 = local_buffer_54 << 5;
            local_buffer_58 = uVar6;
          }
        }
        else if (system_system_memory == (code *)0x0) {
          uVar5 = malloc(local_buffer_54);
          local_buffer_58 = uVar6;
        }
        else {
          uVar5 = (*system_system_memory)();
          local_buffer_58 = uVar6;
        }
      }
      else if (system_system_memory == (code *)0x0) {
        uVar5 = malloc(local_buffer_54);
        uVar6 = local_buffer_54;
      }
      else {
        uVar5 = (*system_system_memory)();
        uVar6 = local_buffer_54;
      }
// WARNING: Subroutine does not return
      memset(uVar5,0,uVar6);
    }
  }
NetworkProtocol_f4485:
  if (system_system_memory == (code *)0x0) {
    free();
  }
  else {
    (*system_system_memory)();
  }
  uVar5 = *(uint64_t *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(local_buffer_68);
  NetworkProtocol_f0550(*(int32_t *)(unaff_RBX + 8));
  iVar3 = NetworkProtocol_f6c60();
  if (iVar3 == 0) {
    NetworkProtocol_f1d10();
    Function_d48ca931();
  }
  if (system_data_8853 != '\0') {
    Function_905accca(uVar5);
  }
  _endthread();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f3ed1(void)
void NetworkProtocol_f3ed1(void)
{
  int iVar1;
  code *in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_R15D;
  uint64_t local_buffer_50;
  uint64_t local_buffer_68;
  if (in_RAX == (code *)0x0) {
    lVar2 = malloc();
  }
  else {
    lVar2 = (*in_RAX)();
  }
  if (lVar2 == 0) {
LAB_1808f447d:
    if (system_system_memory == (code *)0x0) {
      free();
    }
    else {
      (*system_system_memory)();
    }
    uVar3 = *(uint64_t *)(unaff_RBP + -0x70);
    HidD_FreePreparsedData(local_buffer_68);
    NetworkProtocol_f0550(*(int32_t *)(unaff_RBX + 8));
    iVar1 = NetworkProtocol_f6c60();
    if (iVar1 == 0) {
      NetworkProtocol_f1d10();
      Function_d48ca931();
    }
    if (system_data_8853 != '\0') {
      Function_905accca(uVar3);
    }
    _endthread();
// WARNING: Subroutine does not return
    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
  }
  iVar1 = NetworkProtocol_f2520();
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      if (system_system_memory == (code *)0x0) {
        free(lVar2);
      }
      else {
        (*system_system_memory)();
      }
      goto LAB_1808f447d;
    }
    if (local_buffer_50._4_4_ == 0x40) {
      if (system_system_memory == (code *)0x0) {
        uVar3 = malloc(0x800);
        local_buffer_50._4_4_ = 0x800;
      }
      else {
        uVar3 = (*system_system_memory)();
        local_buffer_50._4_4_ = 0x800;
      }
    }
    else if (system_system_memory == (code *)0x0) {
      uVar3 = malloc(local_buffer_50._4_4_);
      local_buffer_50._4_4_ = unaff_R15D;
    }
    else {
      uVar3 = (*system_system_memory)();
      local_buffer_50._4_4_ = unaff_R15D;
    }
  }
  else if (system_system_memory == (code *)0x0) {
    uVar3 = malloc(local_buffer_50._4_4_);
  }
  else {
    uVar3 = (*system_system_memory)();
  }
// WARNING: Subroutine does not return
  memset(uVar3,0,local_buffer_50._4_4_);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f3f05(void)
void NetworkProtocol_f3f05(void)
{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_R15D;
  uint64_t local_buffer_50;
  uint64_t local_buffer_68;
  iVar1 = NetworkProtocol_f2520();
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      if (system_system_memory == (code *)0x0) {
        free();
      }
      else {
        (*system_system_memory)();
      }
      if (system_system_memory == (code *)0x0) {
        free();
      }
      else {
        (*system_system_memory)();
      }
      uVar2 = *(uint64_t *)(unaff_RBP + -0x70);
      HidD_FreePreparsedData(local_buffer_68);
      NetworkProtocol_f0550(*(int32_t *)(unaff_RBX + 8));
      iVar1 = NetworkProtocol_f6c60();
      if (iVar1 == 0) {
        NetworkProtocol_f1d10();
        Function_d48ca931();
      }
      if (system_data_8853 != '\0') {
        Function_905accca(uVar2);
      }
      _endthread();
// WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
    }
    if (local_buffer_50._4_4_ == 0x40) {
      if (system_system_memory == (code *)0x0) {
        uVar2 = malloc(0x800);
        local_buffer_50._4_4_ = 0x800;
      }
      else {
        uVar2 = (*system_system_memory)();
        local_buffer_50._4_4_ = 0x800;
      }
    }
    else if (system_system_memory == (code *)0x0) {
      uVar2 = malloc(local_buffer_50._4_4_);
      local_buffer_50._4_4_ = unaff_R15D;
    }
    else {
      uVar2 = (*system_system_memory)();
      local_buffer_50._4_4_ = unaff_R15D;
    }
  }
  else if (system_system_memory == (code *)0x0) {
    uVar2 = malloc(local_buffer_50._4_4_);
  }
  else {
    uVar2 = (*system_system_memory)();
  }
// WARNING: Subroutine does not return
  memset(uVar2,0,local_buffer_50._4_4_);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f4473(void)
void NetworkProtocol_f4473(void)
{
  uint64_t uVar1;
  int iVar2;
  code *in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t local_buffer_68;
  (*in_RAX)();
  if (system_system_memory == (code *)0x0) {
    free();
  }
  else {
    (*system_system_memory)();
  }
  uVar1 = *(uint64_t *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(local_buffer_68);
  NetworkProtocol_f0550(*(int32_t *)(unaff_RBX + 8));
  iVar2 = NetworkProtocol_f6c60();
  if (iVar2 == 0) {
    NetworkProtocol_f1d10();
    Function_d48ca931();
  }
  if (system_data_8853 != '\0') {
    Function_905accca(uVar1);
  }
  _endthread();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f4485(void)
void NetworkProtocol_f4485(void)
{
  uint64_t uVar1;
  int iVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t local_buffer_68;
  if (system_system_memory == (code *)0x0) {
    free();
  }
  else {
    (*system_system_memory)();
  }
  uVar1 = *(uint64_t *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(local_buffer_68);
  NetworkProtocol_f0550(*(int32_t *)(unaff_RBX + 8));
  iVar2 = NetworkProtocol_f6c60();
  if (iVar2 == 0) {
    NetworkProtocol_f1d10();
    Function_d48ca931();
  }
  if (system_data_8853 != '\0') {
    Function_905accca(uVar1);
  }
  _endthread();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_f449c(void)
void NetworkProtocol_f449c(void)
{
  uint64_t uVar1;
  int32_t in_EAX;
  int iVar2;
  int32_t in_register_00000004;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t local_buffer_68;
  (*(code *)CONCAT44(in_register_00000004,in_EAX))();
  uVar1 = *(uint64_t *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(local_buffer_68);
  NetworkProtocol_f0550(*(int32_t *)(unaff_RBX + 8));
  iVar2 = NetworkProtocol_f6c60();
  if (iVar2 == 0) {
    NetworkProtocol_f1d10();
    Function_d48ca931();
  }
  if (system_data_8853 != '\0') {
    Function_905accca(uVar1);
  }
  _endthread();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
NetworkProtocol_f4510(int64_t *param_1,uint64_t *param_2,int64_t *param_3,int64_t *param_4)
{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  plVar6 = (int64_t *)*param_1;
  if ((param_3 == (int64_t *)*plVar6) && (param_4 == plVar6)) {
    NetworkProtocol_f17d0(param_1,plVar6[1],param_3,param_4,0xfffffffffffffffe);
    *(int64_t **)(*param_1 + 8) = plVar6;
    *(int64_t **)*param_1 = plVar6;
    *(int64_t **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(uint64_t *)*param_1;
  }
  else {
    plVar6 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (int64_t *)plVar6[2];
        if (*(char *)((int64_t)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar3 = (int64_t *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            param_3 = plVar3;
            plVar3 = (int64_t *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (int64_t *)plVar6[1];
          plVar3 = plVar6;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar3 == (int64_t *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (int64_t *)param_3[1];
            plVar3 = param_3;
          }
        }
        if (*(char *)((int64_t)plVar2 + 0x19) == '\0') {
          plVar2 = (int64_t *)*plVar2;
          cVar1 = *(char *)((int64_t)plVar2 + 0x19);
          while (cVar1 == '\0') {
            plVar2 = (int64_t *)*plVar2;
            cVar1 = *(char *)((int64_t)plVar2 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (int64_t *)plVar6[1];
          while ((plVar3 = plVar2, cVar1 == '\0' && (plVar6 == (int64_t *)plVar3[2]))) {
            cVar1 = *(char *)(plVar3[1] + 0x19);
            plVar2 = (int64_t *)plVar3[1];
            plVar6 = plVar3;
          }
        }
        lVar5 = NetworkProtocol_f1890(param_1);
        if ((7 < *(uint64_t *)(lVar5 + 0x38)) && (*(int64_t *)(lVar5 + 0x20) != 0)) {
          if (system_system_memory == (code *)0x0) {
            free();
          }
          else {
            (*system_system_memory)();
          }
        }
        *(uint64_t *)(lVar5 + 0x30) = 0;
        *(uint64_t *)(lVar5 + 0x38) = 7;
        *(int16_t *)(lVar5 + 0x20) = 0;
        if (lVar5 != 0) {
          if (system_system_memory == (code *)0x0) {
            free(lVar5);
          }
          else {
            (*system_system_memory)();
          }
        }
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_f4720(uint64_t param_1,uint64_t param_2,int8_t param_3)
void NetworkProtocol_f4720(uint64_t param_1,uint64_t param_2,int8_t param_3)
{
  int8_t stack_array_b8 [112];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
// WARNING: Subroutine does not return
  memset(param_2,0,param_3);
}
uint64_t NetworkProtocol_f4930(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  char cVar1;
  cVar1 = Function_7b3c91d8(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22),
                              *(int32_t *)(param_1 + 0x24));
  if (cVar1 != '\0') {
// WARNING: Subroutine does not return
    memset(param_2,0,param_3);
  }
  cVar1 = Function_68c0c4ab(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22));
  if (cVar1 != '\0') {
// WARNING: Subroutine does not return
    memset(param_2,0,param_3);
  }
  return 0;
}
// 函数: void NetworkProtocol_f4a70(void)
void NetworkProtocol_f4a70(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}