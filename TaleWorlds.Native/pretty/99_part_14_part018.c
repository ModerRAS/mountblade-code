#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part018.c - 7 个函数
// 函数: void function_8f9b70(uint64_t param_1)
void function_8f9b70(uint64_t param_1)
{
  char cVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *puVar8;
  char *pcVar9;
  void *puVar10;
  int8_t stack_array_c8 [32];
  char *pcStack_a8;
  int iStack_a0;
  void *aplocal_var_98 [6];
  void *aplocal_var_68 [4];
  void *plocal_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  pcVar3 = system_system_memory;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  aplocal_var_68[0] = &processed_var_6608_ptr;
  puVar10 = &processed_var_6800_ptr;
  pcVar7 = (char *)0x0;
  aplocal_var_98[0] = &processed_var_6800_ptr;
  local_var_40 = 0;
  aplocal_var_68[1] = &processed_var_6632_ptr;
  puVar8 = &processed_var_6576_ptr;
  aplocal_var_98[5] = &processed_var_6576_ptr;
  aplocal_var_68[2] = &processed_var_6672_ptr;
  aplocal_var_68[3] = &processed_var_6720_ptr;
  plocal_var_48 = &processed_var_6760_ptr;
  aplocal_var_98[1] = &processed_var_6840_ptr;
  aplocal_var_98[2] = &processed_var_6864_ptr;
  aplocal_var_98[3] = &processed_var_6896_ptr;
  aplocal_var_98[4] = (void *)0x0;
  _guard_check_icall(system_system_memory);
  iStack_a0 = 0;
  pcStack_a8 = (char *)0x0;
  iVar4 = (*pcVar3)(param_1,4,1,0);
  pcVar5 = pcVar7;
  if ((iVar4 != 0) &&
     (pcVar5 = (char *)LocalAlloc(0x40,iVar4), pcVar3 = system_system_memory, pcVar5 != (char *)0x0)) {
    _guard_check_icall(system_system_memory);
    pcStack_a8 = pcVar5;
    iStack_a0 = iVar4;
    iVar4 = (*pcVar3)(param_1,4,1);
    pcVar9 = pcVar7;
    if (iVar4 != 0) {
      do {
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[(int64_t)puVar8 - (int64_t)pcVar5];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          LocalFree(pcVar5);
          pcVar3 = system_system_memory;
          pcVar5 = (char *)0x0;
          _guard_check_icall(system_system_memory);
          iStack_a0 = 0;
          pcStack_a8 = (char *)0x0;
          iVar4 = (*pcVar3)(param_1,4,0);
          if ((iVar4 == 0) ||
             (pcVar5 = (char *)LocalAlloc(0x40,iVar4), pcVar3 = system_system_memory,
             pcVar5 == (char *)0x0)) goto LAB_1808f9c53;
          _guard_check_icall(system_system_memory);
          pcStack_a8 = pcVar5;
          iStack_a0 = iVar4;
          iVar4 = (*pcVar3)(param_1,4,0);
          if (iVar4 == 0) goto LAB_1808f9c53;
          goto LAB_1808f9d74;
        }
        pcVar9 = (char *)(uint64_t)((int)pcVar9 + 1);
        puVar8 = aplocal_var_98[(int64_t)(pcVar9 + 5)];
      } while (puVar8 != (void *)0x0);
      goto LAB_1808f9d95;
    }
  }
LAB_1808f9c53:
  GetLastError();
  goto LAB_1808f9d95;
  while( true ) {
    pcVar7 = (char *)(uint64_t)((int)pcVar7 + 1);
    puVar10 = aplocal_var_98[(int64_t)pcVar7];
    if (puVar10 == (void *)0x0) break;
LAB_1808f9d74:
    iVar4 = _stricmp(pcVar5,puVar10);
    if (iVar4 == 0) break;
  }
LAB_1808f9d95:
  LocalFree(pcVar5);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_c8);
}
uint64_t function_8f9de0(int64_t param_1,uint param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uVar2 = 0;
  lVar1 = function_8f9200();
  if ((param_1 == 0) || (lVar1 != 0)) {
    uVar2 = LoadLibraryExW(lVar1,0,param_2 & 0xffffe0f7);
  }
  LocalFree(lVar1);
  return uVar2;
}
void GetProcAddress(void)
{
// WARNING: Could not recover jumptable at 0x0001808f9e50. Too many branches
// WARNING: Treating indirect jump as call
  GetProcAddress();
  return;
}
uint64_t function_8f9e60(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  int32_t astack_special_x_20 [2];
  uint64_t stack_array_18 [2];
  function_8fb9a0(&processed_var_7504_ptr,0x18,&processed_var_7480_ptr,&processed_var_7448_ptr,param_2,param_1);
  uVar2 = RegOpenKeyExW(0xffffffff80000002,param_1,0,0x20019,stack_array_18);
  if ((int)uVar2 == 0) {
    astack_special_x_20[0] = 0x104;
    uVar1 = RegQueryValueExW(stack_array_18[0],param_2,0,0,param_3,astack_special_x_20);
    uVar2 = (uint64_t)uVar1;
    if (uVar1 == 0) {
      function_8fb9a0(&processed_var_7504_ptr,0x1f,&processed_var_7480_ptr,&processed_var_7592_ptr,param_2,param_1);
    }
    RegCloseKey(stack_array_18[0]);
  }
  return uVar2;
}
uint function_8f9f40(uint64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  code *pcVar3;
  code *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iStackX_c;
  int32_t astack_special_x_18 [2];
  uint64_t local_var_68;
  int64_t lStack_60;
  function_8fb9a0(&processed_var_7504_ptr,0x29,&processed_var_7672_ptr,&processed_var_7624_ptr);
  lVar2 = LoadLibraryW(&processed_var_7696_ptr);
  if (lVar2 == 0) {
    return 0x8000ffff;
  }
  pcVar3 = (code *)GetProcAddress(lVar2,&processed_var_7720_ptr);
  pcVar4 = (code *)GetProcAddress(lVar2,&processed_var_7744_ptr);
  lVar5 = GetProcAddress(lVar2,&processed_var_7768_ptr);
  if (((pcVar3 == (code *)0x0) || (pcVar4 == (code *)0x0)) || (lVar5 == 0)) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar8 = 0;
    local_var_68 = 0;
    lStack_60 = 0;
    _guard_check_icall(pcVar3);
    uVar1 = (*pcVar3)(&local_var_68);
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 | 0x10000000;
    }
    else if ((uint)local_var_68 == 0) {
      uVar1 = 0x8000ffff;
    }
    else {
      lVar5 = malloc((local_var_68 & 0xffffffff) * 0x14);
      if (lVar5 == 0) {
        uVar1 = 0x8007000e;
      }
      else {
        lStack_60 = lVar5;
        _guard_check_icall(pcVar3);
        uVar1 = (*pcVar3)(&local_var_68);
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 | 0x10000000;
        }
        else {
          if ((uint)local_var_68 != 0) {
            iStackX_c = (int)((uint64_t)param_1 >> 0x20);
            uVar9 = uVar8;
            do {
              if ((*(int *)(lVar5 + 8 + uVar9 * 0x14) == iStackX_c) &&
                 (*(int *)(lVar5 + 4 + uVar9 * 0x14) == (int)param_1)) {
                if (*(int *)(lVar5 + uVar9 * 0x14) != 0) {
                  lVar6 = malloc(0x430);
                  if (lVar6 != 0) {
// WARNING: Subroutine does not return
                    memset(lVar6,0,0x430);
                  }
                  NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
                  uVar1 = 0x80004005;
                  goto LAB_1808fa111;
                }
                break;
              }
              uVar1 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar1;
            } while (uVar1 < (uint)local_var_68);
          }
          NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
          uVar1 = 0x80070057;
LAB_1808fa111:
          if ((uint)local_var_68 != 0) {
            do {
              astack_special_x_18[0] = *(int32_t *)(lVar5 + uVar8 * 0x14);
              _guard_check_icall(pcVar4);
              (*pcVar4)(astack_special_x_18);
              uVar7 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar7;
            } while (uVar7 < (uint)local_var_68);
          }
          free(lVar5);
          FreeLibrary(lVar2);
        }
      }
    }
  }
  return uVar1;
}
uint function_8f9f9d(void)
{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  uint64_t uVar8;
  pcVar2 = (code *)GetProcAddress();
  pcVar3 = (code *)GetProcAddress();
  lVar4 = GetProcAddress();
  if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) || (lVar4 == 0)) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar7 = 0;
    *(uint64_t *)(unaff_RBP + -9) = 0;
    *(int32_t *)(unaff_RBP + -9) = 0;
    *(uint64_t *)(unaff_RBP + -1) = 0;
    _guard_check_icall(pcVar2);
    uVar1 = (*pcVar2)(unaff_RBP + -9);
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 | 0x10000000;
    }
    else if (*(uint *)(unaff_RBP + -9) == 0) {
      uVar1 = 0x8000ffff;
    }
    else {
      lVar4 = malloc((uint64_t)*(uint *)(unaff_RBP + -9) * 0x14);
      if (lVar4 == 0) {
        uVar1 = 0x8007000e;
      }
      else {
        *(int64_t *)(unaff_RBP + -1) = lVar4;
        _guard_check_icall(pcVar2);
        uVar1 = (*pcVar2)(unaff_RBP + -9);
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 | 0x10000000;
        }
        else {
          if (*(uint *)(unaff_RBP + -9) != 0) {
            uVar8 = uVar7;
            do {
              if ((*(int *)(lVar4 + 8 + uVar8 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
                 (*(int *)(lVar4 + 4 + uVar8 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
                if (*(int *)(lVar4 + uVar8 * 0x14) != 0) {
                  lVar5 = malloc(0x430);
                  if (lVar5 != 0) {
// WARNING: Subroutine does not return
                    memset(lVar5,0,0x430);
                  }
                  NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
                  uVar1 = 0x80004005;
                  goto LAB_1808fa111;
                }
                break;
              }
              uVar1 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar1;
            } while (uVar1 < *(uint *)(unaff_RBP + -9));
          }
          NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
          uVar1 = 0x80070057;
LAB_1808fa111:
          if (*(int *)(unaff_RBP + -9) != 0) {
            do {
              *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(lVar4 + uVar7 * 0x14);
              _guard_check_icall(pcVar3);
              (*pcVar3)(unaff_RBP + 0x77);
              uVar6 = (int)uVar7 + 1;
              uVar7 = (uint64_t)uVar6;
            } while (uVar6 < *(uint *)(unaff_RBP + -9));
          }
          free(lVar4);
          FreeLibrary();
        }
      }
    }
  }
  return uVar1;
}
uint function_8fa005(void)
{
  uint uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  code *unaff_RSI;
  uint64_t uVar6;
  code *unaff_R14;
  uVar5 = 0;
  *(uint64_t *)(unaff_RBP + -9) = in_RAX;
  *(int32_t *)(unaff_RBP + -9) = 0;
  *(uint64_t *)(unaff_RBP + -1) = 0;
  _guard_check_icall();
  uVar1 = (*unaff_R14)(unaff_RBP + -9);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 | 0x10000000;
  }
  else if (*(uint *)(unaff_RBP + -9) == 0) {
    uVar1 = 0x8000ffff;
  }
  else {
    lVar2 = malloc((uint64_t)*(uint *)(unaff_RBP + -9) * 0x14);
    if (lVar2 == 0) {
      uVar1 = 0x8007000e;
    }
    else {
      *(int64_t *)(unaff_RBP + -1) = lVar2;
      _guard_check_icall();
      uVar1 = (*unaff_R14)(unaff_RBP + -9);
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 | 0x10000000;
      }
      else {
        if (*(uint *)(unaff_RBP + -9) != 0) {
          uVar6 = uVar5;
          do {
            if ((*(int *)(lVar2 + 8 + uVar6 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
               (*(int *)(lVar2 + 4 + uVar6 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
              if (*(int *)(lVar2 + uVar6 * 0x14) != 0) {
                lVar3 = malloc(0x430);
                if (lVar3 != 0) {
// WARNING: Subroutine does not return
                  memset(lVar3,0,0x430);
                }
                NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
                uVar1 = 0x80004005;
                goto LAB_1808fa111;
              }
              break;
            }
            uVar1 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar1;
          } while (uVar1 < *(uint *)(unaff_RBP + -9));
        }
        NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
        uVar1 = 0x80070057;
LAB_1808fa111:
        if (*(int *)(unaff_RBP + -9) != 0) {
          do {
            *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(lVar2 + uVar5 * 0x14);
            _guard_check_icall();
            (*unaff_RSI)(unaff_RBP + 0x77);
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
          } while (uVar4 < *(uint *)(unaff_RBP + -9));
        }
        free(lVar2);
        FreeLibrary();
      }
    }
  }
  return uVar1;
}
uint function_8fa046(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint unaff_EBX;
  int64_t unaff_RBP;
  code *unaff_RSI;
  uint64_t uVar4;
  code *unaff_R14;
  lVar2 = malloc(param_1 << 2);
  if (lVar2 == 0) {
    uVar1 = 0x8007000e;
  }
  else {
    *(int64_t *)(unaff_RBP + -1) = lVar2;
    _guard_check_icall();
    uVar1 = (*unaff_R14)(unaff_RBP + -9);
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 | 0x10000000;
    }
    else {
      uVar4 = (uint64_t)unaff_EBX;
      if (*(uint *)(unaff_RBP + -9) != 0) {
        do {
          if ((*(int *)(lVar2 + 8 + uVar4 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
             (*(int *)(lVar2 + 4 + uVar4 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
            if (*(int *)(lVar2 + uVar4 * 0x14) != 0) {
              lVar3 = malloc(0x430);
              if (lVar3 != 0) {
// WARNING: Subroutine does not return
                memset(lVar3,0,0x430);
              }
              NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
              uVar1 = 0x80004005;
              goto LAB_1808fa111;
            }
            break;
          }
          uVar1 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar1;
        } while (uVar1 < *(uint *)(unaff_RBP + -9));
      }
      NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
      uVar1 = 0x80070057;
LAB_1808fa111:
      if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
        do {
          *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(lVar2 + (uint64_t)unaff_EBX * 0x14);
          _guard_check_icall();
          (*unaff_RSI)(unaff_RBP + 0x77);
          unaff_EBX = unaff_EBX + 1;
        } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
      }
      free(lVar2);
      FreeLibrary();
    }
  }
  return uVar1;
}
// 函数: void function_8fa067(void)
void function_8fa067(void)
{
  return;
}
// 函数: void function_8fa06f(void)
void function_8fa06f(void)
{
  return;
}
uint function_8fa08c(void)
{
  uint uVar1;
  int64_t lVar2;
  uint unaff_EBX;
  int64_t unaff_RBP;
  code *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar3;
  code *unaff_R14;
  *(int64_t *)(unaff_RBP + -1) = unaff_RDI;
  _guard_check_icall();
  uVar1 = (*unaff_R14)(unaff_RBP + -9);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 | 0x10000000;
  }
  else {
    uVar3 = (uint64_t)unaff_EBX;
    if (*(uint *)(unaff_RBP + -9) != 0) {
      do {
        if ((*(int *)(unaff_RDI + 8 + uVar3 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
           (*(int *)(unaff_RDI + 4 + uVar3 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
          if (*(int *)(unaff_RDI + uVar3 * 0x14) != 0) {
            lVar2 = malloc(0x430);
            if (lVar2 != 0) {
// WARNING: Subroutine does not return
              memset(lVar2,0,0x430);
            }
            NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
            uVar1 = 0x80004005;
            goto LAB_1808fa111;
          }
          break;
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar1;
      } while (uVar1 < *(uint *)(unaff_RBP + -9));
    }
    NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
    uVar1 = 0x80070057;
LAB_1808fa111:
    if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
      do {
        *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (uint64_t)unaff_EBX * 0x14)
        ;
        _guard_check_icall();
        (*unaff_RSI)(unaff_RBP + 0x77);
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
    }
    free();
    FreeLibrary();
  }
  return uVar1;
}
uint64_t function_8fa0b1(uint64_t param_1,uint64_t param_2,uint param_3,uint param_4)
{
  int64_t lVar1;
  uint unaff_EBX;
  int64_t unaff_RBP;
  code *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar2;
  if (param_4 != 0) {
    do {
      if ((*(int *)(unaff_RDI + 8 + (uint64_t)param_3 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
         (*(int *)(unaff_RDI + 4 + (uint64_t)param_3 * 0x14) ==
          (int)*(uint64_t *)(unaff_RBP + 0x67))) {
        if (*(int *)(unaff_RDI + (uint64_t)param_3 * 0x14) != 0) {
          lVar1 = malloc(0x430);
          if (lVar1 != 0) {
// WARNING: Subroutine does not return
            memset(lVar1,0,0x430);
          }
          NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
          uVar2 = 0x80004005;
          goto LAB_1808fa111;
        }
        break;
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
  uVar2 = 0x80070057;
LAB_1808fa111:
  if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
    do {
      *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (uint64_t)unaff_EBX * 0x14);
      _guard_check_icall();
      (*unaff_RSI)(unaff_RBP + 0x77);
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
  }
  free();
  FreeLibrary();
  return uVar2;
}
int32_t function_8fa120(void)
{
  uint unaff_EBX;
  int64_t unaff_RBP;
  code *unaff_RSI;
  int64_t unaff_RDI;
  int32_t unaff_R14D;
  do {
    *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (uint64_t)unaff_EBX * 0x14);
    _guard_check_icall();
    (*unaff_RSI)(unaff_RBP + 0x77);
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
  free();
  FreeLibrary();
  return unaff_R14D;
}
uint64_t function_8fa15c(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  uint unaff_EBX;
  int64_t unaff_RBP;
  code *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar2;
  if (*(int *)(unaff_RDI + (param_3 & 0xffffffff) * 0x14) == 0) {
    NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x91,&processed_var_7672_ptr,&processed_var_7928_ptr);
    uVar2 = 0x80070057;
  }
  else {
    lVar1 = malloc(0x430);
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      memset(lVar1,0,0x430);
    }
    NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0x8b,&processed_var_7672_ptr,&processed_var_7872_ptr);
    uVar2 = 0x80004005;
  }
  if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
    do {
      *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (uint64_t)unaff_EBX * 0x14);
      _guard_check_icall();
      (*unaff_RSI)(unaff_RBP + 0x77);
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
  }
  free();
  FreeLibrary();
  return uVar2;
}
uint64_t function_8fa285(void)
{
  return 0x8000ffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8fa290(uint64_t param_1)
void function_8fa290(uint64_t param_1)
{
  int iVar1;
  int16_t *puVar2;
  int64_t lVar3;
  int8_t stack_array_258 [32];
  int8_t *plocal_var_238;
  int8_t stack_array_228 [528];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_258;
  iVar1 = GetModuleFileNameW(0,stack_array_228,0x104);
  if (iVar1 == 0) {
    function_8fb9a0(&processed_var_7504_ptr,0xb5,&processed_var_8048_ptr,&processed_var_7992_ptr);
  }
  else {
    puVar2 = (int16_t *)wcsrchr(stack_array_228,0x5c);
    if (puVar2 != (int16_t *)0x0) {
      *puVar2 = 0;
    }
    wcscat_s(stack_array_228,0x104,&processed_var_7968_ptr);
    lVar3 = function_8faf90(stack_array_228,0,1);
    if (lVar3 != 0) {
      plocal_var_238 = stack_array_228;
      function_8fb9a0(&processed_var_7504_ptr,0xe7,&processed_var_8504_ptr,&processed_var_8472_ptr);
      goto LAB_1808fa47f;
    }
  }
  function_8fb9a0(&processed_var_7504_ptr,0xbb,&processed_var_8048_ptr,&processed_var_8072_ptr);
  iVar1 = function_8f9f40(param_1,stack_array_228);
  if (((iVar1 < 0) && (iVar1 = function_8f9e60(&processed_var_8144_ptr,&processed_var_8120_ptr,stack_array_228), iVar1 != 0)
      ) && (iVar1 = function_8f9e60(&processed_var_8272_ptr,&processed_var_8248_ptr,stack_array_228), iVar1 != 0)) {
    plocal_var_238 = (int8_t *)CONCAT44(plocal_var_238._4_4_,iVar1);
    NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0xd6,&processed_var_8048_ptr,&processed_var_8400_ptr);
  }
  else {
    wcscat_s(stack_array_228,0x104,&processed_var_7968_ptr);
    lVar3 = function_8faf90(stack_array_228,0,1);
    if (lVar3 == 0) {
      plocal_var_238 = stack_array_228;
      NetworkSystem_ConnectionHandler(&processed_var_7504_ptr,0xd1,&processed_var_8048_ptr,&processed_var_8360_ptr);
    }
    else {
      plocal_var_238 = stack_array_228;
      function_8fb9a0(&processed_var_7504_ptr,0xe7,&processed_var_8504_ptr,&processed_var_8472_ptr);
    }
  }
LAB_1808fa47f:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_258);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8fa4a0(uint64_t param_1,uint64_t param_2)
void function_8fa4a0(uint64_t param_1,uint64_t param_2)
{
  char cVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort *puVar11;
  uint64_t uVar12;
  int8_t stack_array_228 [32];
  uint64_t *plocal_var_208;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  ushort stack_array_1c0 [4];
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  uint64_t local_var_1a8;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  int32_t local_var_150;
  int16_t local_var_14c;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  cVar1 = system_data_9ef8;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  local_var_1b8 = 0x780030;
  local_var_1b4 = 0x300030;
  local_var_1b0 = 0x300030;
  local_var_1ac = 0x300030;
  uVar12 = param_2 & 0xffffffff;
  local_var_1a8 = 0xa00300030;
  OutputDebugStringW(&processed_var_7040_ptr);
  OutputDebugStringW(param_1);
  OutputDebugStringW(&processed_var_7176_ptr);
  sVar3 = 0x37;
  uVar10 = (ushort)(uVar12 >> 0x1c);
  if (uVar10 < 10) {
    sVar3 = 0x30;
  }
  uVar8 = (ushort)(param_2 >> 0x18) & 0xf;
  sVar4 = 0x37;
  if (uVar8 < 10) {
    sVar4 = 0x30;
  }
  uVar9 = (ushort)(uVar12 >> 0x14) & 0xf;
  local_var_1b4 = CONCAT22(sVar4 + uVar8,sVar3 + uVar10);
  sVar3 = 0x37;
  if (uVar9 < 10) {
    sVar3 = 0x30;
  }
  uVar10 = (ushort)(param_2 >> 0x10) & 0xf;
  sVar4 = 0x37;
  if (uVar10 < 10) {
    sVar4 = 0x30;
  }
  uVar8 = (ushort)(param_2 >> 0xc) & 0xf;
  local_var_1b0 = CONCAT22(sVar4 + uVar10,sVar3 + uVar9);
  sVar3 = 0x37;
  if (uVar8 < 10) {
    sVar3 = 0x30;
  }
  uVar10 = (ushort)(param_2 >> 8) & 0xf;
  sVar4 = 0x37;
  if (uVar10 < 10) {
    sVar4 = 0x30;
  }
  local_var_1ac = CONCAT22(sVar4 + uVar10,sVar3 + uVar8);
  sVar3 = 0x37;
  uVar10 = (ushort)(uVar12 >> 4) & 0xf;
  if (uVar10 < 10) {
    sVar3 = 0x30;
  }
  uVar8 = (ushort)uVar12 & 0xf;
  sVar4 = 0x37;
  if (uVar8 < 10) {
    sVar4 = 0x30;
  }
  local_var_1a8._0_4_ = CONCAT22(sVar4 + uVar8,sVar3 + uVar10);
  OutputDebugStringW(&local_var_1b8);
  if (cVar1 == '\0') {
    if (system_data_0080 != '\0') {
      lVar7 = 0;
      stack_array_1c0[0] = 0x100;
      stack_array_1c0[1] = 0x200;
      stack_array_1c0[2] = 0;
      local_var_1d0 = 0x41fcc608;
      local_var_1cc = 0x4def8496;
      local_var_1c8 = 0x9b7d3eb4;
      local_var_1c4 = 0xffa675d6;
// 函数: void function_8fa9b0(byte *param_1,uint param_2,char param_3)
void function_8fa9b0(byte *param_1,uint param_2,char param_3)
{
  uint uVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  int8_t stack_array_58 [32];
  int64_t lStack_38;
  short sStack_30;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  lStack_38 = 0x9010df78648862a;
  sStack_30 = 0x110;
  do {
    uVar4 = 0;
LAB_1808fa9f5:
    if (param_2 <= (uint)uVar4) {
LAB_1808fab6f:
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_58);
    }
    uVar8 = 2;
    pbVar12 = param_1 + uVar4;
    bVar10 = pbVar12[1];
    uVar6 = (uint)bVar10;
    if ((char)bVar10 < '\0') {
      uVar5 = bVar10 & 0x7f;
      uVar6 = 0;
      uVar9 = uVar8;
      if ((bVar10 & 0x7f) != 0) {
        do {
          uVar5 = uVar5 - 1;
          uVar8 = (uint64_t)((int)uVar9 + 1);
          uVar6 = uVar6 << 8 | (uint)pbVar12[uVar9];
          uVar9 = uVar8;
        } while (0 < (int)uVar5);
      }
    }
    pbVar3 = pbVar12 + uVar8;
    uVar5 = (uint)uVar4 + uVar6 + (int)uVar8;
    uVar4 = (uint64_t)uVar5;
    if ((*pbVar12 & 0x20) != 0) {
      lVar2 = function_8fa9b0(pbVar3,uVar6,param_3);
      if (lVar2 != 0) goto LAB_1808fab6f;
      goto LAB_1808fa9f5;
    }
    bVar10 = *pbVar12 & 0x1f;
    if (param_3 != '\0') {
      if (bVar10 == 0x18) {
        lStack_38 = 0;
        AdvancedSystemOptimizer(pbVar3,&processed_var_6976_ptr,&lStack_38);
        goto LAB_1808fab6f;
      }
      goto LAB_1808fa9f5;
    }
    if ((((bVar10 != 6) || (uVar6 != 0xb)) || (*(int64_t *)pbVar3 != lStack_38)) ||
       ((*(short *)(pbVar3 + 8) != sStack_30 || (pbVar3[10] != 4)))) goto LAB_1808fa9f5;
    uVar7 = 2;
    pbVar12 = param_1 + uVar5;
    bVar10 = pbVar12[1];
    uVar6 = (uint)bVar10;
    bVar11 = *pbVar12;
    if ((char)bVar10 < '\0') {
      uVar1 = uVar6 & 0x7f;
      uVar6 = 0;
      if ((bVar10 & 0x7f) != 0) {
        do {
          uVar4 = (uint64_t)uVar7;
          uVar1 = uVar1 - 1;
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 << 8 | (uint)pbVar12[uVar4];
        } while (0 < (int)uVar1);
      }
    }
    pbVar12 = pbVar12 + uVar7;
    uVar4 = (uint64_t)(uVar5 + uVar6 + uVar7);
    if ((bVar11 & 0x20) != 0) {
      bVar10 = pbVar12[1];
      uVar6 = (uint)bVar10;
      uVar8 = 2;
      bVar11 = *pbVar12;
      if ((char)bVar10 < '\0') {
        uVar5 = uVar6 & 0x7f;
        uVar6 = 0;
        uVar9 = uVar8;
        if ((bVar10 & 0x7f) != 0) {
          do {
            uVar5 = uVar5 - 1;
            uVar8 = (uint64_t)((int)uVar9 + 1);
            uVar6 = uVar6 << 8 | (uint)pbVar12[uVar9];
            uVar9 = uVar8;
          } while (0 < (int)uVar5);
        }
      }
      pbVar12 = pbVar12 + uVar8;
    }
    if (bVar11 != 4) goto LAB_1808fa9f5;
    param_3 = '\x01';
    param_1 = pbVar12;
    param_2 = uVar6;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8fab90(uint64_t param_1)
void function_8fab90(uint64_t param_1)
{
  int8_t stack_array_c8 [32];
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int8_t stack_array_88 [96];
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_28 = 0xaac56b;
  local_var_24 = 0x11d0cd44;
  local_var_20 = 0xc000c28c;
  local_var_1c = 0xee95c24f;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_a8 = 0x20;
  local_var_a0 = param_1;
// WARNING: Subroutine does not return
  memset(stack_array_88,0,0x58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address