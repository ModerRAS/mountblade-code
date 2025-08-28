#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part020.c - 18 个函数

// 函数: void FUN_1806efb7c(longlong *param_1)
void FUN_1806efb7c(longlong *param_1)

{
  char cVar1;
  int8_t uVar2;
  int iVar3;
  char *pcVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar9;
  uint unaff_EBP;
  ulonglong *unaff_R13;
  ulonglong uVar10;
  longlong *plStack0000000000000060;
  char *in_stack_00000070;
  char *in_stack_00000078;
  int8_t uStack0000000000000080;
  uint8_t uStack0000000000000081;
  uint uVar8;
  
  pcVar9 = in_stack_00000078;
  plStack0000000000000060 = param_1;
  if (in_stack_00000078 != (char *)0x0) {
    system_system_memory = system_system_memory + 1;
    pcVar4 = in_stack_00000078;
    uVar7 = unaff_EBP;
    if (*in_stack_00000078 != (char)unaff_EBP) {
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != (char)unaff_EBP);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 + 2);
                    // WARNING: Subroutine does not return
      memcpy(uVar5,pcVar9,uVar7);
    }
    in_stack_00000070 = "";
    uVar10 = (ulonglong)unaff_EBP;
    uVar2 = uStack0000000000000080;
    while (cVar1 = *in_stack_00000070, pcVar9 = in_stack_00000070, cVar1 != '\0') {
      while (iVar3 = isspace((int)cVar1), iVar3 != 0) {
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
        if (cVar1 == '\0') goto LAB_1806efc28;
      }
      if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
        uVar2 = strtoul(in_stack_00000070,&stack0x00000070,10);
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
    *(uint *)CONCAT71(uStack0000000000000081,uStack0000000000000080) = uVar7;
    (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,&system_buffer_ptr);
  }
  (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,0);
  return;
}






// 函数: void FUN_1806efba9(longlong *param_1)
void FUN_1806efba9(longlong *param_1)

{
  char cVar1;
  int8_t uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  uint unaff_EBP;
  char *unaff_RSI;
  uint unaff_EDI;
  longlong *unaff_R13;
  longlong unaff_R14;
  longlong *in_stack_00000060;
  char *in_stack_00000070;
  int8_t uStack0000000000000080;
  uint8_t uStack0000000000000081;
  
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
  in_stack_00000070 = "";
  uVar2 = uStack0000000000000080;
  while (cVar1 = *in_stack_00000070, pcVar7 = in_stack_00000070, cVar1 != '\0') {
    while (iVar3 = isspace((int)cVar1), iVar3 != 0) {
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\0') goto LAB_1806efc28;
    }
    if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
      uVar2 = strtoul(in_stack_00000070,&stack0x00000070,10);
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
      lVar5 = (**(code **)(*in_stack_00000060 + 8))(in_stack_00000060,unaff_EDI);
      if (unaff_EBP != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar5,unaff_R14,unaff_EBP);
      }
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,unaff_R14);
    }
    *(int8_t *)((ulonglong)unaff_EBP + lVar5) = uVar2;
    unaff_R14 = lVar5;
    unaff_EBP = uVar6;
  }
LAB_1806efc28:
  *unaff_R13 = unaff_R14;
  *(uint *)CONCAT71(uStack0000000000000081,uStack0000000000000080) = unaff_EBP;
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,&system_buffer_ptr);
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
  return;
}






// 函数: void FUN_1806efc53(void)
void FUN_1806efc53(void)

{
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
  return;
}






// 函数: void FUN_1806efc6f(void)
void FUN_1806efc6f(void)

{
  return;
}






// 函数: void FUN_1806efc77(void)
void FUN_1806efc77(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_EBP;
  uint unaff_EDI;
  longlong *unaff_R13;
  longlong unaff_R14;
  int8_t unaff_R15B;
  longlong *in_stack_00000060;
  char *in_stack_00000070;
  uint *in_stack_00000080;
  
  do {
    if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
      unaff_R15B = strtoul(in_stack_00000070,&stack0x00000070,10);
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
      lVar3 = (**(code **)(*in_stack_00000060 + 8))(in_stack_00000060,unaff_EDI);
      if (unaff_EBP != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R14,unaff_EBP);
      }
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,unaff_R14);
    }
    *(int8_t *)((ulonglong)unaff_EBP + lVar3) = unaff_R15B;
    cVar1 = *in_stack_00000070;
    pcVar5 = in_stack_00000070;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *in_stack_00000080 = uVar4;
        (**(code **)(*in_stack_00000060 + 0x10))();
        (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
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




// 函数: void FUN_1806efd00(longlong *param_1,uint64_t param_2,ulonglong *param_3,int32_t *param_4,
void FUN_1806efd00(longlong *param_1,uint64_t param_2,ulonglong *param_3,int32_t *param_4,
                  int32_t *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int16_t uVar3;
  int iVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
          uVar10 = (ulonglong)uVar7;
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
            goto FUN_1806efe15;
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
              uVar10 = (ulonglong)uVar1;
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
        uVar9 = (ulonglong)uVar7;
        uVar11 = uVar6;
      } while( true );
    }
FUN_1806efe15:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806efd3c(longlong *param_1)
void FUN_1806efd3c(longlong *param_1)

{
  char cVar1;
  int16_t uVar2;
  int iVar3;
  char *pcVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar9;
  uint unaff_ESI;
  ulonglong *unaff_R13;
  ulonglong uVar10;
  longlong *plStack0000000000000060;
  char *in_stack_00000070;
  char *in_stack_00000078;
  int16_t uStack0000000000000080;
  uint8_t uStack0000000000000082;
  uint uVar8;
  
  pcVar9 = in_stack_00000078;
  plStack0000000000000060 = param_1;
  if (in_stack_00000078 != (char *)0x0) {
    system_system_memory = system_system_memory + 1;
    pcVar4 = in_stack_00000078;
    uVar7 = unaff_ESI;
    if (*in_stack_00000078 != (char)unaff_ESI) {
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != (char)unaff_ESI);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 + 2);
                    // WARNING: Subroutine does not return
      memcpy(uVar5,pcVar9,uVar7);
    }
    in_stack_00000070 = "";
    uVar10 = (ulonglong)unaff_ESI;
    uVar2 = uStack0000000000000080;
    while (cVar1 = *in_stack_00000070, pcVar9 = in_stack_00000070, cVar1 != '\0') {
      while (iVar3 = isspace((int)cVar1), iVar3 != 0) {
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
        if (cVar1 == '\0') goto LAB_1806efde8;
      }
      if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
        uVar2 = strtoul(in_stack_00000070,&stack0x00000070,10);
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
    *(uint *)CONCAT62(uStack0000000000000082,uStack0000000000000080) = uVar7 >> 1;
    (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,&system_buffer_ptr);
  }
  (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,0);
  return;
}






// 函数: void FUN_1806efd69(longlong *param_1)
void FUN_1806efd69(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int16_t uVar3;
  int iVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  char *unaff_RBP;
  uint unaff_ESI;
  uint unaff_EDI;
  longlong *unaff_R13;
  longlong unaff_R14;
  longlong *in_stack_00000060;
  char *in_stack_00000070;
  int16_t uStack0000000000000080;
  uint8_t uStack0000000000000082;
  
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
  in_stack_00000070 = "";
  uVar3 = uStack0000000000000080;
  while (cVar2 = *in_stack_00000070, pcVar8 = in_stack_00000070, cVar2 != '\0') {
    while (iVar4 = isspace((int)cVar2), iVar4 != 0) {
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      if (cVar2 == '\0') goto LAB_1806efde8;
    }
    if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
      uVar3 = strtoul(in_stack_00000070,&stack0x00000070,10);
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
      lVar6 = (**(code **)(*in_stack_00000060 + 8))(in_stack_00000060,unaff_EDI);
      if (unaff_ESI != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar6,unaff_R14,unaff_ESI);
      }
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,unaff_R14);
    }
    *(int16_t *)((ulonglong)unaff_ESI + lVar6) = uVar3;
    unaff_R14 = lVar6;
    unaff_ESI = uVar1;
  }
LAB_1806efde8:
  *unaff_R13 = unaff_R14;
  *(uint *)CONCAT62(uStack0000000000000082,uStack0000000000000080) = unaff_ESI >> 1;
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,&system_buffer_ptr);
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
  return;
}






// 函数: void FUN_1806efe15(void)
void FUN_1806efe15(void)

{
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
  return;
}






// 函数: void FUN_1806efe31(void)
void FUN_1806efe31(void)

{
  return;
}






// 函数: void FUN_1806efe39(void)
void FUN_1806efe39(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_ESI;
  uint unaff_EDI;
  longlong *unaff_R13;
  longlong unaff_R14;
  int16_t unaff_R15W;
  longlong *in_stack_00000060;
  char *in_stack_00000070;
  uint *in_stack_00000080;
  
  do {
    if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
      unaff_R15W = strtoul(in_stack_00000070,&stack0x00000070,10);
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
      lVar3 = (**(code **)(*in_stack_00000060 + 8))(in_stack_00000060,unaff_EDI);
      if (unaff_ESI != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R14,unaff_ESI);
      }
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,unaff_R14);
    }
    *(int16_t *)((ulonglong)unaff_ESI + lVar3) = unaff_R15W;
    cVar1 = *in_stack_00000070;
    pcVar5 = in_stack_00000070;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *in_stack_00000080 = uVar4 >> 1;
        (**(code **)(*in_stack_00000060 + 0x10))();
        (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
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




// 函数: void FUN_1806efec0(longlong *param_1,uint64_t param_2,longlong *param_3,int32_t *param_4,
void FUN_1806efec0(longlong *param_1,uint64_t param_2,longlong *param_3,int32_t *param_4,
                  int32_t *param_5,longlong *param_6)

{
  char cVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcStackX_8;
  char *pcStackX_20;
  uint64_t uStack_48;
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
            goto FUN_1806effec;
          }
          iVar7 = isspace((int)cVar1);
          if (iVar7 == 0) break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        }
        uStack_48 = 0;
        if (pcStackX_8 != (char *)0x0) {
          if (*pcStackX_8 != '\0') {
            uVar2 = strtoul(pcStackX_8,&pcStackX_8,10);
            uStack_48 = (ulonglong)uVar2;
          }
          if (pcStackX_8 != (char *)0x0) {
            if (*pcStackX_8 != '\0') {
              uVar3 = strtoul(pcStackX_8,&pcStackX_8,10);
              uStack_48 = CONCAT44(uVar3,(int32_t)uStack_48);
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
        *(ulonglong *)(uVar11 + lVar6) = uStack_48;
        *(int32_t *)((ulonglong *)(uVar11 + lVar6) + 1) = uVar4;
        uVar11 = (ulonglong)uVar2;
        lVar12 = lVar6;
      } while( true );
    }
FUN_1806effec:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806eff02(longlong *param_1)
void FUN_1806eff02(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  uint unaff_EBP;
  ulonglong *unaff_R13;
  ulonglong uVar9;
  ulonglong uVar10;
  uint64_t uStackX_20;
  char *in_stack_00000070;
  longlong *plStack0000000000000080;
  char *in_stack_00000088;
  int32_t *in_stack_00000090;
  
  plStack0000000000000080 = param_1;
  if (in_stack_00000088 == (char *)0x0) {
FUN_1806effec:
    (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,0);
    return;
  }
  system_system_memory = system_system_memory + 1;
  pcVar8 = in_stack_00000088;
  uVar7 = unaff_EBP;
  if (*in_stack_00000088 != (char)unaff_EBP) {
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != (char)unaff_EBP);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar3 + 2);
                    // WARNING: Subroutine does not return
    memcpy(uVar5,in_stack_00000088,uVar7);
  }
  in_stack_00000070 = "";
  uVar9 = (ulonglong)unaff_EBP;
  uVar10 = (ulonglong)unaff_EBP;
  do {
    cVar1 = *in_stack_00000070;
    pcVar8 = in_stack_00000070;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = uVar10;
        *in_stack_00000090 = (int)(uVar9 / 0xc);
        (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,&system_buffer_ptr);
        goto FUN_1806effec;
      }
      iVar2 = isspace((int)cVar1);
      if (iVar2 == 0) break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    }
    uStackX_20 = 0;
    if (in_stack_00000070 != (char *)0x0) {
      if (*in_stack_00000070 != '\0') {
        uVar3 = strtoul(in_stack_00000070,&stack0x00000070,10);
        uStackX_20 = (ulonglong)uVar3;
      }
      if (in_stack_00000070 != (char *)0x0) {
        if (*in_stack_00000070 != '\0') {
          uVar4 = strtoul(in_stack_00000070,&stack0x00000070,10);
          uStackX_20 = CONCAT44(uVar4,(int32_t)uStackX_20);
        }
        if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
          unaff_EBP = strtoul(in_stack_00000070,&stack0x00000070,10);
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
    *(ulonglong *)(uVar9 + uVar6) = uStackX_20;
    *(uint *)((ulonglong *)(uVar9 + uVar6) + 1) = unaff_EBP;
    unaff_EBP = 0;
    uVar9 = (ulonglong)uVar3;
    uVar10 = uVar6;
  } while( true );
}






// 函数: void FUN_1806eff3d(longlong *param_1)
void FUN_1806eff3d(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  char *pcVar7;
  int unaff_EBP;
  char *unaff_RSI;
  uint unaff_EDI;
  longlong *unaff_R13;
  uint unaff_R14D;
  longlong unaff_R15;
  uint64_t uStackX_20;
  char *in_stack_00000070;
  longlong *in_stack_00000080;
  uint *in_stack_00000090;
  
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
  in_stack_00000070 = "";
  do {
    cVar1 = *in_stack_00000070;
    pcVar7 = in_stack_00000070;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = unaff_R15;
        *in_stack_00000090 = unaff_R14D / 0xc;
        (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,&system_buffer_ptr);
        (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      if (iVar2 == 0) break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    uStackX_20 = 0;
    if (in_stack_00000070 != (char *)0x0) {
      if (*in_stack_00000070 != '\0') {
        uVar3 = strtoul(in_stack_00000070,&stack0x00000070,10);
        uStackX_20 = (ulonglong)uVar3;
      }
      if (in_stack_00000070 != (char *)0x0) {
        if (*in_stack_00000070 != '\0') {
          uVar4 = strtoul(in_stack_00000070,&stack0x00000070,10);
          uStackX_20 = CONCAT44(uVar4,(int32_t)uStackX_20);
        }
        if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
          unaff_EBP = strtoul(in_stack_00000070,&stack0x00000070,10);
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
      lVar6 = (**(code **)(*in_stack_00000080 + 8))(in_stack_00000080,unaff_EDI);
      if (unaff_R14D != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar6,unaff_R15,unaff_R14D);
      }
      (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,unaff_R15);
    }
    *(ulonglong *)((ulonglong)unaff_R14D + lVar6) = uStackX_20;
    *(int *)((ulonglong *)((ulonglong)unaff_R14D + lVar6) + 1) = unaff_EBP;
    unaff_EBP = 0;
    unaff_R15 = lVar6;
    unaff_R14D = uVar3;
  } while( true );
}






// 函数: void FUN_1806effec(void)
void FUN_1806effec(void)

{
  longlong *in_stack_00000080;
  
  (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,0);
  return;
}






// 函数: void FUN_1806f0010(void)
void FUN_1806f0010(void)

{
  return;
}






// 函数: void FUN_1806f0018(void)
void FUN_1806f0018(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  longlong lVar5;
  char *pcVar6;
  int32_t unaff_EBP;
  uint unaff_EDI;
  longlong *unaff_R13;
  uint unaff_R14D;
  longlong unaff_R15;
  uint64_t uStackX_20;
  char *in_stack_00000070;
  longlong *in_stack_00000080;
  uint *in_stack_00000090;
  
  do {
    uStackX_20 = 0;
    if (in_stack_00000070 != (char *)0x0) {
      if (*in_stack_00000070 != '\0') {
        uVar3 = strtoul(in_stack_00000070,&stack0x00000070,10);
        uStackX_20 = (ulonglong)uVar3;
      }
      if (in_stack_00000070 != (char *)0x0) {
        if (*in_stack_00000070 != '\0') {
          uVar4 = strtoul(in_stack_00000070,&stack0x00000070,10);
          uStackX_20 = CONCAT44(uVar4,(int32_t)uStackX_20);
        }
        if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
          unaff_EBP = strtoul(in_stack_00000070,&stack0x00000070,10);
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
      lVar5 = (**(code **)(*in_stack_00000080 + 8))(in_stack_00000080,unaff_EDI);
      if (unaff_R14D != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar5,unaff_R15,unaff_R14D);
      }
      (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,unaff_R15);
    }
    *(ulonglong *)((ulonglong)unaff_R14D + lVar5) = uStackX_20;
    *(int32_t *)((ulonglong *)((ulonglong)unaff_R14D + lVar5) + 1) = unaff_EBP;
    unaff_EBP = 0;
    cVar1 = *in_stack_00000070;
    pcVar6 = in_stack_00000070;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar5;
        *in_stack_00000090 = uVar3 / 0xc;
        (**(code **)(*in_stack_00000080 + 0x10))();
        (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,0);
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




// 函数: void FUN_1806f0110(longlong *param_1,uint64_t param_2,ulonglong *param_3,int32_t *param_4,
void FUN_1806f0110(longlong *param_1,uint64_t param_2,ulonglong *param_3,int32_t *param_4,
                  int32_t *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
          uVar8 = (ulonglong)uVar7;
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
            goto FUN_1806f0223;
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
              uVar8 = (ulonglong)uVar1;
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
        uVar10 = (ulonglong)uVar7;
        uVar11 = uVar6;
      } while( true );
    }
FUN_1806f0223:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




