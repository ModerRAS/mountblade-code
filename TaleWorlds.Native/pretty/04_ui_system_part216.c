#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part216.c - 10 个函数
// 函数: void SystemCore_908c0(int64_t param_1)
void SystemCore_908c0(int64_t param_1)
{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  plVar1 = *(int64_t **)(param_1 + 8);
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar3 = (int64_t *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  SystemCore_90ee0(plVar1);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&rendering_buffer_2784_ptr,0x27f,1);
}
uint64_t SystemCore_90930(int64_t param_1)
{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  plVar1 = *(int64_t **)(param_1 + 8);
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar3 = (int64_t *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  if (plVar1[7] != 0) {
    iVar4 = 0;
    if (0 < (int)plVar1[3]) {
      do {
        iVar5 = 0;
        if (0 < *(int *)((int64_t)plVar1 + 0x1c)) {
          do {
            (**(code **)(**(int64_t **)
                           (plVar1[7] +
                           (int64_t)(*(int *)((int64_t)plVar1 + 0x1c) * iVar4 + iVar5) * 8) + 0x28
                        ))();
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)((int64_t)plVar1 + 0x1c));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)plVar1[3]);
    }
    *(int32_t *)(plVar1 + 6) = 0;
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return 0;
}
uint64_t SystemCore_90936(int64_t param_1)
{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  plVar1 = *(int64_t **)(param_1 + 8);
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar3 = (int64_t *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  if (plVar1[7] != 0) {
    iVar4 = 0;
    if (0 < (int)plVar1[3]) {
      do {
        iVar5 = 0;
        if (0 < *(int *)((int64_t)plVar1 + 0x1c)) {
          do {
            (**(code **)(**(int64_t **)
                           (plVar1[7] +
                           (int64_t)(*(int *)((int64_t)plVar1 + 0x1c) * iVar4 + iVar5) * 8) + 0x28
                        ))();
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)((int64_t)plVar1 + 0x1c));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)plVar1[3]);
    }
    *(int32_t *)(plVar1 + 6) = 0;
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return 0;
}
uint64_t SystemCore_90957(void)
{
  int64_t *unaff_RBX;
  int iVar1;
  int iVar2;
  int64_t unaff_RDI;
  iVar1 = 0;
  if (0 < *(int *)(unaff_RDI + 0x18)) {
    do {
      iVar2 = 0;
      if (0 < *(int *)(unaff_RDI + 0x1c)) {
        do {
          (**(code **)(**(int64_t **)
                         (*(int64_t *)(unaff_RDI + 0x38) +
                         (int64_t)(*(int *)(unaff_RDI + 0x1c) * iVar1 + iVar2) * 8) + 0x28))();
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_RDI + 0x1c));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_RDI + 0x18));
  }
  *(int32_t *)(unaff_RDI + 0x30) = 0;
  if (unaff_RBX != (int64_t *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}
uint64_t SystemCore_90963(void)
{
  int64_t *unaff_RBX;
  int unaff_EBP;
  int iVar1;
  int64_t unaff_RDI;
  do {
    iVar1 = 0;
    if (0 < *(int *)(unaff_RDI + 0x1c)) {
      do {
        (**(code **)(**(int64_t **)
                       (*(int64_t *)(unaff_RDI + 0x38) +
                       (int64_t)(*(int *)(unaff_RDI + 0x1c) * unaff_EBP + iVar1) * 8) + 0x28))();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_RDI + 0x1c));
    }
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < *(int *)(unaff_RDI + 0x18));
  *(int32_t *)(unaff_RDI + 0x30) = 0;
  if (unaff_RBX != (int64_t *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}
uint64_t SystemCore_9099c(void)
{
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  *(int32_t *)(unaff_RDI + 0x30) = 0;
  if (unaff_RBX != (int64_t *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}
uint64_t SystemCore_909a8(void)
{
  int64_t *unaff_RBX;
  if (unaff_RBX != (int64_t *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}
uint64_t SystemCore_909b2(void)
{
  int64_t *unaff_RBX;
  (**(code **)(*unaff_RBX + 0x20))();
  return 0;
}
int SystemCore_909d0(int64_t param_1,int param_2,int64_t param_3,int64_t param_4,int param_5,
                 int param_6)
{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  float fVar8;
  plVar2 = *(int64_t **)(param_1 + 8);
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(int32_t **)(param_4 + 8) = (int)plVar2[3];
      switch((int)plVar2[3]) {
      case 1:
        uVar4 = 2;
        break;
      case 2:
        uVar4 = 3;
        break;
      default:
        uVar4 = 1;
        break;
      case 4:
        uVar4 = 4;
        break;
      case 5:
        uVar4 = 5;
        break;
      case 6:
        uVar4 = 6;
        break;
      case 8:
        uVar4 = 7;
        break;
      case 0xc:
        uVar4 = 8;
      }
      *(int32_t *)(param_4 + 0x20) = uVar4;
    }
    if (param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int **)(param_3 + 8);
    }
    if (param_5 == 0) {
      fVar8 = *(float *)(plVar2 + 4);
      *(int32_t *)(plVar2 + 6) = *(int32_t *)((int64_t)plVar2 + 0x34);
    }
    else {
      iVar1 = (int)plVar2[6];
      iVar5 = iVar1;
      if (param_2 < iVar1) {
        iVar5 = param_2;
      }
      *(int *)(plVar2 + 6) = iVar1 - iVar5;
      if (iVar1 - iVar5 == 0) {
        return 0xb;
      }
      fVar8 = *(float *)(plVar2 + 4);
      if (0.0 < fVar8) {
        return 0;
      }
      if (*(float *)(plVar2 + 5) <= 0.0) {
        return 0xb;
      }
    }
    if (((fVar8 <= 0.0) && (*(float *)(plVar2 + 5) <= 0.0)) && ((int)plVar2[3] == iVar6)) {
      if ((*(float *)((int64_t)plVar2 + 0x24) <= 0.0) &&
         (*(float *)((int64_t)plVar2 + 0x2c) <= 0.0)) {
        return 0xb;
      }
      if ((*(float *)((int64_t)plVar2 + 0x24) == 1.0) &&
         (*(float *)((int64_t)plVar2 + 0x2c) == 1.0)) {
        return 6;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar7 = (int64_t *)0x0;
    if (cVar3 != '\0') {
      plVar7 = plVar2;
    }
    iVar6 = SystemCore_91770(plVar2,**(uint64_t **)(param_3 + 0x18),**(uint64_t **)(param_4 + 0x18)
                          ,**(int32_t **)(param_3 + 8));
    if (iVar6 != 0) {
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
        return iVar6;
      }
      return iVar6;
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * SystemCore_90ba0(int64_t param_1,int param_2,short *param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint astack_special_x_10 [2];
  plVar1 = *(int64_t **)(param_1 + 8);
  if (param_2 == 0) {
    plVar6 = (int64_t *)0x0;
    uVar2 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x160 + (int64_t)*(int *)(param_1 + 0x30) * 8);
    SystemCore_43e10(uVar2);
    cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar5 = plVar6;
    if (cVar3 != '\0') {
      plVar5 = plVar1;
    }
    SystemCore_90ee0(plVar1);
    if (param_3 != (short *)0x0) {
      Function_7d2d2542(uVar2,astack_special_x_10,0);
      if ((astack_special_x_10[0] != 0) && ((astack_special_x_10[0] & astack_special_x_10[0] - 1) == 0)) {
        uVar4 = SystemCore_91210(plVar1,param_3 + 1,2,(int64_t)*param_3,
                              (int)(((param_4 & 0xffffffff) - 2) /
                                   (uint64_t)((int64_t)*param_3 * 2)));
        plVar6 = (int64_t *)(uint64_t)uVar4;
      }
    }
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    SystemCore_43e50(uVar2);
    return plVar6;
  }
  return (int64_t *)0x1f;
}
int64_t * SystemCore_90bc7(int64_t param_1)
{
  uint64_t uVar1;
  char cVar2;
  uint uVar3;
  int64_t in_RAX;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint local_buffer_58;
  plVar5 = (int64_t *)0x0;
  uVar1 = *(uint64_t *)(in_RAX + 0x160 + param_1 * 8);
  SystemCore_43e10(uVar1);
  cVar2 = (**(code **)(*unaff_R14 + 0x18))();
  plVar4 = plVar5;
  if (cVar2 != '\0') {
    plVar4 = unaff_R14;
  }
  SystemCore_90ee0();
  if (unaff_R15 != 0) {
    Function_7d2d2542(uVar1,&local_buffer_00000058,0);
    if ((local_buffer_58 != 0) && ((local_buffer_58 & local_buffer_58 - 1) == 0)) {
      uVar3 = SystemCore_91210();
      plVar5 = (int64_t *)(uint64_t)uVar3;
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  SystemCore_43e50(uVar1);
  return plVar5;
}
uint64_t SystemCore_90c7f(void)
{
  return 0x1f;
}
uint64_t SystemCore_90cd0(int64_t param_1,int param_2,float param_3)
{
  int64_t lVar1;
  int32_t uVar2;
  lVar1 = *(int64_t *)(param_1 + 8);
  if (param_2 == 1) {
    if (param_3 <= -80.0) {
      *(int32_t *)(lVar1 + 0x28) = 0;
      return 0;
    }
    uVar2 = powf(0x41200000,param_3 * 0.05);
    *(int32_t *)(lVar1 + 0x28) = uVar2;
    return 0;
  }
  if (param_2 != 2) {
    return 0x1f;
  }
  if (param_3 <= -80.0) {
    *(int32_t *)(lVar1 + 0x2c) = 0;
    return 0;
  }
  uVar2 = powf(0x41200000,param_3 * 0.05);
  *(int32_t *)(lVar1 + 0x2c) = uVar2;
  return 0;
}
uint64_t SystemCore_90d70(int64_t param_1,int param_2,float *param_3,int64_t param_4)
{
  float fVar1;
  if (param_2 == 1) {
    fVar1 = *(float *)(*(int64_t *)(param_1 + 8) + 0x28);
    if (fVar1 <= 0.0) {
      fVar1 = -80.0;
      goto LAB_180790dde;
    }
  }
  else {
    if (param_2 != 2) {
      return 0x1f;
    }
    fVar1 = *(float *)(*(int64_t *)(param_1 + 8) + 0x2c);
    if (fVar1 <= 0.0) {
      fVar1 = -80.0;
      goto LAB_180790dde;
    }
  }
  fVar1 = (float)log10f(fVar1);
  fVar1 = fVar1 * 20.0;
LAB_180790dde:
  *param_3 = fVar1;
  if (param_4 != 0) {
// WARNING: Subroutine does not return
    SystemValidationProcessor(param_4,0x20,&processed_var_4372_ptr,(double)fVar1);
  }
  return 0;
}
uint64_t * SystemCore_90e40(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2392_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}
uint64_t * SystemCore_90e70(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2392_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}
uint64_t * SystemCore_90ea0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2392_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_90ee0(int64_t *param_1)
void SystemCore_90ee0(int64_t *param_1)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  lVar3 = param_1[7];
  if (lVar3 == 0) {
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    if (iVar4 == 0) {
      *(int32_t *)((int64_t)param_1 + 0x1c) = 0;
    }
    return;
  }
  iVar4 = 0;
  if (0 < (int)param_1[3]) {
    do {
      iVar1 = *(int *)((int64_t)param_1 + 0x1c);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          plVar2 = *(int64_t **)(param_1[7] + (int64_t)(iVar1 * iVar4 + iVar5) * 8);
          if (plVar2 != (int64_t *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
            plVar2 = *(int64_t **)
                      (param_1[7] +
                      (int64_t)(iVar4 * *(int *)((int64_t)param_1 + 0x1c) + iVar5) * 8);
            (**(code **)(*plVar2 + 0x38))(plVar2,0);
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2784_ptr,0x165,1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[3]);
    lVar3 = param_1[7];
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&rendering_buffer_2784_ptr,0x16a,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_90ef6(int64_t param_1,uint64_t param_2)
void SystemCore_90ef6(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t unaff_RSI;
  int iVar4;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(unaff_RSI + 0x1c);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          plVar2 = *(int64_t **)
                    (*(int64_t *)(unaff_RSI + 0x38) + (int64_t)(iVar1 * iVar3 + iVar4) * 8);
          if (plVar2 != (int64_t *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
            plVar2 = *(int64_t **)
                      (*(int64_t *)(unaff_RSI + 0x38) +
                      (int64_t)(iVar3 * *(int *)(unaff_RSI + 0x1c) + iVar4) * 8);
            (**(code **)(*plVar2 + 0x38))(plVar2,0);
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2784_ptr,0x165,1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_RSI + 0x18));
    param_2 = *(uint64_t *)(unaff_RSI + 0x38);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&rendering_buffer_2784_ptr,0x16a,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_90f06(void)
void SystemCore_90f06(void)
{
  int iVar1;
  int64_t *plVar2;
  int unaff_EBP;
  int64_t unaff_RSI;
  int iVar3;
  do {
    iVar1 = *(int *)(unaff_RSI + 0x1c);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        plVar2 = *(int64_t **)
                  (*(int64_t *)(unaff_RSI + 0x38) + (int64_t)(iVar1 * unaff_EBP + iVar3) * 8);
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          plVar2 = *(int64_t **)
                    (*(int64_t *)(unaff_RSI + 0x38) +
                    (int64_t)(unaff_EBP * *(int *)(unaff_RSI + 0x1c) + iVar3) * 8);
          (**(code **)(*plVar2 + 0x38))(plVar2,0);
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2784_ptr,0x165,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < *(int *)(unaff_RSI + 0x18));
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RSI + 0x38),
                &rendering_buffer_2784_ptr,0x16a,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_90fa7(uint64_t param_1,uint64_t param_2)
void SystemCore_90fa7(uint64_t param_1,uint64_t param_2)
{
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&rendering_buffer_2784_ptr,0x16a,1);
}
// 函数: void SystemCore_90fd9(void)
void SystemCore_90fd9(void)
{
  int iVar1;
  int64_t *unaff_RSI;
  iVar1 = (**(code **)(*unaff_RSI + 8))();
  if (iVar1 == 0) {
    *(int32_t *)((int64_t)unaff_RSI + 0x1c) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_90ff0(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x40) != 0) {
    RenderingSystem_MaterialHandler(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x40),
                  &rendering_buffer_2784_ptr,0x9b);
    *(uint64_t *)(param_1 + 0x40) = 0;
  }
  return 0;
}
// 函数: void SystemCore_91040(void)
void SystemCore_91040(void)
{
// WARNING: Subroutine does not return
  memset(0x180c108f4,0,0x5c);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_91210(uint64_t *param_1,int64_t param_2,int param_3,int param_4,int param_5)
void SystemCore_91210(uint64_t *param_1,int64_t param_2,int param_3,int param_4,int param_5)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int iVar7;
  uint64_t *puVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint64_t *puVar13;
  int *piVar14;
  int8_t stack_array_108 [32];
  int iStack_e8;
  int32_t local_var_e0;
  int iStack_d8;
  int iStack_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint local_var_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  uint64_t local_var_90;
  int64_t lStack_88;
  int aiStack_80 [4];
  uint64_t local_var_70;
  int iStack_68;
  uint64_t local_var_64;
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  iStack_a0 = param_4;
  iStack_9c = param_3;
  lStack_88 = param_2;
  if ((((param_1[1] == 0) || (param_4 < 1)) || (param_5 < 1)) || (param_2 == 0)) goto SystemCore_915fb;
  *(int *)(param_1 + 3) = param_4;
  *(int *)((int64_t)param_1 + 0x34) = param_5;
  if (param_3 == 1) {
    uVar10 = 8;
LAB_1807912bc:
    local_var_90 = uVar10 >> 3;
  }
  else {
    if (param_3 == 2) {
      uVar10 = 0x10;
      goto LAB_1807912bc;
    }
    if (param_3 == 3) {
      uVar10 = 0x18;
      goto LAB_1807912bc;
    }
    if ((param_3 == 4) || (param_3 == 5)) {
      uVar10 = 0x20;
      goto LAB_1807912bc;
    }
    local_var_90 = CONCAT44(local_var_90._4_4_,1);
  }
  iVar2 = (**(code **)*param_1)(param_1);
  if (iVar2 == 0x29) {
    puVar11 = (uint64_t *)0x0;
    aiStack_80[0] = *(int *)(param_1 + 2);
    iVar2 = *(int *)(param_1[1] + 0x11664) + -1;
    iStack_a4 = aiStack_80[0] << 4;
    aiStack_80[3] = aiStack_80[0] * 4;
    iStack_68 = iStack_a4;
    puVar8 = puVar11;
    iVar7 = param_5;
    if (iVar2 == 0) {
      aiStack_80[1] = 3;
      aiStack_80[2] = 0;
      local_var_70 = 3;
      local_var_64 = 0;
    }
    else {
      aiStack_80[1] = 7;
      aiStack_80[2] = 0;
      local_var_70 = 0x100000006;
      local_var_64 = 0x100000000;
    }
    do {
      iVar4 = (int)puVar8;
      iVar9 = 0;
      if (aiStack_80[(int64_t)iVar4 * 3 + 1] != 0) {
        iVar9 = iVar7 - aiStack_80[(int64_t)iVar4 * 3] * aiStack_80[(int64_t)iVar4 * 3 + 1];
      }
      uVar12 = iVar4 + 1;
      *(uint *)((int64_t)param_1 + 0x1c) = uVar12;
    } while (((int)uVar12 < 4) &&
            (puVar8 = (uint64_t *)(uint64_t)uVar12, iVar7 = iVar9, 0 < iVar9));
    iStack_e8 = 0;
    iStack_98 = iVar2;
    lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 3) * uVar12 * 8
                          ,&rendering_buffer_2784_ptr,0x11f);
    param_1[7] = lVar5;
    if ((lVar5 != 0) && (puVar8 = puVar11, 0 < *(int *)(param_1 + 3))) {
      do {
        local_var_a8 = 0;
        iVar7 = (int)puVar8;
        if (0 < *(int *)((int64_t)param_1 + 0x1c)) {
          piVar14 = aiStack_80;
          puVar8 = puVar11;
          puVar13 = puVar11;
          do {
            iVar9 = (int)puVar8;
            if (iVar9 < iVar2) {
              iVar2 = iVar9;
            }
            puVar8 = puVar11;
            if ((iVar2 == 0) || (piVar14[2] == 0)) {
              iStack_e8 = 0;
              puVar6 = (uint64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x88,&rendering_buffer_2784_ptr,
                                     0x12d);
              if (puVar6 != (uint64_t *)0x0) {
                *puVar6 = &rendering_buffer_2456_ptr;
                puVar8 = puVar6;
              }
            }
            else {
              iStack_e8 = 0;
              puVar6 = (uint64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb0,&rendering_buffer_2784_ptr,
                                     0x132);
              if (puVar6 != (uint64_t *)0x0) {
                puVar8 = puVar6 + 0x12;
                *puVar6 = &rendering_buffer_2520_ptr;
                *(int32_t *)(puVar6 + 0x11) = 0;
                puVar6[0x13] = puVar8;
                *puVar8 = puVar8;
                puVar6[0x14] = 0;
                puVar8 = puVar6;
              }
            }
            *(uint64_t **)
             (param_1[7] + (int64_t)(*(int *)((int64_t)param_1 + 0x1c) * iVar7 + iVar9) * 8) =
                 puVar8;
            puVar8 = *(uint64_t **)
                      (param_1[7] +
                      (int64_t)(*(int *)((int64_t)param_1 + 0x1c) * iVar7 + iVar9) * 8);
            if (puVar8 == (uint64_t *)0x0) goto SystemCore_915fb;
            iStack_d8 = piVar14[2];
            local_var_b0 = 0;
            local_var_b8 = 0;
            local_var_c0 = 0;
            local_var_c8 = 0;
            local_var_e0 = 0;
            iStack_d0 = iVar2;
            if (iVar9 < *(int *)((int64_t)param_1 + 0x1c) + -1) {
              iVar2 = *piVar14;
              iVar4 = piVar14[1];
              iStack_e8 = iVar4;
              iVar3 = (**(code **)*puVar8)(puVar8,param_1[1],iVar2);
              if (iVar3 != 0) goto SystemCore_915fb;
              iStack_e8 = iVar4 * iVar2;
              plVar1 = *(int64_t **)
                        (param_1[7] +
                        (int64_t)(*(int *)((int64_t)param_1 + 0x1c) * iVar7 + iVar9) * 8);
              iVar3 = (**(code **)(*plVar1 + 8))
                                (plVar1,(int)((*(int *)(param_1 + 3) * local_var_a8 + iVar7) *
                                             (int)local_var_90) + lStack_88,iStack_9c,iStack_a0);
              if (iVar3 != 0) goto SystemCore_915fb;
            }
            else {
              iVar3 = param_5 - (int)puVar13;
              iVar2 = *piVar14;
              iStack_e8 = (iVar3 + -1) / iVar2 + 1;
              iVar4 = (**(code **)*puVar8)(puVar8,param_1[1],iVar2,iStack_a4);
              if (iVar4 != 0) goto SystemCore_915fb;
              plVar1 = *(int64_t **)
                        (param_1[7] +
                        (int64_t)(*(int *)((int64_t)param_1 + 0x1c) * iVar7 + iVar9) * 8);
              iStack_e8 = iVar3;
              iVar4 = (**(code **)(*plVar1 + 8))
                                (plVar1,(int)((*(int *)(param_1 + 3) * local_var_a8 + iVar7) *
                                             (int)local_var_90) + lStack_88,iStack_9c,iStack_a0);
              if (iVar4 != 0) goto SystemCore_915fb;
              iVar4 = piVar14[1];
            }
            puVar8 = (uint64_t *)(uint64_t)(iVar9 + 1U);
            piVar14 = piVar14 + 3;
            local_var_a8 = local_var_a8 + iVar4 * iVar2;
            puVar13 = (uint64_t *)(uint64_t)local_var_a8;
            iVar2 = iStack_98;
          } while ((int)(iVar9 + 1U) < *(int *)((int64_t)param_1 + 0x1c));
        }
        puVar8 = (uint64_t *)(uint64_t)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 3));
    }
  }
SystemCore_915fb:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_91277(int param_1)
void SystemCore_91277(int param_1)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *unaff_RBX;
  int iVar8;
  int unaff_ESI;
  int iVar9;
  uint64_t *puVar10;
  int iVar11;
  uint uVar12;
  uint64_t *puVar13;
  int iVar14;
  int *piVar15;
  uint local_buffer_60;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  int iStack0000000000000078;
  int64_t local_buffer_80;
  int iStack0000000000000088;
  uint64_t local_buffer_8c;
  int32_t local_buffer_94;
  uint64_t local_buffer_98;
  int32_t local_buffer_a0;
  uint64_t local_buffer_a4;
  uint64_t local_buffer_b0;
  int local_var_130;
  if (param_1 == 1) {
    iStack0000000000000078 = 1;
  }
  else if (param_1 == 2) {
    iStack0000000000000078 = 2;
  }
  else if (param_1 == 3) {
    iStack0000000000000078 = 3;
  }
  else if ((param_1 == 4) || (param_1 == 5)) {
    iStack0000000000000078 = 4;
  }
  else {
    iStack0000000000000078 = 1;
  }
  iVar2 = (**(code **)*unaff_RBX)();
  if (iVar2 == 0x29) {
    puVar10 = (uint64_t *)0x0;
    iStack0000000000000088 = *(int *)(unaff_RBX + 2);
    iVar8 = *(int *)(unaff_RBX[1] + 0x11664) + -1;
    iVar2 = iStack0000000000000088 << 4;
    local_buffer_94 = iStack0000000000000088 * 4;
    local_buffer_a0 = iVar2;
    puVar7 = puVar10;
    if (iVar8 == 0) {
      local_buffer_8c = 3;
      local_buffer_98 = 3;
      local_buffer_a4 = 0;
    }
    else {
      local_buffer_8c = 7;
      local_buffer_98 = 0x100000006;
      local_buffer_a4 = 0x100000000;
    }
    do {
      iVar11 = (int)puVar7;
      iVar14 = 0;
      if (*(int *)((int64_t)&local_buffer_00000088 + (int64_t)iVar11 * 0xc + 4) != 0) {
        iVar14 = unaff_ESI -
                 *(int *)((int64_t)&local_buffer_00000088 + (int64_t)iVar11 * 0xc) *
                 *(int *)((int64_t)&local_buffer_00000088 + (int64_t)iVar11 * 0xc + 4);
      }
      unaff_ESI = iVar14;
      uVar12 = iVar11 + 1;
      *(uint *)((int64_t)unaff_RBX + 0x1c) = uVar12;
    } while (((int)uVar12 < 4) && (puVar7 = (uint64_t *)(uint64_t)uVar12, 0 < unaff_ESI));
    lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                          *(int *)(unaff_RBX + 3) * uVar12 * 8,&rendering_buffer_2784_ptr,0x11f,0);
    unaff_RBX[7] = lVar5;
    if ((lVar5 != 0) && (puVar7 = puVar10, 0 < *(int *)(unaff_RBX + 3))) {
      do {
        local_buffer_60 = 0;
        iVar14 = (int)puVar7;
        if (0 < *(int *)((int64_t)unaff_RBX + 0x1c)) {
          piVar15 = &local_buffer_00000088;
          puVar7 = puVar10;
          puVar13 = puVar10;
          do {
            iVar9 = (int)puVar7;
            iVar11 = iVar8;
            if (iVar9 < iVar8) {
              iVar11 = iVar9;
            }
            puVar7 = puVar10;
            if ((iVar11 == 0) || (piVar15[2] == 0)) {
              puVar6 = (uint64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x88,&rendering_buffer_2784_ptr,
                                     0x12d,0);
              if (puVar6 != (uint64_t *)0x0) {
                *puVar6 = &rendering_buffer_2456_ptr;
                puVar7 = puVar6;
              }
            }
            else {
              puVar6 = (uint64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb0,&rendering_buffer_2784_ptr,
                                     0x132,0);
              if (puVar6 != (uint64_t *)0x0) {
                puVar7 = puVar6 + 0x12;
                *puVar6 = &rendering_buffer_2520_ptr;
                *(int32_t *)(puVar6 + 0x11) = 0;
                puVar6[0x13] = puVar7;
                *puVar7 = puVar7;
                puVar6[0x14] = 0;
                puVar7 = puVar6;
              }
            }
            *(uint64_t **)
             (unaff_RBX[7] + (int64_t)(*(int *)((int64_t)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8)
                 = puVar7;
            puVar7 = *(uint64_t **)
                      (unaff_RBX[7] +
                      (int64_t)(*(int *)((int64_t)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8);
            if (puVar7 == (uint64_t *)0x0) goto LAB_1807915cb;
            if (iVar9 < *(int *)((int64_t)unaff_RBX + 0x1c) + -1) {
              iVar11 = *piVar15;
              iVar4 = piVar15[1];
              iVar3 = (**(code **)*puVar7)(puVar7,unaff_RBX[1],iVar11,iVar2,iVar4);
              if ((iVar3 != 0) ||
                 (plVar1 = *(int64_t **)
                            (unaff_RBX[7] +
                            (int64_t)(*(int *)((int64_t)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8),
                 iVar3 = (**(code **)(*plVar1 + 8))
                                   (plVar1,(int)((*(int *)(unaff_RBX + 3) * local_buffer_60 +
                                                 iVar14) * iStack0000000000000078) +
                                           local_buffer_80,local_buffer_6c,
                                    local_buffer_68,iVar4 * iVar11), iVar3 != 0))
              goto LAB_1807915cb;
            }
            else {
              iVar3 = local_var_130 - (int)puVar13;
              iVar11 = *piVar15;
              iVar4 = (**(code **)*puVar7)
                                (puVar7,unaff_RBX[1],iVar11,iVar2,(iVar3 + -1) / iVar11 + 1);
              if ((iVar4 != 0) ||
                 (plVar1 = *(int64_t **)
                            (unaff_RBX[7] +
                            (int64_t)(*(int *)((int64_t)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8),
                 iVar4 = (**(code **)(*plVar1 + 8))
                                   (plVar1,(int)((*(int *)(unaff_RBX + 3) * local_buffer_60 +
                                                 iVar14) * iStack0000000000000078) +
                                           local_buffer_80,local_buffer_6c,
                                    local_buffer_68,iVar3), iVar4 != 0)) goto LAB_1807915cb;
              iVar4 = piVar15[1];
            }
            puVar7 = (uint64_t *)(uint64_t)(iVar9 + 1U);
            piVar15 = piVar15 + 3;
            local_buffer_60 = local_buffer_60 + iVar4 * iVar11;
            puVar13 = (uint64_t *)(uint64_t)local_buffer_60;
          } while ((int)(iVar9 + 1U) < *(int *)((int64_t)unaff_RBX + 0x1c));
        }
        puVar7 = (uint64_t *)(uint64_t)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < *(int *)(unaff_RBX + 3));
    }
  }
LAB_1807915cb:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_915fb(void)
void SystemCore_915fb(void)
{
  uint64_t local_buffer_b0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address