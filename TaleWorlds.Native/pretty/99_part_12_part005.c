#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part005.c - 5 个函数

// 函数: void FUN_1807ca2e5(int64_t param_1)
void FUN_1807ca2e5(int64_t param_1)

{
  short sVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  short unaff_SI;
  uint unaff_R14D;
  int32_t unaff_R15D;
  uint64_t in_stack_00000060;
  
  sVar1 = *(short *)(unaff_RBX + 0x18e);
  if (sVar1 == 8) {
    *(int32_t *)(param_1 + 8) = unaff_EBP;
  }
  else if (sVar1 == 0x10) {
    *(int32_t *)(param_1 + 8) = 2;
  }
  else if (sVar1 == 0x18) {
    *(int32_t *)(param_1 + 8) = 3;
  }
  else {
    if (sVar1 != 0x20) goto LAB_1807ca2b6;
    *(int32_t *)(param_1 + 8) = 4;
  }
  iVar2 = *(int *)(*(int64_t *)(unaff_RBX + 8) + 8);
  if ((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) || ((iVar2 == 4 || (iVar2 == 5)))) {
    if (*(int *)(unaff_RBX + 0x200) != 0) {
      lVar3 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(unaff_RBX + 0x200),
                            &unknown_var_8368_ptr,0x178);
      *(int64_t *)(unaff_RBX + 0x1f8) = lVar3;
      if (lVar3 == 0) goto LAB_1807ca2b6;
    }
    *(uint *)(*(int64_t *)(unaff_RBX + 8) + 0xc) =
         (uint)*(ushort *)(*(int64_t *)(unaff_RBX + 0x230) + 2);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x10) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x230) + 4);
    if (*(uint *)(unaff_RBX + 0x114) < *(uint *)(unaff_RBX + 0x118)) {
      *(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x20) = *(uint *)(unaff_RBX + 0x114);
      *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x24) = *(int32_t *)(unaff_RBX + 0x118);
      *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x28) = 2;
    }
    if (((unaff_SI == 0x11) || (unaff_SI == 0x69)) && ((unaff_R14D >> 9 & 1) != 0)) {
      *(int32_t *)(unaff_RBX + 0xa4) = 2;
      *(uint *)(unaff_RBX + 0x200) = (uint)*(ushort *)(*(int64_t *)(unaff_RBX + 0x230) + 0xc);
      *(int32_t *)(unaff_RBX + 0x18) = unaff_R15D;
    }
    else {
      *(int32_t *)(unaff_RBX + 0xa4) = unaff_R15D;
      *(int32_t *)(unaff_RBX + 0x18) = unaff_R15D;
    }
  }
LAB_1807ca2b6:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807ca7f0(void)
void FUN_1807ca7f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1807cad80(void)
void FUN_1807cad80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1807caddf(void)
void FUN_1807caddf(void)

{
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t unaff_RBX;
  uint unaff_ESI;
  int32_t unaff_00000034;
  int64_t unaff_RDI;
  uint uVar7;
  int64_t in_R9;
  uint64_t uVar8;
  uint64_t in_stack_00001030;
  
  iVar4 = *(int *)(in_R9 + 8);
  uVar7 = *(uint *)(in_R9 + 0x14);
  if (iVar4 == 1) {
    iVar4 = 1;
  }
  else if (iVar4 == 2) {
    iVar4 = 2;
  }
  else if (iVar4 == 3) {
    iVar4 = 3;
  }
  else if ((iVar4 == 4) || (iVar4 == 5)) {
    iVar4 = 4;
  }
  else {
    iVar4 = 1;
  }
  uVar6 = iVar4 * *(int *)(in_R9 + 0xc);
  if ((((**(short **)(unaff_RDI + 0x230) - 1U & 0xfffd) == 0) && (uVar3 = uVar6, uVar6 != 0)) ||
     (uVar3 = *(uint *)(unaff_RDI + 0x200), *(uint *)(unaff_RDI + 0x200) != 0)) {
    uVar7 = uVar7 - uVar7 % uVar3;
  }
  uVar8 = CONCAT44(0,*(uint *)(in_R9 + 0x18));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = unaff_RBX * (uint64_t)uVar7;
  uVar5 = SUB168(auVar2 / auVar1,0);
  if ((((**(short **)(unaff_RDI + 0x230) - 1U & 0xfffd) == 0) && (uVar6 != 0)) ||
     (uVar6 = *(uint *)(unaff_RDI + 0x200), uVar6 != 0)) {
    uVar5 = (uint64_t)
            (uint)(SUB164(auVar2 / auVar1,0) - (int)((uVar5 & 0xffffffff) % (uint64_t)uVar6));
  }
  *(int *)(unaff_RDI + 0x204) = (int)(((uVar5 & 0xffffffff) * uVar8) / (uint64_t)uVar7);
  iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),*(int *)(unaff_RDI + 0x110) + (int)uVar5,
                        0);
  if ((iVar4 == 0) && (*(int64_t *)(unaff_RDI + 0x140) != CONCAT44(unaff_00000034,unaff_ESI))) {
    uVar7 = (int)unaff_RBX - *(int *)(unaff_RDI + 0x204);
    while (uVar6 = uVar7, uVar6 != 0) {
      iVar4 = FUN_1807730d0();
      *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) + unaff_ESI;
      if (iVar4 != 0) break;
      uVar7 = unaff_ESI;
      if (unaff_ESI <= uVar6) {
        uVar7 = uVar6 - unaff_ESI;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001030 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807cae97(uint param_1,uint64_t param_2,uint param_3,int64_t param_4)
void FUN_1807cae97(uint param_1,uint64_t param_2,uint param_3,int64_t param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint64_t in_RAX;
  int unaff_EBX;
  uint unaff_ESI;
  int32_t unaff_00000034;
  int64_t unaff_RDI;
  uint64_t in_R10;
  uint64_t in_stack_00001030;
  
  if ((param_1 != 0) || (param_1 = *(uint *)(unaff_RDI + 0x200), param_1 != 0)) {
    param_3 = param_3 - (int)((in_RAX & 0xffffffff) % (uint64_t)param_1);
  }
  *(int *)(unaff_RDI + 0x204) = (int)(((uint64_t)param_3 * param_4) / in_R10);
  iVar3 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),*(int *)(unaff_RDI + 0x110) + param_3,0);
  if ((iVar3 == 0) && (*(int64_t *)(unaff_RDI + 0x140) != CONCAT44(unaff_00000034,unaff_ESI))) {
    uVar2 = unaff_EBX - *(int *)(unaff_RDI + 0x204);
    while (uVar1 = uVar2, uVar1 != 0) {
      iVar3 = FUN_1807730d0();
      *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) + unaff_ESI;
      if (iVar3 != 0) break;
      uVar2 = unaff_ESI;
      if (unaff_ESI <= uVar1) {
        uVar2 = uVar1 - unaff_ESI;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001030 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1807cb020(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lStackX_8;
  
  if ((*(int *)(param_1 + 0x1e0) != 0) && (*(int64_t *)(param_1 + 0x1e8) != 0)) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x1e0)) {
      do {
        lStackX_8 = (int64_t)iVar1 * 0x13c + *(int64_t *)(param_1 + 0x1e8);
        (**(code **)(*param_3 + 0x108))
                  (param_3,*(int32_t *)(lStackX_8 + 0x30),2,*(uint64_t *)(lStackX_8 + 0x20),
                   &lStackX_8,0,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x1e0));
    }
    FUN_180752af0(param_3);
    param_3[0x20] = *(int64_t *)(param_1 + 0x1e8);
    *(uint64_t *)(param_1 + 0x1e8) = 0;
  }
  return 0;
}



uint64_t FUN_1807cb04c(void)

{
  int in_EAX;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  int iVar1;
  
  iVar1 = 0;
  if (0 < in_EAX) {
    do {
      (**(code **)(*unaff_RSI + 0x108))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0x1e0));
  }
  FUN_180752af0();
  unaff_RSI[0x20] = *(int64_t *)(unaff_RBX + 0x1e8);
  *(uint64_t *)(unaff_RBX + 0x1e8) = 0;
  return 0;
}



uint64_t FUN_1807cb0d3(void)

{
  return 0;
}



uint64_t FUN_1807cb0e0(int64_t param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint64_t uVar4;
  int iVar5;
  
  *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x18) = 0;
  FUN_18080d060(param_1,0);
  if (*(char *)(param_1 + 0xbe9) == '\0') {
    cVar2 = '\0';
    do {
      if (*(int *)(param_1 + 0xbec) == 0) {
        if ((cVar2 == '\0') || (*(char *)(param_1 + 0xbea) != '\0')) {
          uVar3 = *(uint *)(param_1 + 0xc0c);
          uVar4 = (uint64_t)(int)uVar3;
          if (-1 < (int)uVar3) {
            *(uint *)(param_1 + 0xbfc) = uVar3;
            cVar2 = *(char *)(uVar4 + 0x290 + param_1);
            while (cVar2 == -2) {
              uVar3 = (int)uVar4 + 1;
              *(uint *)(param_1 + 0xbfc) = uVar3;
              if (*(int *)(param_1 + 0x8ec) <= (int)uVar3) {
                if (*(char *)(param_1 + 0xbea) == '\0') {
                  FUN_18080d690(param_1);
                }
                uVar3 = *(uint *)(param_1 + 0xbd0);
                *(uint *)(param_1 + 0xbfc) = uVar3;
              }
              uVar4 = (uint64_t)uVar3;
              cVar2 = *(char *)((int64_t)(int)uVar3 + 0x290 + param_1);
            }
            if (*(char *)((int64_t)(int)uVar3 + 0x290 + param_1) == -1) {
              *(int32_t *)(param_1 + 0xbfc) = *(int32_t *)(param_1 + 0xbd0);
            }
            *(int32_t *)(param_1 + 0xc0c) = 0xffffffff;
          }
          if (-1 < *(int *)(param_1 + 0xc08)) {
            *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xc08);
            *(int32_t *)(param_1 + 0xc08) = 0xffffffff;
          }
          FUN_1807ce620(param_1,0);
          if (*(int *)(param_1 + 0xc08) == -1) {
            iVar5 = *(int *)(param_1 + 0xbf8) + 1;
            *(int *)(param_1 + 0xc08) = iVar5;
            if (*(int *)(*(int64_t *)(param_1 + 0x278) +
                        (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x290 + param_1)
                        * 0x10) <= iVar5) {
              iVar5 = *(int *)(param_1 + 0xbfc) + 1;
              *(int *)(param_1 + 0xc0c) = iVar5;
              if (*(int *)(param_1 + 0x8ec) <= iVar5) {
                *(int32_t *)(param_1 + 0xc0c) = *(int32_t *)(param_1 + 0xbd0);
              }
              *(int32_t *)(param_1 + 0xc08) = 0;
            }
          }
        }
        else {
          FUN_18080d690(param_1);
        }
      }
      if (*(int *)(param_1 + 0xbf0) == 0) {
        *(int8_t *)(param_1 + 0xbe9) = 1;
      }
      else {
        *(int *)(param_1 + 0xbec) = *(int *)(param_1 + 0xbec) + 1;
        if (*(int *)(param_1 + 0xbf0) + *(int *)(param_1 + 0xc00) <= *(int *)(param_1 + 0xbec)) {
          *(int32_t *)(param_1 + 0xc00) = 0;
          *(int32_t *)(param_1 + 0xbec) = 0;
        }
      }
      *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x854);
      piVar1 = (int *)(*(int64_t *)(param_1 + 8) + 0x18);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x854);
      cVar2 = *(char *)(param_1 + 0xbe9);
    } while (cVar2 == '\0');
  }
  FUN_18080d690(param_1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807cb2b0(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18080c8a0();
  if ((int)uVar1 == 0) {
    if (*(int64_t *)(param_1 + 0x900) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x900),
                    &unknown_var_8528_ptr,0xc62,1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001807cc51b)
// WARNING: Removing unreachable block (ram,0x0001807cc520)
// WARNING: Removing unreachable block (ram,0x0001807cc53a)
// WARNING: Removing unreachable block (ram,0x0001807cc55d)
// WARNING: Removing unreachable block (ram,0x0001807cc59d)
// WARNING: Removing unreachable block (ram,0x0001807cc5c5)
// WARNING: Removing unreachable block (ram,0x0001807cc5e3)
// WARNING: Removing unreachable block (ram,0x0001807cc6d0)
// WARNING: Removing unreachable block (ram,0x0001807cc706)
// WARNING: Removing unreachable block (ram,0x0001807cc70b)
// WARNING: Removing unreachable block (ram,0x0001807cc712)
// WARNING: Removing unreachable block (ram,0x0001807cc720)
// WARNING: Removing unreachable block (ram,0x0001807cc6df)
// WARNING: Removing unreachable block (ram,0x0001807cc6e6)
// WARNING: Removing unreachable block (ram,0x0001807cc6f0)
// WARNING: Removing unreachable block (ram,0x0001807cc704)
// WARNING: Removing unreachable block (ram,0x0001807cc735)
// WARNING: Removing unreachable block (ram,0x0001807cc776)
// WARNING: Removing unreachable block (ram,0x0001807cc7c1)
// WARNING: Removing unreachable block (ram,0x0001807cc7d2)
// WARNING: Removing unreachable block (ram,0x0001807cc7db)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




