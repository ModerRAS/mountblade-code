#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part474.c - 6 个函数
// 函数: void function_51fa48(int64_t param_1,int param_2)
void function_51fa48(int64_t param_1,int param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int8_t uVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  uint64_t local_var_70;
  if ((param_2 == 1) || (*(int *)(param_1 + 0x570) != 1)) goto label_51fb03;
  lVar9 = *(int64_t *)(param_1 + 0x6e0);
  iVar6 = *(int *)(lVar9 + 0x14a8);
  if (iVar6 == 0) {
    bVar11 = *(char *)(lVar9 + 0x2024) == (char)iVar6;
    if (*(char *)(lVar9 + 0x2024) == (char)iVar6) goto LAB_18051fb42;
LAB_18051faab:
    cVar3 = '\x01';
  }
  else {
    bVar11 = (iVar6 - 1U & 0xfffffffd) == 0;
    if ((iVar6 - 2U & 0xfffffffd) == 0) goto LAB_18051faab;
LAB_18051fb42:
    cVar3 = '\0';
  }
  if ((bVar11 != false) || (cVar3 != '\0')) {
    function_511990(param_1,*(int32_t *)(lVar9 + 0x14b4),0xffffffff,bVar11,cVar3);
  }
  lVar9 = *(int64_t *)(param_1 + 0x6e0);
  if (-1 < *(int *)(lVar9 + 0x14b4)) {
    *(uint64_t *)(lVar9 + 0x14b4) = 0xffffffffffffffff;
    *(int32_t *)(lVar9 + 0x1728) = 0xffffffff;
  }
label_51fb03:
  if (param_2 == 5) {
    lVar9 = *(int64_t *)(param_1 + 0x8d8);
    if (*(char *)(lVar9 + 0x87a93c) == '\0') {
      uVar5 = (uint)(*(int64_t *)(lVar9 + 0x87a920) - *(int64_t *)(lVar9 + 0x87a918) >> 3);
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0x87a938);
    }
    if (0 < (int)uVar5) {
      lVar9 = 0;
      uVar8 = (uint64_t)uVar5;
      do {
        lVar1 = *(int64_t *)(param_1 + 0x8d8);
        lVar7 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar7 = *(int64_t *)(lVar1 + 0x87a918);
        }
        lVar1 = *(int64_t *)(lVar9 + lVar7);
        if (-1 < *(int *)(lVar1 + 0x10)) {
          lVar7 = *(int64_t *)(lVar1 + 0x6e0);
          if (*(char *)(lVar7 + 0x21c0) == '\0') {
            iVar6 = *(int *)(lVar7 + 0x14b4);
          }
          else {
            iVar6 = *(int *)(lVar7 + 0x21c4);
          }
          if (iVar6 == *(int *)(param_1 + 0x10)) {
            iVar6 = *(int *)(lVar7 + 0x14a8);
            if (iVar6 == 0) {
              bVar11 = *(char *)(lVar7 + 0x2024) == (char)iVar6;
              if (*(char *)(lVar7 + 0x2024) == (char)iVar6) goto LAB_18051fc9f;
LAB_18051fbf9:
              uVar4 = 1;
            }
            else {
              bVar11 = (iVar6 - 1U & 0xfffffffd) == 0;
              if ((iVar6 - 2U & 0xfffffffd) == 0) goto LAB_18051fbf9;
LAB_18051fc9f:
              uVar4 = 0;
            }
            function_511990(lVar1,*(int *)(param_1 + 0x10),0xffffffff,bVar11,uVar4);
            *(uint64_t *)(lVar7 + 0x14b4) = 0xffffffffffffffff;
            *(int32_t *)(lVar7 + 0x1728) = 0xffffffff;
          }
        }
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x564);
      if (iVar6 != -1) {
        lVar9 = *(int64_t *)(param_1 + 0x8d8);
        function_52e450(param_1,0xffffffff,0,0);
        SystemCore_Validator0((int64_t)iVar6 * 0xa60 + lVar9 + 0x30a0,0xffffffff);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x560);
      if (iVar6 != -1) {
        lVar9 = *(int64_t *)(param_1 + 0x8d8);
        SystemCore_Validator0(param_1,0xffffffff);
        function_52e450((int64_t)iVar6 * 0xa60 + lVar9 + 0x30a0,0xffffffff,0,0);
      }
    }
  }
  else if (param_2 == 2) {
    lVar9 = *(int64_t *)(param_1 + 0x8d8);
    if (*(char *)(lVar9 + 0x87a93c) == '\0') {
      uVar5 = (uint)(*(int64_t *)(lVar9 + 0x87a920) - *(int64_t *)(lVar9 + 0x87a918) >> 3);
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0x87a938);
    }
    if (0 < (int)uVar5) {
      lVar9 = 0;
      uVar8 = (uint64_t)uVar5;
      do {
        lVar1 = *(int64_t *)(param_1 + 0x8d8);
        lVar7 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar7 = *(int64_t *)(lVar1 + 0x87a918);
        }
        if (-1 < *(int *)(*(int64_t *)(lVar9 + lVar7) + 0x10)) {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar9 + lVar7) + 0x6e0);
          if (*(char *)(lVar1 + 0x21c0) == '\0') {
            iVar6 = *(int *)(lVar1 + 0x14b4);
          }
          else {
            iVar6 = *(int *)(lVar1 + 0x21c4);
          }
          if (iVar6 == *(int *)(param_1 + 0x10)) {
            local_var_70 = 0xffffffffffffffff;
            function_5d1c80(lVar1,&local_buffer_00000070,0);
            *(int32_t *)(lVar1 + 0x12dc) = 0xffffffff;
            SystemFunction_0001805da580();
          }
        }
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  *(int *)(param_1 + 0x568) = param_2;
  if (*(char *)(param_1 + 0x984) != '\0') {
    lVar9 = *(int64_t *)(param_1 + 0x738);
    *(int *)(lVar9 + 0x194) = param_2;
    if ((*(int *)(param_1 + 0x568) == 1) || (*(char *)(param_1 + 0xa50) == '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(int8_t *)(lVar9 + 0x199) = uVar4;
    if ((param_2 != 5) && (*(char *)(lVar9 + 0x98) != '\0')) {
      lVar9 = *(int64_t *)(param_1 + 0x8d8);
      lVar7 = (int64_t)*(int *)(param_1 + 0x564) * 0xa60;
      lVar1 = *(int64_t *)(lVar7 + 0x37d8 + lVar9);
      if (*(char *)(lVar1 + 0x99) != '\0') {
        lVar10 = (int64_t)*(int *)(lVar7 + 0x3600 + lVar9) * 0xa60;
        lVar2 = *(int64_t *)(lVar7 + 0x3978 + lVar9);
        if (*(int *)(lVar10 + 0x3608 + lVar2) == 1) {
          *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar10 + 0x3a20 + lVar2);
          return;
        }
      }
      *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar7 + 0x3a20 + lVar9);
    }
  }
  return;
}
// 函数: void function_51fb03(void)
void function_51fb03(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t unaff_RDI;
  int64_t lVar9;
  int unaff_R14D;
  bool bVar10;
  uint64_t local_var_70;
  if (unaff_R14D == 5) {
    lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
    if (*(char *)(lVar8 + 0x87a93c) == '\0') {
      uVar4 = (uint)(*(int64_t *)(lVar8 + 0x87a920) - *(int64_t *)(lVar8 + 0x87a918) >> 3);
    }
    else {
      uVar4 = *(uint *)(lVar8 + 0x87a938);
    }
    if (0 < (int)uVar4) {
      lVar8 = 0;
      uVar7 = (uint64_t)uVar4;
      do {
        lVar1 = *(int64_t *)(unaff_RDI + 0x8d8);
        lVar6 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar6 = *(int64_t *)(lVar1 + 0x87a918);
        }
        lVar1 = *(int64_t *)(lVar8 + lVar6);
        if (-1 < *(int *)(lVar1 + 0x10)) {
          lVar6 = *(int64_t *)(lVar1 + 0x6e0);
          if (*(char *)(lVar6 + 0x21c0) == '\0') {
            iVar5 = *(int *)(lVar6 + 0x14b4);
          }
          else {
            iVar5 = *(int *)(lVar6 + 0x21c4);
          }
          if (iVar5 == *(int *)(unaff_RDI + 0x10)) {
            iVar5 = *(int *)(lVar6 + 0x14a8);
            if (iVar5 == 0) {
              bVar10 = *(char *)(lVar6 + 0x2024) == (char)iVar5;
              if (*(char *)(lVar6 + 0x2024) == (char)iVar5) goto LAB_18051fc9f;
LAB_18051fbf9:
              uVar3 = 1;
            }
            else {
              bVar10 = (iVar5 - 1U & 0xfffffffd) == 0;
              if ((iVar5 - 2U & 0xfffffffd) == 0) goto LAB_18051fbf9;
LAB_18051fc9f:
              uVar3 = 0;
            }
            function_511990(lVar1,*(int *)(unaff_RDI + 0x10),0xffffffff,bVar10,uVar3);
            *(uint64_t *)(lVar6 + 0x14b4) = 0xffffffffffffffff;
            *(int32_t *)(lVar6 + 0x1728) = 0xffffffff;
          }
        }
        lVar8 = lVar8 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((*(byte *)(unaff_RDI + 0x56c) & 1) == 0) {
      iVar5 = *(int *)(unaff_RDI + 0x564);
      if (iVar5 != -1) {
        lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
        function_52e450();
        SystemCore_Validator0((int64_t)iVar5 * 0xa60 + lVar8 + 0x30a0,0xffffffff);
      }
    }
    else {
      iVar5 = *(int *)(unaff_RDI + 0x560);
      if (iVar5 != -1) {
        lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
        SystemCore_Validator0();
        function_52e450((int64_t)iVar5 * 0xa60 + lVar8 + 0x30a0,0xffffffff);
      }
    }
  }
  else if (unaff_R14D == 2) {
    lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
    if (*(char *)(lVar8 + 0x87a93c) == '\0') {
      uVar4 = (uint)(*(int64_t *)(lVar8 + 0x87a920) - *(int64_t *)(lVar8 + 0x87a918) >> 3);
    }
    else {
      uVar4 = *(uint *)(lVar8 + 0x87a938);
    }
    if (0 < (int)uVar4) {
      lVar8 = 0;
      uVar7 = (uint64_t)uVar4;
      do {
        lVar1 = *(int64_t *)(unaff_RDI + 0x8d8);
        lVar6 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar6 = *(int64_t *)(lVar1 + 0x87a918);
        }
        if (-1 < *(int *)(*(int64_t *)(lVar8 + lVar6) + 0x10)) {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar8 + lVar6) + 0x6e0);
          if (*(char *)(lVar1 + 0x21c0) == '\0') {
            iVar5 = *(int *)(lVar1 + 0x14b4);
          }
          else {
            iVar5 = *(int *)(lVar1 + 0x21c4);
          }
          if (iVar5 == *(int *)(unaff_RDI + 0x10)) {
            local_var_70 = 0xffffffffffffffff;
            function_5d1c80(lVar1,&local_buffer_00000070);
            *(int32_t *)(lVar1 + 0x12dc) = 0xffffffff;
            SystemFunction_0001805da580();
          }
        }
        lVar8 = lVar8 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(int *)(unaff_RDI + 0x568) = unaff_R14D;
  if (*(char *)(unaff_RDI + 0x984) != '\0') {
    lVar8 = *(int64_t *)(unaff_RDI + 0x738);
    *(int *)(lVar8 + 0x194) = unaff_R14D;
    if ((*(int *)(unaff_RDI + 0x568) == 1) || (*(char *)(unaff_RDI + 0xa50) == '\0')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(int8_t *)(lVar8 + 0x199) = uVar3;
    if ((unaff_R14D != 5) && (*(char *)(lVar8 + 0x98) != '\0')) {
      lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
      lVar6 = (int64_t)*(int *)(unaff_RDI + 0x564) * 0xa60;
      lVar1 = *(int64_t *)(lVar6 + 0x37d8 + lVar8);
      if (*(char *)(lVar1 + 0x99) != '\0') {
        lVar9 = (int64_t)*(int *)(lVar6 + 0x3600 + lVar8) * 0xa60;
        lVar2 = *(int64_t *)(lVar6 + 0x3978 + lVar8);
        if (*(int *)(lVar9 + 0x3608 + lVar2) == 1) {
          *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar9 + 0x3a20 + lVar2);
          return;
        }
      }
      *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar6 + 0x3a20 + lVar8);
    }
  }
  return;
}
// 函数: void function_51fb34(int param_1,uint64_t param_2,uint64_t param_3,char param_4)
void function_51fb34(int param_1,uint64_t param_2,uint64_t param_3,char param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t unaff_RDI;
  int64_t lVar9;
  int unaff_R14D;
  bool bVar10;
  uint64_t local_var_70;
  if ((param_4 != '\0') || ((param_1 - 2U & 0xfffffffd) == 0)) {
    function_511990();
  }
  lVar8 = *(int64_t *)(unaff_RDI + 0x6e0);
  if (-1 < *(int *)(lVar8 + 0x14b4)) {
    *(uint64_t *)(lVar8 + 0x14b4) = 0xffffffffffffffff;
    *(int32_t *)(lVar8 + 0x1728) = 0xffffffff;
  }
  if (unaff_R14D == 5) {
    lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
    if (*(char *)(lVar8 + 0x87a93c) == '\0') {
      uVar4 = (uint)(*(int64_t *)(lVar8 + 0x87a920) - *(int64_t *)(lVar8 + 0x87a918) >> 3);
    }
    else {
      uVar4 = *(uint *)(lVar8 + 0x87a938);
    }
    if (0 < (int)uVar4) {
      lVar8 = 0;
      uVar7 = (uint64_t)uVar4;
      do {
        lVar1 = *(int64_t *)(unaff_RDI + 0x8d8);
        lVar6 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar6 = *(int64_t *)(lVar1 + 0x87a918);
        }
        lVar1 = *(int64_t *)(lVar8 + lVar6);
        if (-1 < *(int *)(lVar1 + 0x10)) {
          lVar6 = *(int64_t *)(lVar1 + 0x6e0);
          if (*(char *)(lVar6 + 0x21c0) == '\0') {
            iVar5 = *(int *)(lVar6 + 0x14b4);
          }
          else {
            iVar5 = *(int *)(lVar6 + 0x21c4);
          }
          if (iVar5 == *(int *)(unaff_RDI + 0x10)) {
            iVar5 = *(int *)(lVar6 + 0x14a8);
            if (iVar5 == 0) {
              bVar10 = *(char *)(lVar6 + 0x2024) == (char)iVar5;
              if (*(char *)(lVar6 + 0x2024) == (char)iVar5) goto LAB_18051fc9f;
LAB_18051fbf9:
              uVar3 = 1;
            }
            else {
              bVar10 = (iVar5 - 1U & 0xfffffffd) == 0;
              if ((iVar5 - 2U & 0xfffffffd) == 0) goto LAB_18051fbf9;
LAB_18051fc9f:
              uVar3 = 0;
            }
            function_511990(lVar1,*(int *)(unaff_RDI + 0x10),0xffffffff,bVar10,uVar3);
            *(uint64_t *)(lVar6 + 0x14b4) = 0xffffffffffffffff;
            *(int32_t *)(lVar6 + 0x1728) = 0xffffffff;
          }
        }
        lVar8 = lVar8 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((*(byte *)(unaff_RDI + 0x56c) & 1) == 0) {
      iVar5 = *(int *)(unaff_RDI + 0x564);
      if (iVar5 != -1) {
        lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
        function_52e450();
        SystemCore_Validator0((int64_t)iVar5 * 0xa60 + lVar8 + 0x30a0,0xffffffff);
      }
    }
    else {
      iVar5 = *(int *)(unaff_RDI + 0x560);
      if (iVar5 != -1) {
        lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
        SystemCore_Validator0();
        function_52e450((int64_t)iVar5 * 0xa60 + lVar8 + 0x30a0,0xffffffff);
      }
    }
  }
  else if (unaff_R14D == 2) {
    lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
    if (*(char *)(lVar8 + 0x87a93c) == '\0') {
      uVar4 = (uint)(*(int64_t *)(lVar8 + 0x87a920) - *(int64_t *)(lVar8 + 0x87a918) >> 3);
    }
    else {
      uVar4 = *(uint *)(lVar8 + 0x87a938);
    }
    if (0 < (int)uVar4) {
      lVar8 = 0;
      uVar7 = (uint64_t)uVar4;
      do {
        lVar1 = *(int64_t *)(unaff_RDI + 0x8d8);
        lVar6 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar6 = *(int64_t *)(lVar1 + 0x87a918);
        }
        if (-1 < *(int *)(*(int64_t *)(lVar8 + lVar6) + 0x10)) {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar8 + lVar6) + 0x6e0);
          if (*(char *)(lVar1 + 0x21c0) == '\0') {
            iVar5 = *(int *)(lVar1 + 0x14b4);
          }
          else {
            iVar5 = *(int *)(lVar1 + 0x21c4);
          }
          if (iVar5 == *(int *)(unaff_RDI + 0x10)) {
            local_var_70 = 0xffffffffffffffff;
            function_5d1c80(lVar1,&local_buffer_00000070);
            *(int32_t *)(lVar1 + 0x12dc) = 0xffffffff;
            SystemFunction_0001805da580();
          }
        }
        lVar8 = lVar8 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(int *)(unaff_RDI + 0x568) = unaff_R14D;
  if (*(char *)(unaff_RDI + 0x984) != '\0') {
    lVar8 = *(int64_t *)(unaff_RDI + 0x738);
    *(int *)(lVar8 + 0x194) = unaff_R14D;
    if ((*(int *)(unaff_RDI + 0x568) == 1) || (*(char *)(unaff_RDI + 0xa50) == '\0')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(int8_t *)(lVar8 + 0x199) = uVar3;
    if ((unaff_R14D != 5) && (*(char *)(lVar8 + 0x98) != '\0')) {
      lVar8 = *(int64_t *)(unaff_RDI + 0x8d8);
      lVar6 = (int64_t)*(int *)(unaff_RDI + 0x564) * 0xa60;
      lVar1 = *(int64_t *)(lVar6 + 0x37d8 + lVar8);
      if (*(char *)(lVar1 + 0x99) != '\0') {
        lVar9 = (int64_t)*(int *)(lVar6 + 0x3600 + lVar8) * 0xa60;
        lVar2 = *(int64_t *)(lVar6 + 0x3978 + lVar8);
        if (*(int *)(lVar9 + 0x3608 + lVar2) == 1) {
          *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar9 + 0x3a20 + lVar2);
          return;
        }
      }
      *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar6 + 0x3a20 + lVar8);
    }
  }
  return;
}
// 函数: void function_51fb49(int64_t param_1)
void function_51fb49(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t unaff_RDI;
  int64_t lVar8;
  int unaff_R14D;
  bool bVar9;
  uVar5 = *(int64_t *)(param_1 + 0x87a920) - *(int64_t *)(param_1 + 0x87a918) >> 3;
  if (0 < (int)uVar5) {
    lVar7 = 0;
    uVar5 = uVar5 & 0xffffffff;
    do {
      lVar1 = *(int64_t *)(unaff_RDI + 0x8d8);
      lVar6 = lVar1 + 0x876958;
      if (*(char *)(lVar1 + 0x87a93c) == '\0') {
        lVar6 = *(int64_t *)(lVar1 + 0x87a918);
      }
      lVar1 = *(int64_t *)(lVar7 + lVar6);
      if (-1 < *(int *)(lVar1 + 0x10)) {
        lVar6 = *(int64_t *)(lVar1 + 0x6e0);
        if (*(char *)(lVar6 + 0x21c0) == '\0') {
          iVar4 = *(int *)(lVar6 + 0x14b4);
        }
        else {
          iVar4 = *(int *)(lVar6 + 0x21c4);
        }
        if (iVar4 == *(int *)(unaff_RDI + 0x10)) {
          iVar4 = *(int *)(lVar6 + 0x14a8);
          if (iVar4 == 0) {
            bVar9 = *(char *)(lVar6 + 0x2024) == (char)iVar4;
            if (*(char *)(lVar6 + 0x2024) == (char)iVar4) goto LAB_18051fc9f;
LAB_18051fbf9:
            uVar3 = 1;
          }
          else {
            bVar9 = (iVar4 - 1U & 0xfffffffd) == 0;
            if ((iVar4 - 2U & 0xfffffffd) == 0) goto LAB_18051fbf9;
LAB_18051fc9f:
            uVar3 = 0;
          }
          function_511990(lVar1,*(int *)(unaff_RDI + 0x10),0xffffffff,bVar9,uVar3);
          *(uint64_t *)(lVar6 + 0x14b4) = 0xffffffffffffffff;
          *(int32_t *)(lVar6 + 0x1728) = 0xffffffff;
        }
      }
      lVar7 = lVar7 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((*(byte *)(unaff_RDI + 0x56c) & 1) == 0) {
    iVar4 = *(int *)(unaff_RDI + 0x564);
    if (iVar4 != -1) {
      lVar7 = *(int64_t *)(unaff_RDI + 0x8d8);
      function_52e450();
      SystemCore_Validator0((int64_t)iVar4 * 0xa60 + lVar7 + 0x30a0,0xffffffff);
    }
  }
  else {
    iVar4 = *(int *)(unaff_RDI + 0x560);
    if (iVar4 != -1) {
      lVar7 = *(int64_t *)(unaff_RDI + 0x8d8);
      SystemCore_Validator0();
      function_52e450((int64_t)iVar4 * 0xa60 + lVar7 + 0x30a0,0xffffffff);
    }
  }
  *(int *)(unaff_RDI + 0x568) = unaff_R14D;
  if (*(char *)(unaff_RDI + 0x984) != '\0') {
    lVar7 = *(int64_t *)(unaff_RDI + 0x738);
    *(int *)(lVar7 + 0x194) = unaff_R14D;
    if ((*(int *)(unaff_RDI + 0x568) == 1) || (*(char *)(unaff_RDI + 0xa50) == '\0')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(int8_t *)(lVar7 + 0x199) = uVar3;
    if ((unaff_R14D != 5) && (*(char *)(lVar7 + 0x98) != '\0')) {
      lVar7 = *(int64_t *)(unaff_RDI + 0x8d8);
      lVar6 = (int64_t)*(int *)(unaff_RDI + 0x564) * 0xa60;
      lVar1 = *(int64_t *)(lVar6 + 0x37d8 + lVar7);
      if (*(char *)(lVar1 + 0x99) != '\0') {
        lVar8 = (int64_t)*(int *)(lVar6 + 0x3600 + lVar7) * 0xa60;
        lVar2 = *(int64_t *)(lVar6 + 0x3978 + lVar7);
        if (*(int *)(lVar8 + 0x3608 + lVar2) == 1) {
          *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar8 + 0x3a20 + lVar2);
          return;
        }
      }
      *(int32_t *)(lVar1 + 0x1dc) = *(int32_t *)(lVar6 + 0x3a20 + lVar7);
    }
  }
  return;
}
// 函数: void function_51fde9(void)
void function_51fde9(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t uVar4;
  int64_t lVar5;
  int64_t unaff_RDI;
  int64_t lVar6;
  int unaff_R14D;
  lVar1 = *(int64_t *)(unaff_RDI + 0x738);
  *(int *)(lVar1 + 0x194) = unaff_R14D;
  if ((*(int *)(unaff_RDI + 0x568) == 1) || (*(char *)(unaff_RDI + 0xa50) == '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(int8_t *)(lVar1 + 0x199) = uVar4;
  if ((unaff_R14D != 5) && (*(char *)(lVar1 + 0x98) != '\0')) {
    lVar1 = *(int64_t *)(unaff_RDI + 0x8d8);
    lVar5 = (int64_t)*(int *)(unaff_RDI + 0x564) * 0xa60;
    lVar2 = *(int64_t *)(lVar5 + 0x37d8 + lVar1);
    if (*(char *)(lVar2 + 0x99) != '\0') {
      lVar6 = (int64_t)*(int *)(lVar5 + 0x3600 + lVar1) * 0xa60;
      lVar3 = *(int64_t *)(lVar5 + 0x3978 + lVar1);
      if (*(int *)(lVar6 + 0x3608 + lVar3) == 1) {
        *(int32_t *)(lVar2 + 0x1dc) = *(int32_t *)(lVar6 + 0x3a20 + lVar3);
        return;
      }
    }
    *(int32_t *)(lVar2 + 0x1dc) = *(int32_t *)(lVar5 + 0x3a20 + lVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_51fea0(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4,
void function_51fea0(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6,uint64_t param_7,uint param_8,
                  int64_t *param_9,int8_t param_10,char param_11)
{
  ushort *puVar1;
  uint64_t uVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int8_t uVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int32_t uVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t **pplStack_b0;
  int64_t ***ppplStack_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  uint64_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int8_t local_var_6c;
  uint64_t local_var_68;
  int64_t ***ppplStack_60;
  int64_t ***ppplStack_58;
  local_var_68 = 0xfffffffffffffffe;
  lVar12 = *(int64_t *)(param_1 + 0x8f8);
  iVar9 = *(int *)(lVar12 + 0x9e0);
  lVar10 = lVar12 + (int64_t)param_2 * 0x1f8;
  bVar5 = false;
  if ((((system_status_flag == 1) || (*(int *)(lVar12 + 0x9e4) < 0)) ||
      (param_2 != *(int *)(lVar12 + 0x9e4))) || (-1 < *(int *)(param_3 + 0xfc))) {
LAB_18051ff20:
    if (-1 < iVar9) {
      plVar13 = (int64_t *)(lVar12 + 8 + (int64_t)iVar9 * 0x1f8);
      goto LAB_18051ff40;
    }
  }
  else if (-1 < iVar9) {
    bVar5 = true;
    goto LAB_18051ff20;
  }
  plVar13 = (int64_t *)function_5346e0();
LAB_18051ff40:
  if (((((param_11 == '\0') && (-1 < param_2)) &&
       ((*(int *)(param_3 + 0xfc) < 0 && (iVar8 = *(int *)(lVar10 + 0x38), 0 < iVar8)))) &&
      (((*(uint64_t *)
          ((int64_t)*(int *)(lVar10 + 0xf8) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd8)) & 0x200)
        == 0 || (0 < *(short *)(lVar10 + 0x10))))) &&
     ((0 < (int)plVar13[6] &&
      ((((uVar2 = *(uint64_t *)((int64_t)(int)plVar13[0x1e] * 0xa0 + 0x50 + plVar13[0x1a]),
         (uVar2 >> 9 & 1) == 0 || (0 < (short)plVar13[1])) && ((uVar2 >> 0x13 & 1) != 0)) &&
       (((lVar12 = *plVar13, lVar12 != 0 && (cVar6 = SystemFunction_000180534fb0(lVar10 + 8), cVar6 != '\0')
         ) && ((cVar6 = SystemFunction_000180534dc0(lVar10 + 8), cVar6 == '\0' &&
               (*(int *)(lVar12 + 0x30) == iVar8)))))))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  piVar3 = *(int **)(param_1 + 0x8f8);
  local_var_a0 = *(uint64_t *)(param_1 + 0x6d8);
  ppplStack_a8 = &pplStack_b0;
  pplStack_b0 = (int64_t **)*param_9;
  if ((int64_t ***)pplStack_b0 != (int64_t ***)0x0) {
    (*(code *)(*pplStack_b0)[5])();
  }
  ppplStack_60 = &pplStack_b0;
  if (piVar3[0x283] == param_2) {
    piVar3[0x282] = -1;
    piVar3[0x283] = -1;
    piVar3[0x284] = -1;
  }
  ppplStack_58 = (int64_t ***)&ppplStack_a8;
  ppplStack_a8 = (int64_t ***)pplStack_b0;
  if ((int64_t ***)pplStack_b0 != (int64_t ***)0x0) {
    (*(code *)(*pplStack_b0)[5])();
  }
  function_58e430(piVar3 + (int64_t)param_2 * 0x7e + 2,param_3,param_4,param_5,param_6,param_7,
                param_8,&ppplStack_a8,local_var_a0,param_2,param_10);
  iVar8 = piVar3[0x278];
  if (iVar8 == param_2) {
    param_6 = CONCAT71((int7)(param_6 >> 8),param_11);
    function_536e20(piVar3,0,0xffffffff,1,param_6);
    piVar3[0x27e] = -1;
    piVar3[0x280] = -1;
  }
  if (piVar3[0x279] == param_2) {
    param_6 = CONCAT71((int7)(param_6 >> 8),param_11);
    function_536e20(piVar3,1,0xffffffff,1,param_6);
    piVar3[0x27f] = -1;
    piVar3[0x281] = -1;
  }
  else if (iVar8 != param_2) {
    function_50e340((int64_t)*piVar3 * 0xa60 + *(int64_t *)(piVar3 + 0x286) + 0x30a0);
  }
  if (piVar3[0x288] == param_2) {
    piVar3[0x288] = -1;
  }
  if ((int64_t ***)pplStack_b0 != (int64_t ***)0x0) {
    (*(code *)(*pplStack_b0)[7])();
  }
  if (bVar4) {
    piVar3 = *(int **)(param_1 + 0x8f8);
    iVar8 = function_537ef0(piVar3,plVar13);
    if ((iVar8 < 0) || (piVar3[(int64_t)iVar8 * 0x7e + 0xe] != *(int *)(*plVar13 + 0x30))) {
      lVar10 = (int64_t)piVar3[0x278];
      if (*(int64_t *)(piVar3 + lVar10 * 0x7e + 0x40) != 0) {
        *(int32_t *)(*(int64_t *)(piVar3 + lVar10 * 0x7e + 0x40) + 0x90) = 0;
      }
      if (*(short *)(lVar10 * 0x1f8 + 0x12 + (int64_t)piVar3) != 0) {
        *(int16_t *)(lVar10 * 0x1f8 + 0x12 + (int64_t)piVar3) = 0;
        if (*(int64_t *)(piVar3 + lVar10 * 0x7e + 0x40) != 0) {
          if (((*(uint *)((int64_t)piVar3[lVar10 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                         *(int64_t *)(piVar3 + lVar10 * 0x7e + 0x36)) >> 8 & 1) == 0) ||
             ((*(short *)((int64_t)piVar3[lVar10 * 0x7e + 0x3e] * 0xa0 + 0x96 +
                         *(int64_t *)(piVar3 + lVar10 * 0x7e + 0x36)) < 1 &&
              (0 < (short)piVar3[lVar10 * 0x7e + 4])))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          *(int8_t *)(*(int64_t *)(piVar3 + lVar10 * 0x7e + 0x40) + 0x126) = uVar7;
        }
      }
      *(int8_t *)(*(int64_t *)(*(int64_t *)(piVar3 + lVar10 * 0x7e + 0x40) + 8) + 0x126) = 1;
      (piVar3 + lVar10 * 0x7e + 2)[0] = 0;
      (piVar3 + lVar10 * 0x7e + 2)[1] = 0;
      if (*(int *)((int64_t)*piVar3 * 0xa60 + 0x30b8 + *(int64_t *)(piVar3 + 0x286)) != 0) {
        iVar8 = *(int *)((int64_t)*piVar3 * 0xa60 + 0x30b8 + *(int64_t *)(piVar3 + 0x286));
        if ((iVar8 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar8);
        }
        (**(code **)(render_system_data_config + 0x98))(iVar8,piVar3[0x278]);
        if ((iVar8 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar8);
        }
      }
    }
  }
  if ((system_status_flag != 1) && (bVar5)) {
    PerformanceMonitor_Profiler(param_1,iVar9,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,0,
                  param_6 & 0xffffffffffffff00,param_7 & 0xffffffff00000000,param_8 & 0xffffff00);
  }
  iVar9 = *(int *)(param_1 + 0x570);
  if (iVar9 == 1) {
    lVar10 = *(int64_t *)(param_1 + 0x6e0);
    *(int32_t *)(lVar10 + 0x10) = 0;
    *(uint64_t *)(lVar10 + 0x18) = 0;
    *(uint64_t *)(lVar10 + 0x20) = 0;
    *(int32_t *)(lVar10 + 0x28) = 0;
    *(int32_t *)(lVar10 + 0x2c) = 0xbf800000;
    *(uint64_t *)(lVar10 + 0x30) = 0;
    *(int32_t *)(lVar10 + 0x38) = 0xffffffff;
    lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
    uVar11 = 1;
    if (lVar10 != 0) {
      uVar2 = *(uint64_t *)
               ((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd0));
      if (((byte)uVar2 >> 1 & 1) == 0) {
        uVar11 = 1;
        if ((uVar2 & 0x40) != 0) {
          uVar11 = 3;
        }
      }
      else {
        uVar11 = 2;
      }
    }
    *(int32_t *)(*(int64_t *)(param_1 + 0x6e0) + 0x215c) = uVar11;
    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 8;
    iVar9 = *(int *)(param_1 + 0x570);
  }
  if (iVar9 == 2) {
    function_4f41b0(*(uint64_t *)(param_1 + 0x8d8));
  }
  *(int8_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x87b728) = 1;
  lVar10 = render_system_data_config;
  if ((param_11 == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    iVar9 = *(int *)(param_1 + 0x18);
    if ((iVar9 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar9);
    }
    (**(code **)(lVar10 + 0xd0))(iVar9);
    if ((iVar9 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar9);
    }
  }
  function_50c1c0(param_1);
  local_var_88 = 0;
  local_var_70 = 0x1000000;
  local_var_84 = 0;
  local_var_80 = 0x3f800000;
  local_var_7c = 0xbe4ccccd;
  local_var_78 = 0xbe4ccccd;
  local_var_74 = 0x3ecccccd;
  local_var_6c = 0;
  local_var_98 = 1;
  local_var_94 = 0xffffffff;
  local_var_90 = 0xc;
  CoreSystemThreadManager(param_1,&local_var_98);
  if ((int64_t *)*param_9 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_9 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address