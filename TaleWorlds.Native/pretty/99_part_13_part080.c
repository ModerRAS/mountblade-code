/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part080.c - 2 个函数
// 函数: void function_8e065f(int64_t param_1)
void function_8e065f(int64_t param_1)
{
  uint64_t uVar1;
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  SystemMemoryAllocator(uVar1);
// WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}
uint64_t function_8e068e(void)
{
  function_8e0090();
  return 0;
}
uint64_t function_8e06a0(int64_t param_1)
{
  int iVar1;
  bool bVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar5) {
    lVar6 = (int64_t)iVar5 * 8;
    do {
      uVar3 = *(uint64_t *)(lVar6 + *(int64_t *)(param_1 + 8));
      if ((iVar5 < 0) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 <= iVar5)) {
        return 0x1c;
      }
      iVar4 = (iVar1 - iVar5) + -1;
      if (0 < iVar4) {
        lVar6 = *(int64_t *)(param_1 + 8) + (int64_t)iVar5 * 8;
// WARNING: Subroutine does not return
        memmove(lVar6,lVar6 + 8,(int64_t)iVar4 << 3);
      }
      *(int *)(param_1 + 0x10) = iVar1 + -1;
      uVar3 = function_73ebd0(uVar3);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar6 = lVar6 + -8;
      bVar2 = 0 < iVar5;
      iVar5 = iVar5 + -1;
    } while (bVar2);
  }
  return 0;
}
uint64_t function_8e0750(int64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint astack_special_x_18 [4];
  if (param_2 != 0) {
    astack_special_x_18[0] = 2;
    function_73e550(param_2,astack_special_x_18,0,0,0);
    if ((astack_special_x_18[0] & 0xfffffffd) == 0) {
      uVar2 = function_73ebd0(param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      uVar4 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
      iVar3 = *(int *)(param_1 + 0x10) + 1;
      iVar1 = (*(uint *)(param_1 + 0x14) ^ uVar4) - uVar4;
      if (iVar1 < iVar3) {
        iVar1 = (int)((float)iVar1 * 1.5);
        if (iVar3 <= iVar1) {
          iVar3 = iVar1;
        }
        if (iVar3 < 8) {
          iVar3 = 8;
        }
        uVar2 = RenderingTextureManager0(param_1 + 8,iVar3);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      *(int64_t *)(*(int64_t *)(param_1 + 8) + (int64_t)*(int *)(param_1 + 0x10) * 8) = param_2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  return 0;
}
uint64_t function_8e0820(int64_t param_1,char param_2)
{
  int iVar1;
  bool bVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  uint astack_special_x_8 [2];
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    lVar5 = (int64_t)iVar4 * 8;
    do {
      uVar3 = *(uint64_t *)(lVar5 + *(int64_t *)(param_1 + 8));
      if (param_2 == '\0') {
        astack_special_x_8[0] = 2;
        function_73e550(uVar3,astack_special_x_8,0,0,0);
        if ((astack_special_x_8[0] & 0xfffffffd) == 0) goto LAB_1808e089a;
      }
      else {
LAB_1808e089a:
        if ((iVar4 < 0) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 <= iVar4)) {
          return 0x1c;
        }
        iVar6 = (iVar1 - iVar4) + -1;
        if (0 < iVar6) {
          lVar5 = *(int64_t *)(param_1 + 8) + (int64_t)iVar4 * 8;
// WARNING: Subroutine does not return
          memmove(lVar5,lVar5 + 8,(int64_t)iVar6 << 3);
        }
        *(int *)(param_1 + 0x10) = iVar1 + -1;
        uVar3 = function_73ebd0(uVar3);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      lVar5 = lVar5 + -8;
      bVar2 = 0 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar2);
  }
  return 0;
}
uint64_t function_8e0920(uint64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
                       char param_5,uint64_t param_6)
{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int8_t stack_array_e8 [224];
  plVar4 = (int64_t *)(**(code **)(*param_2 + 8))();
  iVar1 = (int)param_2[5];
  if (iVar1 == 0) {
    uVar6 = 0x200;
  }
  else if (iVar1 == 1) {
    uVar6 = 0x100;
  }
  else if (iVar1 == 2) {
    uVar6 = 0x80;
  }
  else {
    uVar6 = 0;
  }
  uVar3 = uVar6 | 0x10000;
  if (param_5 == '\0') {
    uVar3 = uVar6;
  }
  if (plVar4 == (int64_t *)0x0) {
    local_var_f8 = 0;
    local_var_f0 = 0;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_var_f8);
    uVar5 = (uint64_t)uVar6;
    if (uVar6 == 0) {
// WARNING: Subroutine does not return
      memset(stack_array_e8,0,0xe0);
    }
    SystemCore_MemoryManager(&local_var_f8);
  }
  else {
    lVar2 = *plVar4;
    uVar6 = uVar3 | 0x2000002;
    if (((lVar2 == 0) || ((int)plVar4[1] < 0)) || (*(int *)((int64_t)plVar4 + 0xc) < 0)) {
      uVar5 = 0x1c;
    }
    else {
      if (((uVar3 & 0x200) != 0) && ((*(byte *)(lVar2 + 0x2f0) & 2) != 0)) {
        uVar6 = uVar3 & 0xfffffdff | 0x2000102;
      }
      uVar3 = uVar6 | 0x8000000;
      if ((*(uint *)(lVar2 + 0x21c) & 2) != 0) {
        uVar3 = uVar6;
      }
      uVar5 = function_8dc5d0(lVar2 + 0x268,lVar2 + 0x220,*param_1,param_3,uVar3,(int)plVar4[1],
                            *(int *)((int64_t)plVar4 + 0xc),(int)((param_4 & 0xffffffff) / 0x30),
                            param_6);
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}
uint64_t * function_8e0b30(uint64_t *param_1)
{
  uint64_t *puVar1;
  puVar1 = param_1 + 4;
  *param_1 = 0;
  param_1[1] = 0;
  *(int8_t *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  puVar1 = param_1 + 9;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *puVar1 = puVar1;
  param_1[10] = puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  Function_9ac7c927(param_1 + 0xe);
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int16_t *)((int64_t)param_1 + 0x1c4) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}
// 函数: void function_8e0c60(int64_t param_1)
void function_8e0c60(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  *(void **)(param_1 + 0x70) = &processed_var_8408_ptr;
  Function_55941a51(param_1 + 0x48);
  SystemController(param_1 + 0x38);
  plVar1 = (int64_t *)(param_1 + 0x20);
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 != plVar1) {
    do {
      if (plVar3 == plVar1) break;
      plVar2 = (int64_t *)*plVar3;
      *(int64_t **)plVar3[1] = plVar2;
      *(int64_t *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (int64_t)plVar3;
      *plVar3 = (int64_t)plVar3;
      plVar3 = plVar2;
    } while (plVar2 != plVar1);
    plVar3 = (int64_t *)*plVar1;
  }
  **(int64_t **)(param_1 + 0x28) = (int64_t)plVar3;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
  *(int64_t **)(param_1 + 0x28) = plVar1;
  *plVar1 = (int64_t)plVar1;
  **(int64_t **)(param_1 + 0x28) = (int64_t)plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
  *(int64_t **)(param_1 + 0x28) = plVar1;
  *plVar1 = (int64_t)plVar1;
  return;
}
int function_8e0ca0(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  int iVar4;
  int aiStackX_8 [2];
  cVar2 = *(char *)(param_1 + 0x10);
  uVar3 = *(uint64_t *)(param_1 + 0x18);
  if (cVar2 != '\0') {
    SystemMemoryAllocator(uVar3);
  }
  if (*(int *)(param_2 + 0x48) == 0) {
    iVar4 = function_8e1930(param_1,param_2);
    if (iVar4 != 0) goto LAB_1808e0d4f;
  }
  else if (*(int *)(param_2 + 0x48) == 7) {
    plVar1 = (int64_t *)(param_2 + 0x30);
    **(int64_t **)(param_2 + 0x38) = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_2 + 0x38);
    *(int64_t **)(param_2 + 0x38) = plVar1;
    *plVar1 = (int64_t)plVar1;
    LOCK();
    *(int32_t *)(param_2 + 0x48) = 5;
    UNLOCK();
    if (((*(int64_t *)(param_2 + 0x40) == 0) ||
        (iVar4 = function_73e110(*(int64_t *)(param_2 + 0x40),aiStackX_8,8), iVar4 != 0)) ||
       (aiStackX_8[0] == -1)) {
      aiStackX_8[0] = 0;
    }
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + aiStackX_8[0];
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) - aiStackX_8[0];
  }
  iVar4 = 0;
LAB_1808e0d4f:
  if (cVar2 == '\0') {
    return iVar4;
  }
// WARNING: Subroutine does not return
  SystemMemoryManager(uVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_8e0d80(uint64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int aiStackX_8 [2];
  int64_t lStackX_10;
  uint64_t *pstack_special_x_18;
  uint64_t *pstack_special_x_20;
  iVar6 = 0;
  lVar10 = *(int64_t *)(param_1[6] + 0x10);
  pstack_special_x_18 = (uint64_t *)0x0;
  if ((lVar10 != 0) && ((*(int *)(lVar10 + 0x220) == 0 || (*(int *)(lVar10 + 0x220) == 3)))) {
    iVar6 = function_8dcad0(lVar10,*param_1,&pstack_special_x_18);
  }
  puVar9 = pstack_special_x_18;
  pstack_special_x_20 = pstack_special_x_18;
  if ((pstack_special_x_18 == (uint64_t *)0x0) || (iVar7 = Function_e24ef764(pstack_special_x_18,0), iVar7 == 0)
     ) {
    iVar2 = *(int *)(param_1 + 8);
    if (0 < (int64_t)iVar2) {
      lVar10 = 0;
      do {
        cVar1 = *(char *)(param_1 + 2);
        uVar3 = param_1[3];
        if (cVar1 != '\0') {
          SystemMemoryAllocator();
        }
        lVar4 = *(int64_t *)(param_1[7] + lVar10 * 8);
        *(uint64_t *)(param_1[7] + lVar10 * 8) = 0;
        if (lVar4 != 0) {
          LOCK();
          *(int32_t *)(lVar4 + 0x48) = 3;
          UNLOCK();
          *(int32_t *)(lVar4 + 0x4c) = 0xffffffff;
        }
        if (cVar1 != '\0') {
// WARNING: Subroutine does not return
          SystemMemoryManager(uVar3);
        }
        if (lVar4 != 0) {
          lStackX_10 = 0;
          iVar7 = iVar6;
          if (iVar6 == 0) {
            iVar7 = function_8e0920(param_1[1],*(uint64_t *)(lVar4 + 8),pstack_special_x_18,0,0,&lStackX_10)
            ;
          }
          cVar1 = *(char *)(param_1 + 2);
          bVar5 = false;
          uVar3 = param_1[3];
          if (cVar1 != '\0') {
            SystemMemoryAllocator();
          }
          if (*(int *)(lVar4 + 0x48) == 4) {
            LOCK();
            *(int32_t *)(lVar4 + 0x48) = 0;
            UNLOCK();
            if (lStackX_10 != 0) {
              function_73ebd0();
            }
            bVar5 = true;
          }
          else {
            if (iVar7 == 0) {
              if (((lStackX_10 == 0) || (iVar7 = function_73e110(lStackX_10,aiStackX_8,8), iVar7 != 0)
                  ) || (iVar7 = aiStackX_8[0], aiStackX_8[0] == -1)) {
                iVar7 = 0;
              }
              *(int *)((int64_t)param_1 + 0x1cc) = *(int *)((int64_t)param_1 + 0x1cc) + iVar7;
              LOCK();
              *(int64_t *)(lVar4 + 0x40) = lStackX_10;
              UNLOCK();
              uVar8 = 5;
            }
            else {
              uVar8 = 6;
            }
            LOCK();
            *(int32_t *)(lVar4 + 0x48) = uVar8;
            UNLOCK();
          }
          if (cVar1 != '\0') {
// WARNING: Subroutine does not return
            SystemMemoryManager(uVar3);
          }
          if ((bVar5) && (iVar7 = SystemConfigManager(), puVar9 = pstack_special_x_20, iVar7 != 0))
          goto LAB_1808e0f9d;
        }
        lVar10 = lVar10 + 1;
        puVar9 = pstack_special_x_20;
      } while (lVar10 < iVar2);
    }
    iVar7 = 0;
  }
LAB_1808e0f9d:
  if ((puVar9 != (uint64_t *)0x0) && (iVar6 = UISystem_Renderer(puVar9), iVar6 == 0)) {
    (**(code **)*puVar9)(puVar9,0);
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar9,&processed_var_8336_ptr,0x16d,1);
  }
  return iVar7;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_8e0d8f(uint64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  int64_t in_RAX;
  uint64_t *unaff_RBX;
  int64_t lVar9;
  int local_buffer_90;
  int64_t local_buffer_98;
  iVar6 = 0;
  lVar9 = *(int64_t *)(in_RAX + 0x10);
  if ((lVar9 != 0) && ((*(int *)(lVar9 + 0x220) == 0 || (*(int *)(lVar9 + 0x220) == 3)))) {
    iVar6 = function_8dcad0(lVar9,*param_1,&local_buffer_000000a0);
  }
  if ((unaff_RBX == (uint64_t *)0x0) || (iVar7 = Function_e24ef764(unaff_RBX,0), iVar7 == 0)) {
    iVar2 = *(int *)(param_1 + 8);
    if (0 < (int64_t)iVar2) {
      lVar9 = 0;
      do {
        cVar1 = *(char *)(param_1 + 2);
        uVar3 = param_1[3];
        if (cVar1 != '\0') {
          SystemMemoryAllocator();
        }
        lVar4 = *(int64_t *)(param_1[7] + lVar9 * 8);
        *(uint64_t *)(param_1[7] + lVar9 * 8) = 0;
        if (lVar4 != 0) {
          LOCK();
          *(int32_t *)(lVar4 + 0x48) = 3;
          UNLOCK();
          *(int32_t *)(lVar4 + 0x4c) = 0xffffffff;
        }
        if (cVar1 != '\0') {
// WARNING: Subroutine does not return
          SystemMemoryManager(uVar3);
        }
        if (lVar4 != 0) {
          local_buffer_98 = 0;
          iVar7 = iVar6;
          if (iVar6 == 0) {
            iVar7 = function_8e0920(param_1[1],*(uint64_t *)(lVar4 + 8),unaff_RBX,0,0);
          }
          cVar1 = *(char *)(param_1 + 2);
          bVar5 = false;
          uVar3 = param_1[3];
          if (cVar1 != '\0') {
            SystemMemoryAllocator();
          }
          if (*(int *)(lVar4 + 0x48) == 4) {
            LOCK();
            *(int32_t *)(lVar4 + 0x48) = 0;
            UNLOCK();
            if (local_buffer_98 != 0) {
              function_73ebd0();
            }
            bVar5 = true;
          }
          else {
            if (iVar7 == 0) {
              if (((local_buffer_98 == 0) ||
                  (iVar7 = function_73e110(local_buffer_98,&local_buffer_00000090,8), iVar7 != 0)) ||
                 (iVar7 = local_buffer_90, local_buffer_90 == -1)) {
                iVar7 = 0;
              }
              *(int *)((int64_t)param_1 + 0x1cc) = *(int *)((int64_t)param_1 + 0x1cc) + iVar7;
              LOCK();
              *(int64_t *)(lVar4 + 0x40) = local_buffer_98;
              UNLOCK();
              uVar8 = 5;
            }
            else {
              uVar8 = 6;
            }
            LOCK();
            *(int32_t *)(lVar4 + 0x48) = uVar8;
            UNLOCK();
          }
          if (cVar1 != '\0') {
// WARNING: Subroutine does not return
            SystemMemoryManager(uVar3);
          }
          if ((bVar5) && (iVar7 = SystemConfigManager(), iVar7 != 0)) goto LAB_1808e0f9d;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar2);
    }
    iVar7 = 0;
  }
LAB_1808e0f9d:
  if ((unaff_RBX != (uint64_t *)0x0) && (iVar6 = UISystem_Renderer(unaff_RBX), iVar6 == 0)) {
    (**(code **)*unaff_RBX)(unaff_RBX,0);
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RBX,&processed_var_8336_ptr,0x16d,1);
  }
  return iVar7;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_8e0fc0(void)
{
  int iVar1;
  uint64_t *unaff_RBX;
  int32_t unaff_EDI;
  iVar1 = UISystem_Renderer();
  if (iVar1 == 0) {
    (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_EDI;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_8e100f(void)
{
  int iVar1;
  int32_t unaff_EDI;
  uint64_t *local_buffer_a8;
  if (local_buffer_a8 != (uint64_t *)0x0) {
    iVar1 = UISystem_Renderer(local_buffer_a8);
    if (iVar1 == 0) {
      (**(code **)*local_buffer_a8)(local_buffer_a8,0);
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),local_buffer_a8,&processed_var_8336_ptr,0x16d,1
                   );
    }
  }
  return unaff_EDI;
}