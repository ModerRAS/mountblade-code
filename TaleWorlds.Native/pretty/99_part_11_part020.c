#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part020.c - 18 个函数
// 函数: void UtilitiesSystem_efb7c(int64_t *param_1)
void UtilitiesSystem_efb7c(int64_t *param_1)
{
  char cVar1;
  int8_t uVar2;
  int iVar3;
  char *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar9;
  uint unaff_EBP;
  uint64_t *unaff_R13;
  uint64_t uVar10;
  int64_t *plStack0000000000000060;
  char *local_buffer_70;
  char *local_buffer_78;
  int8_t local_buffer_80;
  uint8_t local_buffer_81;
  uint uVar8;
  pcVar9 = local_buffer_78;
  plStack0000000000000060 = param_1;
  if (local_buffer_78 != (char *)0x0) {
    system_system_memory = system_system_memory + 1;
    pcVar4 = local_buffer_78;
    uVar7 = unaff_EBP;
    if (*local_buffer_78 != (char)unaff_EBP) {
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != (char)unaff_EBP);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 + 2);
// WARNING: Subroutine does not return
      memcpy(uVar5,pcVar9,uVar7);
    }
    local_buffer_70 = "";
    uVar10 = (uint64_t)unaff_EBP;
    uVar2 = local_buffer_80;
    while (cVar1 = *local_buffer_70, pcVar9 = local_buffer_70, cVar1 != '\0') {
      while (iVar3 = isspace((int)cVar1), iVar3 != 0) {
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
        if (cVar1 == '\0') goto LAB_1806efc28;
      }
      if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
        uVar2 = strtoul(local_buffer_70,&local_buffer_00000070,10);
      }
      uVar8 = uVar7 + 1;
      uVar6 = uVar10;
      if (unaff_EBP < uVar8) {
        unaff_EBP = 0x20;
        if (0x20 < uVar8) {
          do {
            unaff_EBP = unaff_EBP * 2;
          } while (unaff_EBP < uVar8);
        }
        uVar6 = (**(code **)(*plStack0000000000000060 + 8))(plStack0000000000000060,unaff_EBP);
        if (uVar7 != 0) {
// WARNING: Subroutine does not return
          memcpy(uVar6,uVar10,uVar7);
        }
        (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,uVar10);
      }
      *(int8_t *)(uVar7 + uVar6) = uVar2;
      uVar10 = uVar6;
      uVar7 = uVar8;
    }
LAB_1806efc28:
    *unaff_R13 = uVar10;
    *(uint *)CONCAT71(local_buffer_81,local_buffer_80) = uVar7;
    (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,&system_buffer_ptr);
  }
  (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,0);
  return;
}
// 函数: void UtilitiesSystem_efba9(int64_t *param_1)
void UtilitiesSystem_efba9(int64_t *param_1)
{
  char cVar1;
  int8_t uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  char *pcVar7;
  uint unaff_EBP;
  char *unaff_RSI;
  uint unaff_EDI;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  int64_t *local_buffer_60;
  char *local_buffer_70;
  int8_t local_buffer_80;
  uint8_t local_buffer_81;
  if (*unaff_RSI != (char)unaff_EDI) {
    do {
      uVar6 = unaff_EBP;
      unaff_RSI = unaff_RSI + 1;
      unaff_EBP = uVar6 + 1;
    } while (*unaff_RSI != (char)unaff_EDI);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,uVar6 + 2);
// WARNING: Subroutine does not return
    memcpy(uVar4);
  }
  local_buffer_70 = "";
  uVar2 = local_buffer_80;
  while (cVar1 = *local_buffer_70, pcVar7 = local_buffer_70, cVar1 != '\0') {
    while (iVar3 = isspace((int)cVar1), iVar3 != 0) {
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\0') goto LAB_1806efc28;
    }
    if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
      uVar2 = strtoul(local_buffer_70,&local_buffer_00000070,10);
    }
    uVar6 = unaff_EBP + 1;
    lVar5 = unaff_R14;
    if (unaff_EDI < uVar6) {
      unaff_EDI = 0x20;
      if (0x20 < uVar6) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar6);
      }
      lVar5 = (**(code **)(*local_buffer_60 + 8))(local_buffer_60,unaff_EDI);
      if (unaff_EBP != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar5,unaff_R14,unaff_EBP);
      }
      (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,unaff_R14);
    }
    *(int8_t *)((uint64_t)unaff_EBP + lVar5) = uVar2;
    unaff_R14 = lVar5;
    unaff_EBP = uVar6;
  }
LAB_1806efc28:
  *unaff_R13 = unaff_R14;
  *(uint *)CONCAT71(local_buffer_81,local_buffer_80) = unaff_EBP;
  (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,&system_buffer_ptr);
  (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,0);
  return;
}
// 函数: void UtilitiesSystem_efc53(void)
void UtilitiesSystem_efc53(void)
{
  int64_t *local_buffer_60;
  (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,0);
  return;
}
// 函数: void UtilitiesSystem_efc6f(void)
void UtilitiesSystem_efc6f(void)
{
  return;
}
// 函数: void UtilitiesSystem_efc77(void)
void UtilitiesSystem_efc77(void)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_EBP;
  uint unaff_EDI;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  int8_t unaff_R15B;
  int64_t *local_buffer_60;
  char *local_buffer_70;
  uint *local_buffer_80;
  do {
    if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
      unaff_R15B = strtoul(local_buffer_70,&local_buffer_00000070,10);
    }
    uVar4 = unaff_EBP + 1;
    lVar3 = unaff_R14;
    if (unaff_EDI < uVar4) {
      unaff_EDI = 0x20;
      if (0x20 < uVar4) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar4);
      }
      lVar3 = (**(code **)(*local_buffer_60 + 8))(local_buffer_60,unaff_EDI);
      if (unaff_EBP != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R14,unaff_EBP);
      }
      (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,unaff_R14);
    }
    *(int8_t *)((uint64_t)unaff_EBP + lVar3) = unaff_R15B;
    cVar1 = *local_buffer_70;
    pcVar5 = local_buffer_70;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *local_buffer_80 = uVar4;
        (**(code **)(*local_buffer_60 + 0x10))();
        (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R14 = lVar3;
      unaff_EBP = uVar4;
      if (iVar2 == 0) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_efd00(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
void UtilitiesSystem_efd00(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
                  int32_t *param_5,int64_t *param_6)
{
  uint uVar1;
  char cVar2;
  int16_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char *pcStackX_18;
  char *pcStackX_20;
  uVar10 = 0;
  *param_4 = 2;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar2 != '\0') {
    if (pcStackX_20 != (char *)0x0) {
      system_system_memory = system_system_memory + 1;
      pcVar8 = pcStackX_20;
      if (*pcStackX_20 != '\0') {
        do {
          iVar4 = (int)uVar10;
          uVar7 = iVar4 + 1;
          uVar10 = (uint64_t)uVar7;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        uVar5 = (**(code **)(*param_6 + 8))(param_6,iVar4 + 2);
// WARNING: Subroutine does not return
        memcpy(uVar5,pcStackX_20,uVar7);
      }
      pcStackX_18 = "";
      uVar9 = uVar10;
      uVar11 = uVar10;
      uVar3 = param_5._0_2_;
      do {
        cVar2 = *pcStackX_18;
        pcVar8 = pcStackX_18;
        while( true ) {
          if (cVar2 == '\0') {
            *param_3 = uVar11;
            *param_5 = (int)(uVar9 >> 1);
            (**(code **)(*param_6 + 0x10))(param_6,&system_buffer_ptr);
            goto UtilitiesSystem_efe15;
          }
          iVar4 = isspace((int)cVar2);
          if (iVar4 == 0) break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 1;
        }
        if ((pcStackX_18 != (char *)0x0) && (*pcStackX_18 != '\0')) {
          uVar3 = strtoul(pcStackX_18,&pcStackX_18,10);
        }
        uVar7 = (int)uVar9 + 2;
        uVar6 = uVar11;
        if ((uint)uVar10 < uVar7) {
          uVar10 = 0x20;
          if (0x20 < uVar7) {
            do {
              uVar1 = (int)uVar10 * 2;
              uVar10 = (uint64_t)uVar1;
            } while (uVar1 < uVar7);
          }
          uVar6 = (**(code **)(*param_6 + 8))(param_6,uVar10);
          if ((int)uVar9 != 0) {
// WARNING: Subroutine does not return
            memcpy(uVar6,uVar11,uVar9);
          }
          (**(code **)(*param_6 + 0x10))(param_6,uVar11);
        }
        *(int16_t *)(uVar9 + uVar6) = uVar3;
        uVar9 = (uint64_t)uVar7;
        uVar11 = uVar6;
      } while( true );
    }
UtilitiesSystem_efe15:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_efd3c(int64_t *param_1)
void UtilitiesSystem_efd3c(int64_t *param_1)
{
  char cVar1;
  int16_t uVar2;
  int iVar3;
  char *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar9;
  uint unaff_ESI;
  uint64_t *unaff_R13;
  uint64_t uVar10;
  int64_t *plStack0000000000000060;
  char *local_buffer_70;
  char *local_buffer_78;
  int16_t local_buffer_80;
  uint8_t local_buffer_82;
  uint uVar8;
  pcVar9 = local_buffer_78;
  plStack0000000000000060 = param_1;
  if (local_buffer_78 != (char *)0x0) {
    system_system_memory = system_system_memory + 1;
    pcVar4 = local_buffer_78;
    uVar7 = unaff_ESI;
    if (*local_buffer_78 != (char)unaff_ESI) {
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != (char)unaff_ESI);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 + 2);
// WARNING: Subroutine does not return
      memcpy(uVar5,pcVar9,uVar7);
    }
    local_buffer_70 = "";
    uVar10 = (uint64_t)unaff_ESI;
    uVar2 = local_buffer_80;
    while (cVar1 = *local_buffer_70, pcVar9 = local_buffer_70, cVar1 != '\0') {
      while (iVar3 = isspace((int)cVar1), iVar3 != 0) {
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
        if (cVar1 == '\0') goto LAB_1806efde8;
      }
      if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
        uVar2 = strtoul(local_buffer_70,&local_buffer_00000070,10);
      }
      uVar8 = uVar7 + 2;
      uVar6 = uVar10;
      if (unaff_ESI < uVar8) {
        unaff_ESI = 0x20;
        if (0x20 < uVar8) {
          do {
            unaff_ESI = unaff_ESI * 2;
          } while (unaff_ESI < uVar8);
        }
        uVar6 = (**(code **)(*plStack0000000000000060 + 8))(plStack0000000000000060,unaff_ESI);
        if (uVar7 != 0) {
// WARNING: Subroutine does not return
          memcpy(uVar6,uVar10,uVar7);
        }
        (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,uVar10);
      }
      *(int16_t *)(uVar7 + uVar6) = uVar2;
      uVar10 = uVar6;
      uVar7 = uVar8;
    }
LAB_1806efde8:
    *unaff_R13 = uVar10;
    *(uint *)CONCAT62(local_buffer_82,local_buffer_80) = uVar7 >> 1;
    (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,&system_buffer_ptr);
  }
  (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,0);
  return;
}
// 函数: void UtilitiesSystem_efd69(int64_t *param_1)
void UtilitiesSystem_efd69(int64_t *param_1)
{
  uint uVar1;
  char cVar2;
  int16_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  char *pcVar8;
  char *unaff_RBP;
  uint unaff_ESI;
  uint unaff_EDI;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  int64_t *local_buffer_60;
  char *local_buffer_70;
  int16_t local_buffer_80;
  uint8_t local_buffer_82;
  uVar1 = unaff_ESI;
  if (*unaff_RBP != (char)unaff_ESI) {
    do {
      uVar7 = uVar1;
      unaff_RBP = unaff_RBP + 1;
      uVar1 = uVar7 + 1;
    } while (*unaff_RBP != (char)unaff_ESI);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar7 + 2);
// WARNING: Subroutine does not return
    memcpy(uVar5);
  }
  local_buffer_70 = "";
  uVar3 = local_buffer_80;
  while (cVar2 = *local_buffer_70, pcVar8 = local_buffer_70, cVar2 != '\0') {
    while (iVar4 = isspace((int)cVar2), iVar4 != 0) {
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      if (cVar2 == '\0') goto LAB_1806efde8;
    }
    if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
      uVar3 = strtoul(local_buffer_70,&local_buffer_00000070,10);
    }
    uVar1 = unaff_ESI + 2;
    lVar6 = unaff_R14;
    if (unaff_EDI < uVar1) {
      unaff_EDI = 0x20;
      if (0x20 < uVar1) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar1);
      }
      lVar6 = (**(code **)(*local_buffer_60 + 8))(local_buffer_60,unaff_EDI);
      if (unaff_ESI != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar6,unaff_R14,unaff_ESI);
      }
      (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,unaff_R14);
    }
    *(int16_t *)((uint64_t)unaff_ESI + lVar6) = uVar3;
    unaff_R14 = lVar6;
    unaff_ESI = uVar1;
  }
LAB_1806efde8:
  *unaff_R13 = unaff_R14;
  *(uint *)CONCAT62(local_buffer_82,local_buffer_80) = unaff_ESI >> 1;
  (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,&system_buffer_ptr);
  (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,0);
  return;
}
// 函数: void UtilitiesSystem_efe15(void)
void UtilitiesSystem_efe15(void)
{
  int64_t *local_buffer_60;
  (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,0);
  return;
}
// 函数: void UtilitiesSystem_efe31(void)
void UtilitiesSystem_efe31(void)
{
  return;
}
// 函数: void UtilitiesSystem_efe39(void)
void UtilitiesSystem_efe39(void)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_ESI;
  uint unaff_EDI;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  int16_t unaff_R15W;
  int64_t *local_buffer_60;
  char *local_buffer_70;
  uint *local_buffer_80;
  do {
    if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
      unaff_R15W = strtoul(local_buffer_70,&local_buffer_00000070,10);
    }
    uVar4 = unaff_ESI + 2;
    lVar3 = unaff_R14;
    if (unaff_EDI < uVar4) {
      unaff_EDI = 0x20;
      if (0x20 < uVar4) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar4);
      }
      lVar3 = (**(code **)(*local_buffer_60 + 8))(local_buffer_60,unaff_EDI);
      if (unaff_ESI != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R14,unaff_ESI);
      }
      (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,unaff_R14);
    }
    *(int16_t *)((uint64_t)unaff_ESI + lVar3) = unaff_R15W;
    cVar1 = *local_buffer_70;
    pcVar5 = local_buffer_70;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *local_buffer_80 = uVar4 >> 1;
        (**(code **)(*local_buffer_60 + 0x10))();
        (**(code **)(*local_buffer_60 + 0x10))(local_buffer_60,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R14 = lVar3;
      unaff_ESI = uVar4;
      if (iVar2 == 0) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_efec0(int64_t *param_1,uint64_t param_2,int64_t *param_3,int32_t *param_4,
void UtilitiesSystem_efec0(int64_t *param_1,uint64_t param_2,int64_t *param_3,int32_t *param_4,
                  int32_t *param_5,int64_t *param_6)
{
  char cVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  char *pcVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  char *pcStackX_8;
  char *pcStackX_20;
  uint64_t local_var_48;
  int iVar8;
  *param_4 = 0xc;
  *param_3 = 0;
  *param_5 = 0;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar1 != '\0') {
    uVar10 = 0;
    if (pcStackX_20 != (char *)0x0) {
      system_system_memory = system_system_memory + 1;
      if (*pcStackX_20 != '\0') {
        pcVar9 = pcStackX_20;
        iVar7 = 0;
        do {
          iVar8 = iVar7;
          iVar7 = iVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        uVar5 = (**(code **)(*param_6 + 8))(param_6,iVar8 + 2);
// WARNING: Subroutine does not return
        memcpy(uVar5,pcStackX_20,iVar7);
      }
      pcStackX_8 = "";
      uVar11 = 0;
      lVar12 = 0;
      do {
        uVar4 = 0;
        cVar1 = *pcStackX_8;
        pcVar9 = pcStackX_8;
        while( true ) {
          if (cVar1 == '\0') {
            *param_3 = lVar12;
            *param_5 = (int)(uVar11 / 0xc);
            (**(code **)(*param_6 + 0x10))(param_6,&system_buffer_ptr);
            goto UtilitiesSystem_effec;
          }
          iVar7 = isspace((int)cVar1);
          if (iVar7 == 0) break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        }
        local_var_48 = 0;
        if (pcStackX_8 != (char *)0x0) {
          if (*pcStackX_8 != '\0') {
            uVar2 = strtoul(pcStackX_8,&pcStackX_8,10);
            local_var_48 = (uint64_t)uVar2;
          }
          if (pcStackX_8 != (char *)0x0) {
            if (*pcStackX_8 != '\0') {
              uVar3 = strtoul(pcStackX_8,&pcStackX_8,10);
              local_var_48 = CONCAT44(uVar3,(int32_t)local_var_48);
            }
            if ((pcStackX_8 != (char *)0x0) && (*pcStackX_8 != '\0')) {
              uVar4 = strtoul(pcStackX_8,&pcStackX_8,10);
            }
          }
        }
        uVar2 = (int)uVar11 + 0xc;
        lVar6 = lVar12;
        if (uVar10 < uVar2) {
          uVar10 = 0x20;
          if (0x20 < uVar2) {
            do {
              uVar10 = uVar10 * 2;
            } while (uVar10 < uVar2);
          }
          lVar6 = (**(code **)(*param_6 + 8))(param_6,uVar10);
          if ((int)uVar11 != 0) {
// WARNING: Subroutine does not return
            memcpy(lVar6,lVar12,uVar11);
          }
          (**(code **)(*param_6 + 0x10))(param_6,lVar12);
        }
        *(uint64_t *)(uVar11 + lVar6) = local_var_48;
        *(int32_t *)((uint64_t *)(uVar11 + lVar6) + 1) = uVar4;
        uVar11 = (uint64_t)uVar2;
        lVar12 = lVar6;
      } while( true );
    }
UtilitiesSystem_effec:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_eff02(int64_t *param_1)
void UtilitiesSystem_eff02(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar8;
  uint unaff_EBP;
  uint64_t *unaff_R13;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t stack_special_x_20;
  char *local_buffer_70;
  int64_t *plStack0000000000000080;
  char *local_buffer_88;
  int32_t *local_buffer_90;
  plStack0000000000000080 = param_1;
  if (local_buffer_88 == (char *)0x0) {
UtilitiesSystem_effec:
    (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,0);
    return;
  }
  system_system_memory = system_system_memory + 1;
  pcVar8 = local_buffer_88;
  uVar7 = unaff_EBP;
  if (*local_buffer_88 != (char)unaff_EBP) {
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != (char)unaff_EBP);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar3 + 2);
// WARNING: Subroutine does not return
    memcpy(uVar5,local_buffer_88,uVar7);
  }
  local_buffer_70 = "";
  uVar9 = (uint64_t)unaff_EBP;
  uVar10 = (uint64_t)unaff_EBP;
  do {
    cVar1 = *local_buffer_70;
    pcVar8 = local_buffer_70;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = uVar10;
        *local_buffer_90 = (int)(uVar9 / 0xc);
        (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,&system_buffer_ptr);
        goto UtilitiesSystem_effec;
      }
      iVar2 = isspace((int)cVar1);
      if (iVar2 == 0) break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    }
    stack_special_x_20 = 0;
    if (local_buffer_70 != (char *)0x0) {
      if (*local_buffer_70 != '\0') {
        uVar3 = strtoul(local_buffer_70,&local_buffer_00000070,10);
        stack_special_x_20 = (uint64_t)uVar3;
      }
      if (local_buffer_70 != (char *)0x0) {
        if (*local_buffer_70 != '\0') {
          uVar4 = strtoul(local_buffer_70,&local_buffer_00000070,10);
          stack_special_x_20 = CONCAT44(uVar4,(int32_t)stack_special_x_20);
        }
        if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
          unaff_EBP = strtoul(local_buffer_70,&local_buffer_00000070,10);
        }
      }
    }
    uVar3 = (int)uVar9 + 0xc;
    uVar6 = uVar10;
    if (uVar7 < uVar3) {
      uVar7 = 0x20;
      if (0x20 < uVar3) {
        do {
          uVar7 = uVar7 * 2;
        } while (uVar7 < uVar3);
      }
      uVar6 = (**(code **)(*plStack0000000000000080 + 8))(plStack0000000000000080,uVar7);
      if ((int)uVar9 != 0) {
// WARNING: Subroutine does not return
        memcpy(uVar6,uVar10,uVar9);
      }
      (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,uVar10);
    }
    *(uint64_t *)(uVar9 + uVar6) = stack_special_x_20;
    *(uint *)((uint64_t *)(uVar9 + uVar6) + 1) = unaff_EBP;
    unaff_EBP = 0;
    uVar9 = (uint64_t)uVar3;
    uVar10 = uVar6;
  } while( true );
}
// 函数: void UtilitiesSystem_eff3d(int64_t *param_1)
void UtilitiesSystem_eff3d(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char *pcVar7;
  int unaff_EBP;
  char *unaff_RSI;
  uint unaff_EDI;
  int64_t *unaff_R13;
  uint unaff_R14D;
  int64_t unaff_R15;
  uint64_t stack_special_x_20;
  char *local_buffer_70;
  int64_t *local_buffer_80;
  uint *local_buffer_90;
  if (*unaff_RSI != (char)unaff_EDI) {
    do {
      iVar2 = unaff_EBP;
      unaff_RSI = unaff_RSI + 1;
      unaff_EBP = iVar2 + 1;
    } while (*unaff_RSI != (char)unaff_EDI);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,iVar2 + 2);
// WARNING: Subroutine does not return
    memcpy(uVar5);
  }
  local_buffer_70 = "";
  do {
    cVar1 = *local_buffer_70;
    pcVar7 = local_buffer_70;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = unaff_R15;
        *local_buffer_90 = unaff_R14D / 0xc;
        (**(code **)(*local_buffer_80 + 0x10))(local_buffer_80,&system_buffer_ptr);
        (**(code **)(*local_buffer_80 + 0x10))(local_buffer_80,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      if (iVar2 == 0) break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    stack_special_x_20 = 0;
    if (local_buffer_70 != (char *)0x0) {
      if (*local_buffer_70 != '\0') {
        uVar3 = strtoul(local_buffer_70,&local_buffer_00000070,10);
        stack_special_x_20 = (uint64_t)uVar3;
      }
      if (local_buffer_70 != (char *)0x0) {
        if (*local_buffer_70 != '\0') {
          uVar4 = strtoul(local_buffer_70,&local_buffer_00000070,10);
          stack_special_x_20 = CONCAT44(uVar4,(int32_t)stack_special_x_20);
        }
        if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
          unaff_EBP = strtoul(local_buffer_70,&local_buffer_00000070,10);
        }
      }
    }
    uVar3 = unaff_R14D + 0xc;
    lVar6 = unaff_R15;
    if (unaff_EDI < uVar3) {
      unaff_EDI = 0x20;
      if (0x20 < uVar3) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar3);
      }
      lVar6 = (**(code **)(*local_buffer_80 + 8))(local_buffer_80,unaff_EDI);
      if (unaff_R14D != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar6,unaff_R15,unaff_R14D);
      }
      (**(code **)(*local_buffer_80 + 0x10))(local_buffer_80,unaff_R15);
    }
    *(uint64_t *)((uint64_t)unaff_R14D + lVar6) = stack_special_x_20;
    *(int *)((uint64_t *)((uint64_t)unaff_R14D + lVar6) + 1) = unaff_EBP;
    unaff_EBP = 0;
    unaff_R15 = lVar6;
    unaff_R14D = uVar3;
  } while( true );
}
// 函数: void UtilitiesSystem_effec(void)
void UtilitiesSystem_effec(void)
{
  int64_t *local_buffer_80;
  (**(code **)(*local_buffer_80 + 0x10))(local_buffer_80,0);
  return;
}
// 函数: void UtilitiesSystem_f0010(void)
void UtilitiesSystem_f0010(void)
{
  return;
}
// 函数: void UtilitiesSystem_f0018(void)
void UtilitiesSystem_f0018(void)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  int32_t unaff_EBP;
  uint unaff_EDI;
  int64_t *unaff_R13;
  uint unaff_R14D;
  int64_t unaff_R15;
  uint64_t stack_special_x_20;
  char *local_buffer_70;
  int64_t *local_buffer_80;
  uint *local_buffer_90;
  do {
    stack_special_x_20 = 0;
    if (local_buffer_70 != (char *)0x0) {
      if (*local_buffer_70 != '\0') {
        uVar3 = strtoul(local_buffer_70,&local_buffer_00000070,10);
        stack_special_x_20 = (uint64_t)uVar3;
      }
      if (local_buffer_70 != (char *)0x0) {
        if (*local_buffer_70 != '\0') {
          uVar4 = strtoul(local_buffer_70,&local_buffer_00000070,10);
          stack_special_x_20 = CONCAT44(uVar4,(int32_t)stack_special_x_20);
        }
        if ((local_buffer_70 != (char *)0x0) && (*local_buffer_70 != '\0')) {
          unaff_EBP = strtoul(local_buffer_70,&local_buffer_00000070,10);
        }
      }
    }
    uVar3 = unaff_R14D + 0xc;
    lVar5 = unaff_R15;
    if (unaff_EDI < uVar3) {
      unaff_EDI = 0x20;
      if (0x20 < uVar3) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar3);
      }
      lVar5 = (**(code **)(*local_buffer_80 + 8))(local_buffer_80,unaff_EDI);
      if (unaff_R14D != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar5,unaff_R15,unaff_R14D);
      }
      (**(code **)(*local_buffer_80 + 0x10))(local_buffer_80,unaff_R15);
    }
    *(uint64_t *)((uint64_t)unaff_R14D + lVar5) = stack_special_x_20;
    *(int32_t *)((uint64_t *)((uint64_t)unaff_R14D + lVar5) + 1) = unaff_EBP;
    unaff_EBP = 0;
    cVar1 = *local_buffer_70;
    pcVar6 = local_buffer_70;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar5;
        *local_buffer_90 = uVar3 / 0xc;
        (**(code **)(*local_buffer_80 + 0x10))();
        (**(code **)(*local_buffer_80 + 0x10))(local_buffer_80,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R15 = lVar5;
      unaff_R14D = uVar3;
      if (iVar2 == 0) break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_f0110(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
void UtilitiesSystem_f0110(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
                  int32_t *param_5,int64_t *param_6)
{
  uint uVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  char *pcVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char *pcStackX_18;
  char *pcStackX_20;
  uVar8 = 0;
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar2 != '\0') {
    if (pcStackX_20 != (char *)0x0) {
      system_system_memory = system_system_memory + 1;
      pcVar9 = pcStackX_20;
      if (*pcStackX_20 != '\0') {
        do {
          iVar3 = (int)uVar8;
          uVar7 = iVar3 + 1;
          uVar8 = (uint64_t)uVar7;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        uVar5 = (**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
// WARNING: Subroutine does not return
        memcpy(uVar5,pcStackX_20,uVar7);
      }
      pcStackX_18 = "";
      uVar10 = uVar8;
      uVar11 = uVar8;
      uVar4 = param_5._0_4_;
      do {
        cVar2 = *pcStackX_18;
        pcVar9 = pcStackX_18;
        while( true ) {
          if (cVar2 == '\0') {
            *param_3 = uVar11;
            *param_5 = (int)(uVar10 >> 2);
            (**(code **)(*param_6 + 0x10))(param_6,&system_buffer_ptr);
            goto UtilitiesSystem_f0223;
          }
          iVar3 = isspace((int)cVar2);
          if (iVar3 == 0) break;
          cVar2 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        }
        if ((pcStackX_18 != (char *)0x0) && (*pcStackX_18 != '\0')) {
          uVar4 = strtoul(pcStackX_18,&pcStackX_18,10);
        }
        uVar7 = (int)uVar10 + 4;
        uVar6 = uVar11;
        if ((uint)uVar8 < uVar7) {
          uVar8 = 0x20;
          if (0x20 < uVar7) {
            do {
              uVar1 = (int)uVar8 * 2;
              uVar8 = (uint64_t)uVar1;
            } while (uVar1 < uVar7);
          }
          uVar6 = (**(code **)(*param_6 + 8))(param_6,uVar8);
          if ((int)uVar10 != 0) {
// WARNING: Subroutine does not return
            memcpy(uVar6,uVar11,uVar10);
          }
          (**(code **)(*param_6 + 0x10))(param_6,uVar11);
        }
        *(int32_t *)(uVar10 + uVar6) = uVar4;
        uVar10 = (uint64_t)uVar7;
        uVar11 = uVar6;
      } while( true );
    }
UtilitiesSystem_f0223:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address