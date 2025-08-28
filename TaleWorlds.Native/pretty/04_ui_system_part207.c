/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part207.c - 9 个函数
// 函数: void SystemCore_8a276(void)
void SystemCore_8a276(void)
{
  int64_t *in_RAX;
  int64_t unaff_RBX;
  uint64_t uVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uVar1 = 0;
  uVar4 = uVar1;
  uVar5 = uVar1;
  if (0 < (int)in_RAX[4]) {
    do {
      uVar3 = (int)uVar4 + 1;
      plVar2 = (int64_t *)(in_RAX[5] + uVar5);
      *(int64_t *)plVar2[1] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 0x18;
    } while ((int)uVar3 < (int)in_RAX[4]);
  }
  if (in_RAX == *(int64_t **)(unaff_RBX + 8)) {
    plVar2 = (int64_t *)*in_RAX;
    if ((int64_t *)*in_RAX == *(int64_t **)(unaff_RBX + 8)) {
      plVar2 = (int64_t *)uVar1;
    }
    *(int64_t **)(unaff_RBX + 8) = plVar2;
  }
  *(int64_t *)in_RAX[1] = *in_RAX;
  *(int64_t *)(*in_RAX + 8) = in_RAX[1];
  in_RAX[1] = (int64_t)in_RAX;
  *in_RAX = (int64_t)in_RAX;
  *(int *)(unaff_RBX + 0x10) = *(int *)(unaff_RBX + 0x10) - (int)in_RAX[4];
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),in_RAX[3],&rendering_buffer_272_ptr,0x70,1);
}
uint64_t SystemCore_8a334(void)
{
  return 0;
}
int SystemCore_8a340(int64_t *param_1,uint64_t param_2,char param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int64_t *plVar7;
  uint uVar8;
  int iVar9;
  lVar2 = *param_1;
  iVar5 = (int)param_1[3];
  iVar9 = 0x16;
  if (-1 < iVar5) {
    iVar9 = iVar5;
  }
  bVar4 = false;
  if (param_2 == 0) {
    iVar5 = 0x1f;
  }
  else {
    cVar6 = '\0';
    if (-1 < iVar5) {
      cVar6 = param_3;
    }
    if ((cVar6 != '\0') && (lVar2 != 0)) {
      SystemFunction_000180743c20(lVar2,iVar9);
      bVar4 = true;
    }
    uVar8 = *(int *)((int64_t)param_1 + 0x1c) + 0xa7U & -*(int *)((int64_t)param_1 + 0x1c);
    plVar7 = (int64_t *)param_1[1];
    do {
      uVar3 = *(uint64_t *)plVar7[6];
      if ((uVar3 <= param_2) && (param_2 < (int)plVar7[4] * uVar8 + uVar3)) {
        iVar5 = (int)((param_2 - uVar3) / (uint64_t)uVar8);
        if ((iVar5 != -1) &&
           (plVar1 = (int64_t *)(plVar7[5] + (int64_t)iVar5 * 0x18),
           *(int64_t *)(plVar7[5] + 0x10 + (int64_t)iVar5 * 0x18) != 0)) {
          iVar5 = SystemCore_63220(param_2,(param_2 - uVar3) % (uint64_t)uVar8);
          if (iVar5 == 0) {
            *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + -1;
            *(int *)((int64_t)plVar7 + 0x24) = *(int *)((int64_t)plVar7 + 0x24) + -1;
            *(int64_t *)plVar1[1] = *plVar1;
            *(int64_t *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (int64_t)plVar1;
            *plVar1 = (int64_t)plVar1;
            plVar1[2] = 0;
            plVar1[1] = param_1[7];
            *plVar1 = (int64_t)(param_1 + 6);
            param_1[7] = (int64_t)plVar1;
            *(int64_t **)plVar1[1] = plVar1;
            iVar5 = 0;
            if ((*(int *)((int64_t)plVar7 + 0x24) == 0) && ((char)param_1[5] != '\0')) {
              SystemCore_8a540(param_1,plVar7);
              iVar5 = 0;
            }
          }
          goto LAB_18078a3ed;
        }
        break;
      }
      plVar7 = (int64_t *)*plVar7;
    } while (plVar7 != (int64_t *)param_1[1]);
    iVar5 = 0x1e;
  }
LAB_18078a3ed:
  if ((bVar4) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
    SystemCoreHandler(lVar2,iVar9);
  }
  return iVar5;
}
int SystemCore_8a353(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int64_t *plVar6;
  uint uVar7;
  int64_t unaff_R15;
  bVar3 = false;
  if (param_2 == 0) {
    iVar4 = 0x1f;
  }
  else {
    cVar5 = '\0';
    if (-1 < *(int *)(param_1 + 0x18)) {
      cVar5 = param_3;
    }
    if ((cVar5 != '\0') && (unaff_R15 != 0)) {
      SystemFunction_000180743c20();
      bVar3 = true;
    }
    uVar7 = *(int *)(param_1 + 0x1c) + 0xa7U & -*(int *)(param_1 + 0x1c);
    plVar6 = *(int64_t **)(param_1 + 8);
    do {
      uVar2 = *(uint64_t *)plVar6[6];
      if ((uVar2 <= param_2) && (param_2 < (int)plVar6[4] * uVar7 + uVar2)) {
        iVar4 = (int)((param_2 - uVar2) / (uint64_t)uVar7);
        if ((iVar4 != -1) &&
           (plVar1 = (int64_t *)(plVar6[5] + (int64_t)iVar4 * 0x18),
           *(int64_t *)(plVar6[5] + 0x10 + (int64_t)iVar4 * 0x18) != 0)) {
          iVar4 = SystemCore_63220(param_2,(param_2 - uVar2) % (uint64_t)uVar7);
          if (iVar4 == 0) {
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
            *(int *)((int64_t)plVar6 + 0x24) = *(int *)((int64_t)plVar6 + 0x24) + -1;
            *(int64_t *)plVar1[1] = *plVar1;
            *(int64_t *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (int64_t)plVar1;
            *plVar1 = (int64_t)plVar1;
            plVar1[2] = 0;
            plVar1[1] = *(int64_t *)(param_1 + 0x38);
            *plVar1 = param_1 + 0x30;
            *(int64_t **)(param_1 + 0x38) = plVar1;
            *(int64_t **)plVar1[1] = plVar1;
            iVar4 = 0;
            if ((*(int *)((int64_t)plVar6 + 0x24) == 0) && (*(char *)(param_1 + 0x28) != '\0')) {
              SystemCore_8a540(param_1,plVar6);
              iVar4 = 0;
            }
          }
          goto LAB_18078a3ed;
        }
        break;
      }
      plVar6 = (int64_t *)*plVar6;
    } while (plVar6 != *(int64_t **)(param_1 + 8));
    iVar4 = 0x1e;
  }
LAB_18078a3ed:
  if ((bVar3) && (unaff_R15 != 0)) {
// WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return iVar4;
}
int32_t SystemCore_8a40b(void)
{
  int32_t unaff_EBP;
  int64_t unaff_R15;
  if (unaff_R15 != 0) {
// WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return unaff_EBP;
}
uint64_t SystemCore_8a427(uint64_t param_1,int64_t param_2,uint param_3)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  char unaff_R13B;
  int64_t unaff_R14;
  int64_t unaff_R15;
  iVar2 = (int)((uint64_t)(unaff_RDI - param_2) / (uint64_t)param_3);
  if ((iVar2 == -1) ||
     (plVar1 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x28) + (int64_t)iVar2 * 0x18),
     *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x28) + 0x10 + (int64_t)iVar2 * 0x18) == unaff_RBP))
  {
    uVar3 = 0x1e;
  }
  else {
    uVar3 = SystemCore_63220();
    if (uVar3 == 0) {
      *(int *)(unaff_R14 + 0x14) = *(int *)(unaff_R14 + 0x14) + -1;
      *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + -1;
      *(int64_t *)plVar1[1] = *plVar1;
      *(int64_t *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
      plVar1[2] = unaff_RBP;
      plVar1[1] = *(int64_t *)(unaff_R14 + 0x38);
      *plVar1 = unaff_R14 + 0x30;
      *(int64_t **)(unaff_R14 + 0x38) = plVar1;
      *(int64_t **)plVar1[1] = plVar1;
      if ((*(int *)(unaff_RBX + 0x24) == (int)unaff_RBP) &&
         (*(char *)(unaff_R14 + 0x28) != (char)unaff_RBP)) {
        SystemCore_8a540();
      }
      goto LAB_18078a3ed;
    }
  }
  unaff_RBP = (uint64_t)uVar3;
LAB_18078a3ed:
  if ((unaff_R13B != '\0') && (unaff_R15 != 0)) {
// WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return unaff_RBP & 0xffffffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_8a540(int64_t param_1,int64_t *param_2)
void SystemCore_8a540(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uVar2 = 0;
  uVar3 = uVar2;
  uVar5 = uVar2;
  if (0 < (int)param_2[4]) {
    do {
      uVar4 = (int)uVar5 + 1;
      plVar1 = (int64_t *)(param_2[5] + uVar3);
      *(int64_t *)plVar1[1] = *plVar1;
      *(int64_t *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
      uVar3 = uVar3 + 0x18;
      uVar5 = (uint64_t)uVar4;
    } while ((int)uVar4 < (int)param_2[4]);
  }
  if (param_2 == *(int64_t **)(param_1 + 8)) {
    plVar1 = (int64_t *)*param_2;
    if ((int64_t *)*param_2 == *(int64_t **)(param_1 + 8)) {
      plVar1 = (int64_t *)uVar2;
    }
    *(int64_t **)(param_1 + 8) = plVar1;
  }
  *(int64_t *)param_2[1] = *param_2;
  *(int64_t *)(*param_2 + 8) = param_2[1];
  param_2[1] = (int64_t)param_2;
  *param_2 = (int64_t)param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)param_2[4];
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2[3],&rendering_buffer_272_ptr,0x70,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_8a600(int64_t param_1,char param_2)
void SystemCore_8a600(int64_t param_1,char param_2)
{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  int8_t stack_array_88 [32];
  int32_t *plocal_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  char acStack_48 [4];
  uint local_var_44;
  int iStack_40;
  int iStack_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  uVar6 = 0;
  acStack_48[0] = '\0';
  iStack_40 = 0;
  if (((&system_data_08d8)[*(uint *)(param_1 + 0x116b8)] == '\0') &&
     (((SystemCore_PerformanceMonitor(&iStack_40), param_2 == '\0' ||
       (999 < (uint)(iStack_40 - *(int *)(param_1 + 0x116c0)))) ||
      (*(char *)(*(int64_t *)(param_1 + 0x670) + 0x311) != '\0')))) {
    *(int *)(param_1 + 0x116c0) = iStack_40;
    iVar3 = SystemCore_68280(acStack_48);
    if (iVar3 != 0) goto SystemCore_8aa2c;
    if (acStack_48[0] != '\0') {
      ui_system_config = 0x1010101;
      ui_system_config = 0x1010101;
      ui_system_config = 0x1010101;
      ui_system_config = 0x1010101;
    }
  }
  uVar4 = (uint64_t)*(uint *)(param_1 + 0x116b8);
  if ((&system_data_08e0)[uVar4] != '\0') {
    if (7 < uVar4) goto LAB_18078aa58;
    (&system_data_08e0)[uVar4] = 0;
    *(int8_t *)(*(int64_t *)(param_1 + 0x670) + 0x310) = 0;
    lVar1 = *(int64_t *)(param_1 + 0x670);
    if (*(code **)(lVar1 + 0x3b8) != (code *)0x0) {
      uVar4 = lVar1 + 8;
      if (lVar1 == 0) {
        uVar4 = uVar6;
      }
      (**(code **)(lVar1 + 0x3b8))(uVar4);
    }
  }
  if (param_2 == '\0') goto SystemCore_8aa2c;
  if ((&system_data_08d8)[*(uint *)(param_1 + 0x116b8)] != '\0') {
    if ((*(code **)(param_1 + 0x11838) == (code *)0x0) || ((*(byte *)(param_1 + 0x11840) & 1) == 0))
    {
      if (*(int *)(param_1 + 0x678) == 2) {
        iVar3 = UISystem_UIRenderer0(param_1,*(int32_t *)(param_1 + 0x116c4),
                              *(int32_t *)(param_1 + 0x116c8));
        if (iVar3 == 0) goto LAB_18078a91f;
LAB_18078a792:
        iVar3 = UISystem_UIRenderer0(param_1,2);
      }
      else {
        iVar3 = SystemCore_466e0(param_1,&local_var_44);
        if (iVar3 != 0) goto SystemCore_8aa2c;
        if (local_var_44 == 0) goto LAB_18078a792;
        uVar4 = uVar6;
        uVar5 = 0;
        if (0 < (int)local_var_44) {
          do {
            local_var_50 = 0;
            plocal_var_68 = &local_var_38;
            local_var_58 = 0;
            local_var_60 = 0;
            uVar5 = (uint)uVar4;
            iVar3 = SystemCore_46460(param_1,uVar4,0,0);
            if (iVar3 != 0) goto SystemCore_8aa2c;
            if ((CONCAT44(local_var_34,local_var_38) == *(int64_t *)(param_1 + 0x116cc)) &&
               (CONCAT44(local_var_2c,local_var_30) == *(int64_t *)(param_1 + 0x116d4))) break;
            uVar5 = uVar5 + 1;
            uVar4 = (uint64_t)uVar5;
          } while ((int)uVar5 < (int)local_var_44);
        }
        iStack_3c = 0;
        if (uVar5 == local_var_44) {
          uVar5 = 0;
        }
        iVar3 = SystemCore_466e0(param_1,&iStack_3c);
        if (((iVar3 == 0) && (-2 < (int)uVar5)) && ((int)uVar5 < iStack_3c)) {
          local_var_50 = 0;
          plocal_var_68 = &local_var_38;
          local_var_58 = 0;
          local_var_60 = 0;
          uVar4 = uVar6;
          if (uVar5 != 0xffffffff) {
            uVar4 = (uint64_t)uVar5;
          }
          iVar3 = SystemCore_46460(param_1,uVar4,0,0);
          if (iVar3 == 0) {
            if ((CONCAT44(local_var_34,local_var_38) == *(int64_t *)(param_1 + 0x684)) &&
               (CONCAT44(local_var_2c,local_var_30) == *(int64_t *)(param_1 + 0x68c))) {
              *(int *)(param_1 + 0x680) = (int)uVar4;
              goto LAB_18078a91f;
            }
            if (*(char *)(param_1 + 8) == '\0') {
LAB_18078a8f5:
              *(int *)(param_1 + 0x680) = (int)uVar4;
              *(int32_t *)(param_1 + 0x684) = local_var_38;
              *(int32_t *)(param_1 + 0x688) = local_var_34;
              *(int32_t *)(param_1 + 0x68c) = local_var_30;
              *(int32_t *)(param_1 + 0x690) = local_var_2c;
              goto LAB_18078a91f;
            }
            iVar3 = SystemCore_8b6a0(param_1);
            if (iVar3 == 0) {
              if (*(int64_t *)(param_1 + 0x107b8) != 0) {
                *(int32_t *)(*(int64_t *)(param_1 + 0x107b8) + 0x30) = 1;
              }
              iVar3 = SystemCore_8b010(param_1,uVar4);
              if ((iVar3 == 0) || (iVar3 = UISystem_UIRenderer0(param_1,2), iVar3 == 0))
              goto LAB_18078a8f5;
            }
          }
        }
        iVar3 = UISystem_UIRenderer0(param_1,2);
      }
      if (iVar3 != 0) goto SystemCore_8aa2c;
    }
    else {
      plocal_var_68 = *(int32_t **)(param_1 + 0x11670);
      (**(code **)(param_1 + 0x11838))(param_1,1,0);
    }
LAB_18078a91f:
    if (7 < (uint64_t)*(uint *)(param_1 + 0x116b8)) {
LAB_18078aa58:
      UltraHighFreq_ThreadManager1();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (&system_data_08d8)[*(uint *)(param_1 + 0x116b8)] = 0;
  }
  if ((*(char *)(*(int64_t *)(param_1 + 0x670) + 0x311) != '\0') &&
     (iVar3 = SystemCore_8b6a0(param_1), iVar3 == 0)) {
    lVar1 = *(int64_t *)(param_1 + 0x670);
    local_var_44 = 0;
    if (*(code **)(lVar1 + 0x340) != (code *)0x0) {
      uVar4 = lVar1 + 8;
      if (lVar1 == 0) {
        uVar4 = uVar6;
      }
      iVar3 = (**(code **)(lVar1 + 0x340))(uVar4,&local_var_44);
      if (iVar3 != 0) goto SystemCore_8aa2c;
    }
    uVar4 = (uint64_t)*(uint *)(param_1 + 0x680);
    if ((*(uint *)(param_1 + 0x680) != 0) &&
       (*(int32_t *)(param_1 + 0x680) = 0, uVar4 = uVar6, 0 < (int)local_var_44)) {
      do {
        local_var_50 = 0;
        plocal_var_68 = &local_var_38;
        local_var_58 = 0;
        local_var_60 = 0;
        iVar3 = SystemCore_46460(param_1,uVar4,0,0);
        if (iVar3 != 0) goto SystemCore_8aa2c;
        if ((CONCAT44(local_var_34,local_var_38) == *(int64_t *)(param_1 + 0x684)) &&
           (CONCAT44(local_var_2c,local_var_30) == *(int64_t *)(param_1 + 0x68c))) {
          *(int *)(param_1 + 0x680) = (int)uVar4;
          goto LAB_18078aa03;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar5;
      } while ((int)uVar5 < (int)local_var_44);
      uVar4 = (uint64_t)*(uint *)(param_1 + 0x680);
    }
LAB_18078aa03:
    iVar3 = SystemCore_8b010(param_1,uVar4);
    if (iVar3 != 0) {
      UISystem_UIRenderer0(param_1,2);
    }
  }
SystemCore_8aa2c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_88);
}
// 函数: void SystemCore_8a6c7(int32_t param_1)
void SystemCore_8a6c7(int32_t param_1)
{
  code *pcVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  char unaff_DIL;
  int iVar7;
  char cVar8;
  int unaff_R14D;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  cVar8 = (char)unaff_R14D;
  if (*(char *)(in_RAX + 0xc108e0 + unaff_R15) != cVar8) {
    if (7 < in_RAX) goto LAB_18078aa58;
    *(char *)(in_RAX + 0xc108e0 + unaff_R15) = cVar8;
    *(char *)(*(int64_t *)(unaff_RBX + 0x670) + 0x310) = cVar8;
    pcVar1 = *(code **)(*(int64_t *)(unaff_RBX + 0x670) + 0x3b8);
    if (pcVar1 != (code *)0x0) {
      param_1 = (*pcVar1)();
    }
  }
  if (unaff_DIL == '\0') goto LAB_18078aa24;
  if (*(char *)((uint64_t)*(uint *)(unaff_RBX + 0x116b8) + 0xc108d8 + unaff_R15) != cVar8) {
    if ((*(code **)(unaff_RBX + 0x11838) == (code *)0x0) ||
       ((*(byte *)(unaff_RBX + 0x11840) & 1) == 0)) {
      if (*(int *)(unaff_RBX + 0x678) == 2) {
        iVar6 = UISystem_UIRenderer0(param_1,*(int32_t *)(unaff_RBX + 0x116c4),
                              *(int32_t *)(unaff_RBX + 0x116c8));
        uVar9 = extraout_XMM0_Da;
        if (iVar6 == 0) goto LAB_18078a91f;
LAB_18078a792:
        iVar6 = UISystem_UIRenderer0(uVar9,2);
      }
      else {
        iVar6 = SystemCore_466e0(param_1,unaff_RBP + -0x2c);
        if (iVar6 != 0) goto LAB_18078aa24;
        iVar6 = *(int *)(unaff_RBP + -0x2c);
        uVar9 = extraout_XMM0_Da_00;
        if (iVar6 == 0) goto LAB_18078a792;
        iVar7 = unaff_R14D;
        if (0 < iVar6) {
          do {
            iVar6 = SystemCore_46460(uVar9,iVar7,0,0,unaff_RBP + -0x20);
            if (iVar6 != 0) goto LAB_18078aa24;
            uVar9 = extraout_XMM0_Da_01;
            if ((*(int64_t *)(unaff_RBP + -0x20) == *(int64_t *)(unaff_RBX + 0x116cc)) &&
               (*(int64_t *)(unaff_RBP + -0x18) == *(int64_t *)(unaff_RBX + 0x116d4))) {
              iVar6 = *(int *)(unaff_RBP + -0x2c);
              break;
            }
            iVar6 = *(int *)(unaff_RBP + -0x2c);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        *(int *)(unaff_RBP + -0x24) = unaff_R14D;
        if (iVar7 == iVar6) {
          iVar7 = unaff_R14D;
        }
        iVar6 = SystemCore_466e0(uVar9,unaff_RBP + -0x24);
        uVar9 = extraout_XMM0_Da_02;
        if (((iVar6 == 0) && (-2 < iVar7)) && (iVar7 < *(int *)(unaff_RBP + -0x24))) {
          iVar6 = unaff_R14D;
          if (iVar7 != -1) {
            iVar6 = iVar7;
          }
          iVar7 = SystemCore_46460(extraout_XMM0_Da_02,iVar6,0,0,unaff_RBP + -0x20);
          uVar9 = extraout_XMM0_Da_03;
          if (iVar7 == 0) {
            if ((*(int64_t *)(unaff_RBP + -0x20) == *(int64_t *)(unaff_RBX + 0x684)) &&
               (*(int64_t *)(unaff_RBP + -0x18) == *(int64_t *)(unaff_RBX + 0x68c))) {
              *(int *)(unaff_RBX + 0x680) = iVar6;
              goto LAB_18078a91f;
            }
            if (*(char *)(unaff_RBX + 8) == cVar8) {
LAB_18078a8f5:
              uVar9 = *(int32_t *)(unaff_RBP + -0x20);
              uVar3 = *(int32_t *)(unaff_RBP + -0x1c);
              uVar4 = *(int32_t *)(unaff_RBP + -0x18);
              uVar5 = *(int32_t *)(unaff_RBP + -0x14);
              *(int *)(unaff_RBX + 0x680) = iVar6;
              *(int32_t *)(unaff_RBX + 0x684) = uVar9;
              *(int32_t *)(unaff_RBX + 0x688) = uVar3;
              *(int32_t *)(unaff_RBX + 0x68c) = uVar4;
              *(int32_t *)(unaff_RBX + 0x690) = uVar5;
              goto LAB_18078a91f;
            }
            iVar7 = SystemCore_8b6a0();
            uVar9 = extraout_XMM0_Da_04;
            if (iVar7 == 0) {
              if (*(int64_t *)(unaff_RBX + 0x107b8) != 0) {
                *(int32_t *)(*(int64_t *)(unaff_RBX + 0x107b8) + 0x30) = 1;
              }
              iVar7 = SystemCore_8b010(extraout_XMM0_Da_04,iVar6);
              if ((iVar7 == 0) ||
                 (iVar7 = UISystem_UIRenderer0(extraout_XMM0_Da_05,2), uVar9 = extraout_XMM0_Da_06,
                 iVar7 == 0)) goto LAB_18078a8f5;
            }
          }
        }
        iVar6 = UISystem_UIRenderer0(uVar9,2);
      }
      if (iVar6 != 0) goto LAB_18078aa24;
    }
    else {
      (**(code **)(unaff_RBX + 0x11838))(param_1,1,0,0,*(uint64_t *)(unaff_RBX + 0x11670));
    }
LAB_18078a91f:
    if (7 < (uint64_t)*(uint *)(unaff_RBX + 0x116b8)) {
LAB_18078aa58:
      UltraHighFreq_ThreadManager1();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(char *)((uint64_t)*(uint *)(unaff_RBX + 0x116b8) + 0xc108d8 + unaff_R15) = cVar8;
  }
  if ((*(char *)(*(int64_t *)(unaff_RBX + 0x670) + 0x311) != cVar8) &&
     (iVar6 = SystemCore_8b6a0(), iVar6 == 0)) {
    lVar2 = *(int64_t *)(unaff_RBX + 0x670);
    *(int *)(unaff_RBP + -0x2c) = unaff_R14D;
    pcVar1 = *(code **)(lVar2 + 0x340);
    uVar9 = extraout_XMM0_Da_07;
    iVar6 = unaff_R14D;
    if (pcVar1 != (code *)0x0) {
      iVar6 = (*pcVar1)(extraout_XMM0_Da_07,unaff_RBP + -0x2c);
      if (iVar6 != 0) goto LAB_18078aa24;
      iVar6 = *(int *)(unaff_RBP + -0x2c);
      uVar9 = extraout_XMM0_Da_08;
    }
    iVar7 = *(int *)(unaff_RBX + 0x680);
    if ((*(int *)(unaff_RBX + 0x680) != 0) &&
       (*(int *)(unaff_RBX + 0x680) = unaff_R14D, iVar7 = unaff_R14D, 0 < iVar6)) {
      do {
        iVar6 = SystemCore_46460(uVar9,unaff_R14D,0,0,unaff_RBP + -0x20);
        if (iVar6 != 0) goto LAB_18078aa24;
        uVar9 = extraout_XMM0_Da_09;
        if ((*(int64_t *)(unaff_RBP + -0x20) == *(int64_t *)(unaff_RBX + 0x684)) &&
           (*(int64_t *)(unaff_RBP + -0x18) == *(int64_t *)(unaff_RBX + 0x68c))) {
          *(int *)(unaff_RBX + 0x680) = unaff_R14D;
          iVar7 = unaff_R14D;
          goto LAB_18078aa03;
        }
        unaff_R14D = unaff_R14D + 1;
      } while (unaff_R14D < *(int *)(unaff_RBP + -0x2c));
      iVar7 = *(int *)(unaff_RBX + 0x680);
    }
LAB_18078aa03:
    iVar6 = SystemCore_8b010(uVar9,iVar7);
    if (iVar6 != 0) {
      UISystem_UIRenderer0(extraout_XMM0_Da_10,2);
    }
  }
LAB_18078aa24:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_8aa2c(void)
void SystemCore_8aa2c(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_8aa4e(void)
void SystemCore_8aa4e(void)
{
  int iVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_EDI;
  *(int32_t *)(unaff_RBX + 0x680) = unaff_EDI;
  iVar1 = SystemCore_8b010();
  if (iVar1 != 0) {
    UISystem_UIRenderer0();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_8aa60(int64_t param_1)
{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int8_t local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t *plocal_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  local_var_58 = *(int32_t *)(param_1 + 0x6d8);
  lVar4 = 0;
  local_var_4c = 1;
  _local_var_54 = CONCAT44(5,*(int32_t *)(*(int64_t *)(param_1 + 0x670) + 0x58));
  puVar2 = (uint64_t *)SystemFunction_0001807e5100();
  local_var_48 = *puVar2;
  local_var_40 = puVar2[1];
  local_var_38 = puVar2[2];
  local_var_30 = puVar2[3];
  local_var_20 = puVar2[5];
  local_var_18 = puVar2[6];
  local_var_10 = puVar2[7];
  plocal_var_28 = &local_var_58;
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x2d8,&processed_var_400_ptr,0x1c6,0);
  if (lVar3 != 0) {
    lVar4 = SystemCore_e4c10(lVar3);
  }
  *(int64_t *)(param_1 + 0x10f80) = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  *(int64_t *)(lVar4 + 0xa8) = param_1;
  *(int64_t *)(*(int64_t *)(param_1 + 0x10f80) + 0xd8) = param_1 + 0x11848;
  *(int32_t *)(*(int64_t *)(param_1 + 0x10f80) + 0xe0) = *(int32_t *)(param_1 + 0x116b8);
  uVar5 = SystemCore_5a230(*(uint64_t *)(param_1 + 0x10f80),&local_var_48);
  if ((int)uVar5 == 0) {
    *(int32_t *)(*(int64_t *)(param_1 + 0x10f80) + 0x2b8) = 0xffffffff;
    *(code **)(*(int64_t *)(param_1 + 0x10f80) + 0x298) = SystemCore_87030;
    *(uint64_t *)(*(int64_t *)(param_1 + 0x10f80) + 0x1e8) = *(uint64_t *)(param_1 + 0x670);
    *(float *)(*(int64_t *)(param_1 + 0x10f80) + 0x230) =
         (float)*(int *)(*(int64_t *)(param_1 + 0x670) + 100);
    uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x10f80) + 0x38))();
    if ((int)uVar5 == 0) {
      uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x10f80) + 0x28))
                        (*(int64_t **)(param_1 + 0x10f80),0,0,0);
      if ((int)uVar5 == 0) {
        uVar5 = SystemCore_Initializer(*(uint64_t *)(param_1 + 0x10f80),1);
        if ((int)uVar5 == 0) {
          LOCK();
          puVar1 = (uint *)(*(int64_t *)(param_1 + 0x10f80) + 100);
          *puVar1 = *puVar1 | 0x200;
          UNLOCK();
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_8ac40(int64_t param_1,int param_2,int param_3)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t astack_special_x_10 [4];
  int32_t astack_special_x_20 [2];
  if ((0 < param_2) && (-1 < param_3)) {
    astack_special_x_20[0] = 0;
    astack_special_x_10[0] = 0;
    SystemFunction_000180746360(param_1,astack_special_x_10,astack_special_x_20);
    iVar1 = *(int *)(param_1 + 0x6d4);
    lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&processed_var_400_ptr,0x1ee,0);
    *(int64_t *)(param_1 + 0x10f88) = lVar2;
    if (lVar2 == 0) {
      return 0x26;
    }
    uVar3 = SystemCore_869c0(lVar2,astack_special_x_10[0],param_2,iVar1 * 4,param_3);
    return uVar3;
  }
  return 0x1c;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_8ac65(uint64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RSI;
  int32_t unaff_EDI;
  int32_t local_buffer_58;
  int32_t local_buffer_68;
  local_buffer_68 = 0;
  local_buffer_58 = 0;
  SystemFunction_000180746360(param_1,&local_buffer_00000058);
  iVar1 = *(int *)(unaff_RSI + 0x6d4);
  lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&processed_var_400_ptr,0x1ee,0);
  *(int64_t *)(unaff_RSI + 0x10f88) = lVar2;
  if (lVar2 == 0) {
    return 0x26;
  }
  uVar3 = SystemCore_869c0(lVar2,local_buffer_58,unaff_EDI,iVar1 * 4);
  return uVar3;
}
// 函数: void SystemCore_8acd5(void)
void SystemCore_8acd5(void)
{
  SystemCore_869c0();
  return;
}
uint64_t SystemCore_8acfd(void)
{
  return 0x1c;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_8ad10(int64_t param_1,int param_2)
void SystemCore_8ad10(int64_t param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_78 [32];
  int32_t *plocal_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int aiStack_38 [2];
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  aiStack_38[0] = 0;
  iVar1 = SystemCore_466e0(param_1,aiStack_38);
  if (((iVar1 == 0) && (-2 < param_2)) && (param_2 < aiStack_38[0])) {
    local_var_40 = 0;
    plocal_var_58 = &local_var_30;
    local_var_48 = 0;
    iVar1 = 0;
    if (param_2 != -1) {
      iVar1 = param_2;
    }
    local_var_50 = 0;
    iVar2 = SystemCore_46460(param_1,iVar1,0,0);
    if (iVar2 == 0) {
      if ((CONCAT44(local_var_2c,local_var_30) == *(int64_t *)(param_1 + 0x684)) &&
         (CONCAT44(local_var_24,local_var_28) == *(int64_t *)(param_1 + 0x68c))) {
        *(int *)(param_1 + 0x680) = iVar1;
      }
      else {
        if (*(char *)(param_1 + 8) != '\0') {
          iVar2 = SystemCore_8b6a0(param_1);
          if (iVar2 != 0) goto SystemCore_8adbc;
          if (*(int64_t *)(param_1 + 0x107b8) != 0) {
            *(int32_t *)(*(int64_t *)(param_1 + 0x107b8) + 0x30) = 1;
          }
          iVar2 = SystemCore_8b010(param_1,iVar1);
          if ((iVar2 != 0) && (iVar2 = UISystem_UIRenderer0(param_1,2), iVar2 != 0)) goto SystemCore_8adbc;
        }
        *(int *)(param_1 + 0x680) = iVar1;
        *(int32_t *)(param_1 + 0x684) = local_var_30;
        *(int32_t *)(param_1 + 0x688) = local_var_2c;
        *(int32_t *)(param_1 + 0x68c) = local_var_28;
        *(int32_t *)(param_1 + 0x690) = local_var_24;
      }
    }
  }
SystemCore_8adbc:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_78);
}
// 函数: void SystemCore_8ad5d(int32_t param_1)
void SystemCore_8ad5d(int32_t param_1)
{
  int iVar1;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  uint64_t local_buffer_58;
  iVar2 = unaff_EBP;
  if (unaff_ESI != -1) {
    iVar2 = unaff_ESI;
  }
  iVar1 = SystemCore_46460(param_1,iVar2,0,0);
  if (iVar1 == 0) {
    if ((_local_var_48 == *(int64_t *)(unaff_RBX + 0x684)) &&
       (_local_buffer_50 == *(int64_t *)(unaff_RBX + 0x68c))) {
      *(int *)(unaff_RBX + 0x680) = iVar2;
    }
    else {
      if (*(char *)(unaff_RBX + 8) != (char)unaff_EBP) {
        iVar1 = SystemCore_8b6a0();
        if (iVar1 != 0) goto LAB_18078adb4;
        if (*(int64_t *)(unaff_RBX + 0x107b8) != 0) {
          *(int32_t *)(*(int64_t *)(unaff_RBX + 0x107b8) + 0x30) = 1;
        }
        iVar1 = SystemCore_8b010(extraout_XMM0_Da,iVar2);
        if ((iVar1 != 0) && (iVar1 = UISystem_UIRenderer0(extraout_XMM0_Da_00,2), iVar1 != 0))
        goto LAB_18078adb4;
      }
      *(int *)(unaff_RBX + 0x680) = iVar2;
      *(int32_t *)(unaff_RBX + 0x684) = local_var_48;
      *(int32_t *)(unaff_RBX + 0x688) = local_buffer_4c;
      *(int32_t *)(unaff_RBX + 0x68c) = local_buffer_50;
      *(int32_t *)(unaff_RBX + 0x690) = local_buffer_54;
    }
  }
LAB_18078adb4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_58 ^ (uint64_t)&local_buffer_00000000);
}