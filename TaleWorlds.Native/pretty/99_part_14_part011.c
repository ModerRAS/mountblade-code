#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part011.c - 9 个函数
// 函数: void function_8f0ed0(uint64_t param_1,uint64_t *param_2)
void function_8f0ed0(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  lVar2 = function_8f1770();
  *(int16_t *)(lVar2 + 0x18) = 0;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  uVar1 = param_2[1];
  *(uint64_t *)(lVar2 + 0x20) = *param_2;
  *(uint64_t *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(uint64_t *)(lVar2 + 0x30) = param_2[2];
  *(uint64_t *)(lVar2 + 0x38) = uVar1;
  param_2[2] = 0;
  param_2[3] = 7;
  *(int16_t *)param_2 = 0;
  return;
}
uint64_t *
function_8f0f30(int64_t *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5)
{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  code *pcVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  if (0x3fffffffffffffd < (uint64_t)param_1[1]) {
    __Xlength_error_std__YAXPEBD_Z(&processed_var_9176_ptr);
    pcVar4 = (code *)swi(3);
    puVar6 = (uint64_t *)(*pcVar4)();
    return puVar6;
  }
  plVar5 = (int64_t *)function_8f0ed0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (int64_t)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = plVar5;
    *(int64_t **)*param_1 = plVar5;
    *(int64_t **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(uint64_t **)(*param_1 + 0x10)) {
      *(int64_t **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(uint64_t **)*param_1) {
      *(int64_t **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar11 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar8 = *(int64_t *)(*param_1 + 8);
      *param_2 = plVar5;
      *(int8_t *)(lVar8 + 0x18) = 1;
      return param_2;
    }
    plVar2 = (int64_t *)plVar11[1];
    plVar9 = plVar11 + 1;
    plVar10 = plVar2 + 1;
    lVar8 = *(int64_t *)plVar2[1];
    if (plVar2 == (int64_t *)lVar8) {
      lVar8 = ((int64_t *)plVar2[1])[2];
      if (*(char *)(lVar8 + 0x18) != '\0') {
        plVar3 = (int64_t *)plVar2[2];
        plVar7 = plVar2;
        if (plVar11 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(int64_t **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar10;
          plVar7 = plVar3;
          plVar9 = plVar10;
          if (plVar2 == (int64_t *)*(int64_t *)(*param_1 + 8)) {
            *(int64_t **)(*param_1 + 8) = plVar3;
            *plVar3 = (int64_t)plVar2;
            *plVar10 = (int64_t)plVar3;
            plVar11 = plVar2;
          }
          else {
            plVar11 = (int64_t *)*plVar10;
            if (plVar2 == (int64_t *)*plVar11) {
              *plVar11 = (int64_t)plVar3;
              *plVar3 = (int64_t)plVar2;
              *plVar10 = (int64_t)plVar3;
              plVar11 = plVar2;
            }
            else {
              plVar11[2] = (int64_t)plVar3;
              *plVar3 = (int64_t)plVar2;
              *plVar10 = (int64_t)plVar3;
              plVar11 = plVar2;
            }
          }
        }
        *(int8_t *)(plVar7 + 3) = 1;
        *(int8_t *)(*(int64_t *)(*plVar9 + 8) + 0x18) = 0;
        plVar9 = *(int64_t **)(*plVar9 + 8);
        plVar10 = (int64_t *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(int64_t **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar10;
          plVar10[2] = (int64_t)plVar9;
        }
        else {
          plVar2 = (int64_t *)plVar9[1];
          if (plVar9 == (int64_t *)plVar2[2]) {
            plVar2[2] = (int64_t)plVar10;
            plVar10[2] = (int64_t)plVar9;
          }
          else {
            *plVar2 = (int64_t)plVar10;
            plVar10[2] = (int64_t)plVar9;
          }
        }
        goto LAB_1808f1175;
      }
LAB_1808f10e6:
      *(int8_t *)(plVar2 + 3) = 1;
      *(int8_t *)(lVar8 + 0x18) = 1;
      *(int8_t *)(*(int64_t *)(*plVar9 + 8) + 0x18) = 0;
      plVar11 = *(int64_t **)(*plVar9 + 8);
    }
    else {
      if (*(char *)(lVar8 + 0x18) == '\0') goto LAB_1808f10e6;
      if (plVar11 == (int64_t *)*plVar2) {
        SystemFunction_0001808f1c90(param_1,plVar2);
        plVar11 = plVar2;
      }
      *(int8_t *)(plVar11[1] + 0x18) = 1;
      *(int8_t *)(*(int64_t *)(plVar11[1] + 8) + 0x18) = 0;
      plVar9 = *(int64_t **)(plVar11[1] + 8);
      plVar10 = (int64_t *)plVar9[2];
      plVar9[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(int64_t **)(*plVar10 + 8) = plVar9;
      }
      plVar10[1] = plVar9[1];
      if (plVar9 == *(int64_t **)(*param_1 + 8)) {
        *(int64_t **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar6 = (uint64_t *)plVar9[1];
        if (plVar9 == (int64_t *)*puVar6) {
          *puVar6 = plVar10;
        }
        else {
          puVar6[2] = plVar10;
        }
      }
      *plVar10 = (int64_t)plVar9;
LAB_1808f1175:
      plVar9[1] = (int64_t)plVar10;
    }
    cVar1 = *(char *)(plVar11[1] + 0x18);
  } while( true );
}
// 函数: void function_8f0f6b(void)
void function_8f0f6b(void)
{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t *unaff_RBX;
  int64_t *plVar10;
  char unaff_SIL;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  plVar5 = (int64_t *)function_8f0ed0();
  unaff_RDI[1] = unaff_RDI[1] + 1;
  plVar5[1] = (int64_t)unaff_RBX;
  if (unaff_RBX == (uint64_t *)*unaff_RDI) {
    ((uint64_t *)*unaff_RDI)[1] = plVar5;
    *(int64_t **)*unaff_RDI = plVar5;
    *(int64_t **)(*unaff_RDI + 0x10) = plVar5;
  }
  else if (unaff_SIL == '\0') {
    unaff_RBX[2] = plVar5;
    if (unaff_RBX == *(uint64_t **)(*unaff_RDI + 0x10)) {
      *(int64_t **)(*unaff_RDI + 0x10) = plVar5;
    }
  }
  else {
    *unaff_RBX = plVar5;
    if (unaff_RBX == *(uint64_t **)*unaff_RDI) {
      *(int64_t **)*unaff_RDI = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar10 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar7 = *(int64_t *)(*unaff_RDI + 8);
      *unaff_R14 = plVar5;
      *(int8_t *)(lVar7 + 0x18) = 1;
      return;
    }
    plVar2 = (int64_t *)plVar10[1];
    plVar8 = plVar10 + 1;
    plVar9 = plVar2 + 1;
    lVar7 = *(int64_t *)plVar2[1];
    if (plVar2 == (int64_t *)lVar7) {
      lVar7 = ((int64_t *)plVar2[1])[2];
      if (*(char *)(lVar7 + 0x18) != '\0') {
        plVar3 = (int64_t *)plVar2[2];
        plVar6 = plVar2;
        if (plVar10 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(int64_t **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar9;
          plVar6 = plVar3;
          plVar8 = plVar9;
          if (plVar2 == (int64_t *)*(int64_t *)(*unaff_RDI + 8)) {
            *(int64_t **)(*unaff_RDI + 8) = plVar3;
            *plVar3 = (int64_t)plVar2;
            *plVar9 = (int64_t)plVar3;
            plVar10 = plVar2;
          }
          else {
            plVar10 = (int64_t *)*plVar9;
            if (plVar2 == (int64_t *)*plVar10) {
              *plVar10 = (int64_t)plVar3;
              *plVar3 = (int64_t)plVar2;
              *plVar9 = (int64_t)plVar3;
              plVar10 = plVar2;
            }
            else {
              plVar10[2] = (int64_t)plVar3;
              *plVar3 = (int64_t)plVar2;
              *plVar9 = (int64_t)plVar3;
              plVar10 = plVar2;
            }
          }
        }
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(*(int64_t *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(int64_t **)(*plVar8 + 8);
        plVar9 = (int64_t *)*plVar8;
        *plVar8 = plVar9[2];
        if (*(char *)(plVar9[2] + 0x19) == '\0') {
          *(int64_t **)(plVar9[2] + 8) = plVar8;
        }
        plVar9[1] = plVar8[1];
        if (plVar8 == *(int64_t **)(*unaff_RDI + 8)) {
          *(int64_t **)(*unaff_RDI + 8) = plVar9;
          plVar9[2] = (int64_t)plVar8;
        }
        else {
          plVar2 = (int64_t *)plVar8[1];
          if (plVar8 == (int64_t *)plVar2[2]) {
            plVar2[2] = (int64_t)plVar9;
            plVar9[2] = (int64_t)plVar8;
          }
          else {
            *plVar2 = (int64_t)plVar9;
            plVar9[2] = (int64_t)plVar8;
          }
        }
        goto LAB_1808f1175;
      }
LAB_1808f10e6:
      *(int8_t *)(plVar2 + 3) = 1;
      *(int8_t *)(lVar7 + 0x18) = 1;
      *(int8_t *)(*(int64_t *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(int64_t **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_1808f10e6;
      if (plVar10 == (int64_t *)*plVar2) {
        SystemFunction_0001808f1c90();
        plVar10 = plVar2;
      }
      *(int8_t *)(plVar10[1] + 0x18) = 1;
      *(int8_t *)(*(int64_t *)(plVar10[1] + 8) + 0x18) = 0;
      plVar8 = *(int64_t **)(plVar10[1] + 8);
      plVar9 = (int64_t *)plVar8[2];
      plVar8[2] = *plVar9;
      if (*(char *)(*plVar9 + 0x19) == '\0') {
        *(int64_t **)(*plVar9 + 8) = plVar8;
      }
      plVar9[1] = plVar8[1];
      if (plVar8 == *(int64_t **)(*unaff_RDI + 8)) {
        *(int64_t **)(*unaff_RDI + 8) = plVar9;
      }
      else {
        puVar4 = (uint64_t *)plVar8[1];
        if (plVar8 == (int64_t *)*puVar4) {
          *puVar4 = plVar9;
        }
        else {
          puVar4[2] = plVar9;
        }
      }
      *plVar9 = (int64_t)plVar8;
LAB_1808f1175:
      plVar8[1] = (int64_t)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}
// 函数: void function_8f11b3(void)
void function_8f11b3(void)
{
  code *pcVar1;
  __Xlength_error_std__YAXPEBD_Z(&processed_var_9176_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
uint64_t *
function_8f11c0(uint64_t *param_1,uint64_t *param_2,char param_3,ushort *param_4,
             int8_t param_5)
{
  ushort *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char cVar4;
  ushort *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint64_t *pstack_special_x_8;
  uint64_t uVar12;
  int8_t stack_array_30 [8];
  uVar12 = 0xfffffffffffffffe;
  puVar1 = (ushort *)*param_1;
  uVar9 = 1;
  cVar4 = *(char *)((int64_t)*(ushort **)(puVar1 + 4) + 0x19);
  puVar5 = puVar1;
  puVar8 = *(ushort **)(puVar1 + 4);
  puVar10 = param_4;
  do {
    if (cVar4 != '\0') {
      puVar8 = puVar5;
      pstack_special_x_8 = param_1;
      if ((char)uVar9 != '\0') {
        if (puVar5 == *(ushort **)puVar1) {
          puVar6 = (uint64_t *)
                   function_8f0f30(param_1,&pstack_special_x_8,1,puVar5,param_4,param_5,0xfffffffffffffffe);
          *param_2 = *puVar6;
          *(int8_t *)(param_2 + 1) = 1;
          return param_2;
        }
        if (*(char *)((int64_t)puVar5 + 0x19) == '\0') {
          puVar8 = *(ushort **)puVar5;
          if (*(char *)((int64_t)puVar8 + 0x19) == '\0') {
            cVar4 = *(char *)((int64_t)*(ushort **)(puVar8 + 8) + 0x19);
            puVar1 = *(ushort **)(puVar8 + 8);
            while (cVar4 == '\0') {
              cVar4 = *(char *)((int64_t)*(ushort **)(puVar1 + 8) + 0x19);
              puVar8 = puVar1;
              puVar1 = *(ushort **)(puVar1 + 8);
            }
          }
          else {
            cVar4 = *(char *)((int64_t)*(ushort **)(puVar5 + 4) + 0x19);
            puVar1 = *(ushort **)(puVar5 + 4);
            puVar8 = puVar5;
            while ((puVar11 = puVar1, cVar4 == '\0' &&
                   (puVar10 = puVar11, puVar8 == *(ushort **)puVar11))) {
              cVar4 = *(char *)((int64_t)*(ushort **)(puVar11 + 4) + 0x19);
              puVar1 = *(ushort **)(puVar11 + 4);
              puVar8 = puVar11;
            }
            if (*(char *)((int64_t)puVar8 + 0x19) == '\0') {
              puVar8 = puVar11;
            }
          }
        }
        else {
          puVar8 = *(ushort **)(puVar5 + 8);
        }
      }
      cVar4 = SystemFunction_0001808f1690(param_1,puVar8 + 0x10,param_4,puVar10);
      if (cVar4 == '\0') {
        *param_2 = puVar8;
        *(int8_t *)(param_2 + 1) = 0;
      }
      else {
        puVar6 = (uint64_t *)
                 function_8f0f30(pstack_special_x_8,stack_array_30,uVar9,puVar5,param_4,param_5,uVar12);
        *param_2 = *puVar6;
        *(int8_t *)(param_2 + 1) = 1;
      }
      return param_2;
    }
    if (param_3 == '\0') {
      puVar5 = puVar8 + 0x10;
      if (7 < *(uint64_t *)(puVar8 + 0x1c)) {
        puVar5 = *(ushort **)(puVar8 + 0x10);
      }
      puVar10 = param_4;
      if (7 < *(uint64_t *)(param_4 + 0xc)) {
        puVar10 = *(ushort **)param_4;
      }
      uVar2 = *(uint64_t *)(puVar8 + 0x18);
      uVar3 = *(uint64_t *)(param_4 + 8);
      uVar7 = uVar3;
      if (uVar2 < uVar3) {
        uVar7 = uVar2;
      }
      if (uVar7 != 0) {
        puVar10 = (ushort *)((int64_t)puVar10 - (int64_t)puVar5);
        do {
          if (*(ushort *)((int64_t)puVar5 + (int64_t)puVar10) != *puVar5) {
            uVar9 = 0;
            if (*(ushort *)((int64_t)puVar5 + (int64_t)puVar10) < *puVar5) {
              uVar9 = 0xffffffff;
            }
            goto LAB_1808f1341;
          }
          puVar5 = puVar5 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar9 = 0xffffffff;
      if (uVar2 <= uVar3) {
        uVar9 = 0;
      }
LAB_1808f1341:
      uVar9 = uVar9 >> 0x1f;
    }
    else {
      puVar5 = param_4;
      if (7 < *(uint64_t *)(param_4 + 0xc)) {
        puVar5 = *(ushort **)param_4;
      }
      puVar10 = puVar8 + 0x10;
      if (7 < *(uint64_t *)(puVar8 + 0x1c)) {
        puVar10 = *(ushort **)(puVar8 + 0x10);
      }
      uVar2 = *(uint64_t *)(param_4 + 8);
      uVar3 = *(uint64_t *)(puVar8 + 0x18);
      uVar7 = uVar3;
      if (uVar2 < uVar3) {
        uVar7 = uVar2;
      }
      if (uVar7 != 0) {
        puVar10 = (ushort *)((int64_t)puVar10 - (int64_t)puVar5);
        do {
          if (*(ushort *)((int64_t)puVar5 + (int64_t)puVar10) != *puVar5) {
            uVar9 = 0;
            if (*(ushort *)((int64_t)puVar5 + (int64_t)puVar10) < *puVar5) {
              uVar9 = 0xffffffff;
            }
            uVar9 = uVar9 >> 0x1f ^ 1;
            goto LAB_1808f1344;
          }
          puVar5 = puVar5 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar3 < uVar2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
LAB_1808f1344:
    if ((char)uVar9 == '\0') {
      puVar11 = *(ushort **)(puVar8 + 8);
    }
    else {
      puVar11 = *(ushort **)puVar8;
    }
    cVar4 = *(char *)((int64_t)puVar11 + 0x19);
    puVar5 = puVar8;
    puVar8 = puVar11;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8f14a0(uint64_t *param_1,int64_t param_2)
void function_8f14a0(uint64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  param_1[3] = 7;
  param_1[2] = 0;
  *(int16_t *)param_1 = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(short *)(param_2 + uVar5 * 2) != 0);
  uVar1 = param_1[3];
  if (uVar5 <= uVar1) {
    puVar6 = param_1;
    if (7 < uVar1) {
      puVar6 = (uint64_t *)*param_1;
    }
    param_1[2] = uVar5;
// WARNING: Subroutine does not return
    memmove(puVar6,param_2,uVar5 * 2);
  }
  if (uVar5 < 0x7fffffffffffffff) {
    uVar4 = uVar5 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar4 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
       (uVar1 = (uVar1 >> 1) + uVar1, uVar7 = uVar4, uVar4 < uVar1)) {
      uVar7 = uVar1;
    }
    if (system_system_config == (code *)0x0) {
      uVar3 = malloc(uVar7 * 2 + 2);
    }
    else {
      uVar3 = (*system_system_config)();
    }
    param_1[2] = uVar5;
    param_1[3] = uVar7;
// WARNING: Subroutine does not return
    memcpy(uVar3,param_2,uVar5 * 2);
  }
  function_8f1cf0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8f152a(uint64_t param_1)
void function_8f152a(uint64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R15;
  param_1 = param_1 | 7;
  if (((param_1 <= unaff_RSI) && (unaff_R15 <= unaff_RSI - (unaff_R15 >> 1))) &&
     (uVar1 = (unaff_R15 >> 1) + unaff_R15, unaff_RSI = param_1, param_1 < uVar1)) {
    unaff_RSI = uVar1;
  }
  if (system_system_config == (code *)0x0) {
    uVar2 = malloc(unaff_RSI * 2 + 2);
  }
  else {
    uVar2 = (*system_system_config)();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBX;
  *(uint64_t *)(unaff_RDI + 0x18) = unaff_RSI;
// WARNING: Subroutine does not return
  memcpy(uVar2);
}
// 函数: void function_8f15c2(void)
void function_8f15c2(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8f15f0(int64_t *param_1)
void function_8f15f0(int64_t *param_1)
{
  if ((7 < (uint64_t)param_1[3]) && (*param_1 != 0)) {
    if (system_system_config == (code *)0x0) {
      free();
    }
    else {
      (*system_system_config)();
    }
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(int16_t *)param_1 = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8f1640(int64_t *param_1)
void function_8f1640(int64_t *param_1)
{
  int8_t astack_special_x_8 [32];
  function_8f4510(param_1,astack_special_x_8,*(uint64_t *)*param_1,(uint64_t *)*param_1,0xfffffffffffffffe
               );
  if (*param_1 != 0) {
    if (system_system_config == (code *)0x0) {
      free();
    }
    else {
      (*system_system_config)();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8f1720(void)
void function_8f1720(void)
{
  int64_t lVar1;
  if (system_system_config == (code *)0x0) {
    lVar1 = malloc(0x40);
  }
  else {
    lVar1 = (*system_system_config)();
  }
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(lVar1 + 8) = lVar1;
  *(int64_t *)(lVar1 + 0x10) = lVar1;
  *(int16_t *)(lVar1 + 0x18) = 0x101;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_8f1770(uint64_t *param_1)
{
  uint64_t *puVar1;
  if (system_system_config == (code *)0x0) {
    puVar1 = (uint64_t *)malloc(0x40);
  }
  else {
    puVar1 = (uint64_t *)(*system_system_config)();
  }
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return puVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address