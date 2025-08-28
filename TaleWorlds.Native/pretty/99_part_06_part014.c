#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_06_part014.c - 14 个函数
// 函数: void function_3b13f0(int64_t param_1)
void function_3b13f0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  plVar1 = *(int64_t **)(param_1 + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(int64_t *)(param_1 + 0x48)];
  while (lVar4 != lVar2) {
    if ((void *)**(uint64_t **)(lVar4 + 8) != &processed_var_8576_ptr) {
      (**(code **)((void *)**(uint64_t **)(lVar4 + 8) + 0x40))();
    }
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  return;
}
// 函数: void function_3b143a(void)
void function_3b143a(void)
{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  do {
    if ((void *)**(uint64_t **)(unaff_RDI + 8) != &processed_var_8576_ptr) {
      (**(code **)((void *)**(uint64_t **)(unaff_RDI + 8) + 0x40))();
    }
    unaff_RDI = *(int64_t *)(unaff_RDI + 0x10);
    while (unaff_RDI == 0) {
      plVar1 = (int64_t *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      unaff_RDI = *plVar1;
    }
  } while (unaff_RDI != unaff_RSI);
  return;
}
// 函数: void function_3b1487(void)
void function_3b1487(void)
{
  return;
}
// 函数: void function_3b1497(void)
void function_3b1497(void)
{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  do {
    (**(code **)(in_RAX + 0x40))();
    do {
      unaff_RDI = *(int64_t *)(unaff_RDI + 0x10);
      while (unaff_RDI == 0) {
        plVar1 = (int64_t *)(unaff_RBX + 8);
        unaff_RBX = unaff_RBX + 8;
        unaff_RDI = *plVar1;
      }
      if (unaff_RDI == unaff_RSI) {
        return;
      }
      in_RAX = **(int64_t **)(unaff_RDI + 8);
    } while (in_RAX == unaff_RBP);
  } while( true );
}
// 函数: void function_3b14a0(int64_t param_1)
void function_3b14a0(int64_t param_1)
{
  int64_t lVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int *piStack_38;
  int64_t lStack_30;
  int *piStack_28;
  int64_t lStack_20;
  puVar11 = (uint64_t *)0x0;
  puVar9 = puVar11;
  puVar10 = puVar11;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      puVar7 = puVar11;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          iVar3 = (int)puVar7;
          lVar1 = *(int64_t *)(param_1 + 0x40);
          uVar5 = (uint64_t)(int64_t)((int)puVar10 + iVar3) % (uint64_t)*(uint *)(param_1 + 0x48)
          ;
          for (piVar2 = *(int **)(lVar1 + uVar5 * 8); piVar2 != (int *)0x0;
              piVar2 = *(int **)(piVar2 + 4)) {
            if (((int)puVar9 == *piVar2) && (iVar3 == piVar2[1])) {
              lVar6 = *(int64_t *)(param_1 + 0x48);
              piStack_38 = piVar2;
              ppiVar4 = &piStack_38;
              lStack_30 = lVar1 + uVar5 * 8;
              goto LAB_1803b153e;
            }
          }
          lVar6 = *(int64_t *)(param_1 + 0x48);
          piStack_28 = *(int **)(lVar1 + lVar6 * 8);
          ppiVar4 = &piStack_28;
          lStack_20 = lVar1 + lVar6 * 8;
LAB_1803b153e:
          puVar7 = puVar11;
          if (*ppiVar4 != *(int **)(lVar1 + lVar6 * 8)) {
            puVar7 = *(uint64_t **)(*ppiVar4 + 2);
          }
          if ((void *)*puVar7 == &processed_var_8576_ptr) {
            if (puVar7[0x10f] != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puVar7[0x10f] = 0;
          }
          else {
            (**(code **)((void *)*puVar7 + 0x48))(puVar7);
          }
          puVar7 = (uint64_t *)(uint64_t)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < *(int *)(param_1 + 0x18));
      }
      uVar8 = (int)puVar9 + 1;
      puVar9 = (uint64_t *)(uint64_t)uVar8;
      puVar10 = (uint64_t *)(uint64_t)((int)puVar10 + 1000);
    } while ((int)uVar8 < *(int *)(param_1 + 0x14));
  }
  return;
}
// 函数: void function_3b14bc(void)
void function_3b14bc(void)
{
  int64_t lVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *unaff_R15;
  int *piStackX_20;
  int *local_var_30;
  int64_t local_var_38;
  uVar8 = (uint64_t)unaff_R15 & 0xffffffff;
  do {
    uVar7 = (uint64_t)unaff_R15 & 0xffffffff;
    if ((int)unaff_R15 < *(int *)(unaff_RBP + 0x18)) {
      do {
        iVar3 = (int)uVar7;
        lVar1 = *(int64_t *)(unaff_RBP + 0x40);
        for (piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)((int)uVar8 + iVar3) %
                                        (uint64_t)*(uint *)(unaff_RBP + 0x48)) * 8);
            piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
          if ((unaff_ESI == *piVar2) && (iVar3 == piVar2[1])) {
            lVar5 = *(int64_t *)(unaff_RBP + 0x48);
            piStackX_20 = piVar2;
            ppiVar4 = &piStackX_20;
            goto LAB_1803b153e;
          }
        }
        lVar5 = *(int64_t *)(unaff_RBP + 0x48);
        local_var_30 = *(int **)(lVar1 + lVar5 * 8);
        ppiVar4 = &local_buffer_00000030;
        local_var_38 = lVar1 + lVar5 * 8;
LAB_1803b153e:
        puVar6 = unaff_R15;
        if (*ppiVar4 != *(int **)(lVar1 + lVar5 * 8)) {
          puVar6 = *(uint64_t **)(*ppiVar4 + 2);
        }
        if ((void *)*puVar6 == &processed_var_8576_ptr) {
          if (puVar6[0x10f] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puVar6[0x10f] = unaff_R15;
        }
        else {
          (**(code **)((void *)*puVar6 + 0x48))(puVar6);
        }
        uVar7 = (uint64_t)(iVar3 + 1U);
      } while ((int)(iVar3 + 1U) < *(int *)(unaff_RBP + 0x18));
    }
    unaff_ESI = unaff_ESI + 1;
    uVar8 = (uint64_t)((int)uVar8 + 1000);
    if (*(int *)(unaff_RBP + 0x14) <= unaff_ESI) {
      return;
    }
  } while( true );
}
// 函数: void function_3b15ba(void)
void function_3b15ba(void)
{
  return;
}
// 函数: void function_3b15c3(uint64_t param_1,code *param_2)
void function_3b15c3(uint64_t param_1,code *param_2)
{
  int64_t lVar1;
  int *piVar2;
  int **ppiVar3;
  int64_t lVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint uVar5;
  uint64_t unaff_RDI;
  int64_t unaff_R12;
  int unaff_R14D;
  int64_t *unaff_R15;
  int *piStackX_20;
  int *local_var_30;
  int64_t local_var_38;
code_r0x0001803b15c3:
  (*param_2)(unaff_RBX);
  do {
    uVar5 = (int)unaff_RDI + 1;
    unaff_RDI = (uint64_t)uVar5;
    if (*(int *)(unaff_RBP + 0x18) <= (int)uVar5) {
      do {
        unaff_ESI = unaff_ESI + 1;
        unaff_R14D = unaff_R14D + 1000;
        if (*(int *)(unaff_RBP + 0x14) <= unaff_ESI) {
          return;
        }
        unaff_RDI = (uint64_t)unaff_R15 & 0xffffffff;
      } while (*(int *)(unaff_RBP + 0x18) <= (int)unaff_R15);
    }
    lVar1 = *(int64_t *)(unaff_RBP + 0x40);
    for (piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)(unaff_R14D + (int)unaff_RDI) %
                                    (uint64_t)*(uint *)(unaff_RBP + 0x48)) * 8);
        piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
      if ((unaff_ESI == *piVar2) && ((int)unaff_RDI == piVar2[1])) {
        lVar4 = *(int64_t *)(unaff_RBP + 0x48);
        piStackX_20 = piVar2;
        ppiVar3 = &piStackX_20;
        goto LAB_1803b153e;
      }
    }
    lVar4 = *(int64_t *)(unaff_RBP + 0x48);
    local_var_30 = *(int **)(lVar1 + lVar4 * 8);
    ppiVar3 = &local_buffer_00000030;
    local_var_38 = lVar1 + lVar4 * 8;
LAB_1803b153e:
    unaff_RBX = unaff_R15;
    if (*ppiVar3 != *(int **)(lVar1 + lVar4 * 8)) {
      unaff_RBX = *(int64_t **)(*ppiVar3 + 2);
    }
    param_2 = *(code **)(*unaff_RBX + 0x48);
    if (*unaff_RBX != unaff_R12) goto code_r0x0001803b15c3;
    if (unaff_RBX[0x10f] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    unaff_RBX[0x10f] = (int64_t)unaff_R15;
  } while( true );
}
// 函数: void function_3b15d0(int64_t param_1,int param_2,int param_3,float param_4,int64_t param_5)
void function_3b15d0(int64_t param_1,int param_2,int param_3,float param_4,int64_t param_5)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  float fVar11;
  float fVar12;
  char cStackX_10;
  cVar6 = (char)(int)param_4;
  if (cVar6 < '\x02') {
    cVar6 = '\x02';
  }
  else if ('\n' < cVar6) {
    cVar6 = '\n';
  }
  iVar1 = param_3;
  lVar2 = function_195330(param_1);
  iVar7 = param_2 + -1;
  if ((((iVar7 < 0) || (*(int *)(param_1 + 0x14) <= iVar7)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x18) <= param_3)) {
    cVar8 = -1;
  }
  else {
    cVar8 = *(char *)((param_3 * 0x10 + iVar7) + param_5);
  }
  iVar5 = iVar1 + -1;
  if (((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) ||
     ((iVar5 < 0 || (*(int *)(param_1 + 0x18) <= iVar5)))) {
    cVar9 = -1;
  }
  else {
    cVar9 = *(char *)((iVar5 * 0x10 + param_2) + param_5);
  }
  iVar4 = param_2 + 1;
  if (((iVar4 < 0) || (*(int *)(param_1 + 0x14) <= iVar4)) ||
     ((param_3 < 0 || (*(int *)(param_1 + 0x18) <= param_3)))) {
    cStackX_10 = -1;
  }
  else {
    cStackX_10 = *(char *)((param_3 * 0x10 + iVar4) + param_5);
  }
  iVar1 = iVar1 + 1;
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) || (iVar1 < 0)) ||
     (*(int *)(param_1 + 0x18) <= iVar1)) {
    cVar10 = -1;
  }
  else {
    cVar10 = *(char *)((iVar1 * 0x10 + param_2) + param_5);
  }
  if (cVar8 != -1) {
    if ((int)cVar8 - (int)cVar6 < 3) {
      if ((int)cVar8 - (int)cVar6 < -2) {
        function_3b15d0(param_1,iVar7);
        iVar1 = param_2 + -1;
        if (((iVar1 < 0) || (*(int *)(param_1 + 0x14) <= iVar1)) ||
           ((param_3 < 0 || (*(int *)(param_1 + 0x18) <= param_3)))) {
          cVar8 = -1;
        }
        else {
          cVar8 = *(char *)((param_3 * 0x10 + iVar1) + param_5);
        }
        iVar5 = param_3 + -1;
      }
    }
    else {
      cVar6 = cVar8 + -2;
    }
  }
  if (cVar9 != -1) {
    if ((int)cVar9 - (int)cVar6 < 3) {
      if ((int)cVar9 - (int)cVar6 < -2) {
        function_3b15d0(param_1,param_2,iVar5,param_2 + -1,param_5);
        if (((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) ||
           ((iVar1 = param_3 + -1, iVar1 < 0 || (*(int *)(param_1 + 0x18) <= iVar1)))) {
          cVar9 = -1;
        }
        else {
          cVar9 = *(char *)((iVar1 * 0x10 + param_2) + param_5);
        }
      }
    }
    else {
      cVar6 = cVar9 + -2;
    }
  }
  if ((char)(int)param_4 != cVar6) {
    param_4 = (float)(int)cVar6;
  }
  iVar1 = (int)param_4;
  if (*(int *)(lVar2 + 0x20) != iVar1) {
    *(int *)(lVar2 + 0x20) = iVar1;
    *(float *)(lVar2 + 0x388) = (float)(uint)(1 << ((byte)iVar1 & 0x1f));
    *(float *)(lVar2 + 0x3a0) =
         (float)(1 << (10 - (byte)iVar1 & 0x1f)) * *(float *)(*(int64_t *)(lVar2 + 0x10) + 0x28);
  }
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x14))) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x18))) {
    *(char *)((param_3 * 0x10 + param_2) + param_5) = cVar6;
  }
  if ((cVar10 != -1) && ((int)cVar10 - (int)cVar6 < -2)) {
    iVar1 = param_3 + 1;
    function_3b15d0(param_1,param_2,iVar1);
    if (((param_2 < 0) || ((*(int *)(param_1 + 0x14) <= param_2 || (iVar1 < 0)))) ||
       (*(int *)(param_1 + 0x18) <= iVar1)) {
      cVar10 = -1;
    }
    else {
      cVar10 = *(char *)((iVar1 * 0x10 + param_2) + param_5);
    }
  }
  if ((cStackX_10 != -1) && ((int)cStackX_10 - (int)cVar6 < -2)) {
    function_3b15d0(param_1,param_2 + 1,param_3);
    iVar1 = param_2 + 1;
    if ((iVar1 < 0) ||
       (((*(int *)(param_1 + 0x14) <= iVar1 || (param_3 < 0)) ||
        (*(int *)(param_1 + 0x18) <= param_3)))) {
      cStackX_10 = -1;
    }
    else {
      cStackX_10 = *(char *)((param_3 * 0x10 + iVar1) + param_5);
    }
  }
  iVar1 = (int)cVar6;
  if (cVar8 == -1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(iVar1 - cVar8);
    if (0.0 <= fVar11) {
      if (2.0 <= fVar11) {
        fVar11 = 2.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(lVar2 + 0x390) = fVar11;
  if (cVar9 == -1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(iVar1 - cVar9);
    if (0.0 <= fVar11) {
      if (2.0 <= fVar11) {
        fVar11 = 2.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(lVar2 + 0x394) = fVar11;
  if (cStackX_10 == -1) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(iVar1 - cStackX_10);
    if (0.0 <= fVar11) {
      if (2.0 <= fVar11) {
        fVar11 = 2.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(lVar2 + 0x398) = fVar11;
  fVar11 = 0.0;
  if (((cVar10 != -1) && (fVar12 = (float)(iVar1 - cVar10), 0.0 <= fVar12)) &&
     (fVar11 = fVar12, 2.0 <= fVar12)) {
    fVar11 = 2.0;
  }
  *(float *)(lVar2 + 0x39c) = fVar11;
  if (0 < param_2) {
    if (param_2 == *(int *)(param_1 + 0x14) + -1) {
      *(int32_t *)(lVar2 + 0x398) = 0;
    }
    lVar3 = function_195330(param_1,param_2 + -1,param_3);
    *(int32_t *)(lVar3 + 0x398) = extraout_XMM0_Da;
  }
  if (0 < param_3) {
    if (param_3 == *(int *)(param_1 + 0x18) + -1) {
      *(int32_t *)(lVar2 + 0x39c) = 0;
    }
    lVar3 = function_195330(param_1,param_2,param_3 + -1);
    *(int32_t *)(lVar3 + 0x39c) = extraout_XMM0_Da_00;
  }
  if (param_2 < *(int *)(param_1 + 0x14) + -1) {
    if (param_2 == 0) {
      *(int32_t *)(lVar2 + 0x390) = 0;
    }
    lVar3 = function_195330(param_1,param_2 + 1,param_3);
    *(int32_t *)(lVar3 + 0x390) = extraout_XMM0_Da_01;
  }
  if (param_3 < *(int *)(param_1 + 0x18) + -1) {
    if (param_3 == 0) {
      *(int32_t *)(lVar2 + 0x394) = 0;
    }
    lVar2 = function_195330(param_1,param_2,param_3 + 1);
    *(int32_t *)(lVar2 + 0x394) = extraout_XMM0_Da_02;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b1ad0(int64_t param_1,int64_t param_2)
void function_3b1ad0(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int8_t stack_array_178 [32];
  int64_t *plStack_158;
  int32_t local_var_150;
  int64_t *plStack_148;
  void *plocal_var_108;
  int64_t lStack_100;
  int32_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_38;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  local_var_150 = 0;
  *(int64_t *)(param_1 + 0x68) = param_2;
  *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_2 + 0x60a38);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0x60a3c);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_2 + 0x60a40);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(param_2 + 0x60a50);
  *(int32_t *)(param_1 + 0x154) = *(int32_t *)(param_2 + 0x60a58);
  *(int32_t *)(param_1 + 0x158) = *(int32_t *)(param_2 + 0x60a5c);
  iVar1 = *(int *)(param_2 + 0x60a14);
  *(bool *)(param_1 + 0x1c43) = iVar1 != 0;
  iVar6 = 1;
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x60a28) == 0) {
      uVar3 = function_0bd5c0();
      SystemCore_PointerManager(param_1 + 0x1c48,uVar3);
    }
    else {
      plVar4 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,&plStack_158,param_2 + 0x60a18,1);
      lVar2 = *plVar4;
      *plVar4 = 0;
      plStack_148 = *(int64_t **)(param_1 + 0x1c48);
      *(int64_t *)(param_1 + 0x1c48) = lVar2;
      if (plStack_148 != (int64_t *)0x0) {
        (**(code **)(*plStack_148 + 0x38))();
      }
      if (plStack_158 != (int64_t *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x800,3);
    *(uint64_t *)(param_1 + 0x1c58) = uVar3;
// WARNING: Subroutine does not return
    memset(uVar3,0,0x800);
  }
  *(uint64_t *)(param_1 + 0x1c58) = 0;
  plVar4 = (int64_t *)function_0bd5c0();
  if (plVar4 != (int64_t *)0x0) {
    plStack_158 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_158 = *(int64_t **)(param_1 + 0x1c48);
  *(int64_t **)(param_1 + 0x1c48) = plVar4;
  if (plStack_158 != (int64_t *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  plVar4 = (int64_t *)function_0bd5c0();
  if (plVar4 != (int64_t *)0x0) {
    plStack_158 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_158 = *(int64_t **)(param_1 + 0x1c50);
  *(int64_t **)(param_1 + 0x1c50) = plVar4;
  if (plStack_158 != (int64_t *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  function_3b1050(param_1);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar5 = iVar6;
  if ((0 < iVar1) && (iVar5 = iVar1, 0x10 < iVar1)) {
    iVar5 = 0x10;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((0 < iVar1) && (iVar6 = iVar1, 0x10 < iVar1)) {
    iVar6 = 0x10;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  fVar7 = *(float *)(param_1 + 0x1c);
  if (*(float *)(param_1 + 0x1c) <= 1.0) {
    fVar7 = 1.0;
  }
  *(float *)(param_1 + 0x1c) = fVar7;
  *(float *)(param_1 + 0x28) = fVar7 * 0.0009765625;
  *(float *)(param_1 + 0x20) = (float)iVar5 * fVar7;
  *(float *)(param_1 + 0x24) = (float)iVar6 * fVar7;
  SystemFunction_0001803b0980(param_1);
  *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(param_2 + 0x60a54);
  CoreEngineDataTransformer(&plocal_var_108,param_2 + 0x27c8);
  local_var_150 = 1;
  if (*(int64_t *)(system_resource_state + 0xc08) == 0) {
    function_0b8090();
  }
  local_var_150 = 0;
  plocal_var_108 = &system_data_buffer_ptr;
  if (lStack_100 == 0) {
    lStack_100 = 0;
    local_var_f0 = 0;
    plocal_var_108 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b1ef0(int64_t param_1)
void function_3b1ef0(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int ***pppiVar4;
  char cVar5;
  int ****ppppiVar6;
  int *****pppppiVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  int ****ppppiStack_68;
  uint64_t *plocal_var_60;
  int ****ppppiStack_58;
  uint64_t local_var_50;
  int ****ppppiStack_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  void *plocal_var_38;
  void *plocal_var_30;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x2908);
  plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x68) + 0x318);
  if ((plVar2 != (int64_t *)0x0) && (cVar5 = (**(code **)(*plVar2 + 0xa0))(), cVar5 != '\0')) {
    if (*(char *)(*(int64_t *)(param_1 + 0x68) + 0x2910) == '\0') {
      iVar11 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar12 = 0;
        lVar13 = 0;
        do {
          iVar10 = 0;
          if (0 < *(int *)(lVar1 + 0x10)) {
            do {
              lVar3 = *(int64_t *)(param_1 + 0x40);
              puVar8 = (uint64_t *)
                       (lVar3 + ((uint64_t)(int64_t)(iVar12 + iVar10) %
                                (uint64_t)*(uint *)(param_1 + 0x48)) * 8);
              for (ppppiVar6 = (int ****)*puVar8; ppppiVar6 != (int ****)0x0;
                  ppppiVar6 = (int ****)ppppiVar6[2]) {
                if ((iVar11 == *(int *)ppppiVar6) && (iVar10 == *(int *)((int64_t)ppppiVar6 + 4)))
                {
                  ppppiStack_68 = ppppiVar6;
                  plocal_var_60 = puVar8;
                  pppppiVar7 = &ppppiStack_68;
                  lVar9 = *(int64_t *)(param_1 + 0x48);
                  goto LAB_1803b1fdd;
                }
              }
              lVar9 = *(int64_t *)(param_1 + 0x48);
              local_var_50 = (uint64_t *)(lVar3 + lVar9 * 8);
              ppppiStack_58 = (int ****)*local_var_50;
              pppppiVar7 = &ppppiStack_58;
LAB_1803b1fdd:
              if ((*pppppiVar7 != *(int *****)(lVar3 + lVar9 * 8)) &&
                 (pppiVar4 = (*pppppiVar7)[1], pppiVar4 != (int ***)0x0)) {
                (*(code *)(*pppiVar4)[5])
                          (pppiVar4,*(uint64_t *)(param_1 + 0x68),
                           (int64_t)iVar10 * 0x68 +
                           *(int64_t *)(lVar13 + *(int64_t *)(lVar1 + 0x40)),iVar11,iVar10);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar1 + 0x10));
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 1000;
          lVar13 = lVar13 + 8;
        } while (iVar11 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      puVar8 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
      *puVar8 = *(uint64_t *)(param_1 + 0x68);
      puVar8[1] = 0;
      ppppiStack_68 = (int ****)0x0;
      plocal_var_60 = (uint64_t *)0x7f7fffff00000000;
      ppppiStack_58 = (int ****)&ppppiStack_68;
      plocal_var_38 = &processed_var_5952_ptr;
      plocal_var_30 = &processed_var_5936_ptr;
      local_var_50._0_4_ = SUB84(puVar8,0);
      local_var_50._4_4_ = (int32_t)((uint64_t)puVar8 >> 0x20);
      local_var_40 = (int32_t)local_var_50;
      local_var_3c = local_var_50._4_4_;
      local_var_50 = puVar8;
      ppppiStack_48 = ppppiStack_58;
      SystemCore_SecurityManager(&ppppiStack_48);
      *(uint64_t **)(*(int64_t *)(param_1 + 0x68) + 0x2918) = puVar8;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b20e0(int64_t param_1)
void function_3b20e0(int64_t param_1)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  iVar4 = (int)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x60b28) -
                *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x60b20) >> 3);
  *(int *)(param_1 + 0x78) = iVar4;
  iVar6 = 0;
  if (0 < iVar4) {
    plVar5 = (int64_t *)(param_1 + 0x80);
    do {
      puVar1 = (uint64_t *)*plVar5;
      if (puVar1 != (uint64_t *)0x0) {
        lVar2 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar2 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar2);
        }
      }
      *plVar5 = 0;
      plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x158,8,3);
      *plVar3 = (int64_t)&processed_var_7192_ptr;
      DataStructureManager(plVar3 + 1,8,7,&SUB_18005d5f0,DataCacheManager);
      function_078550(plVar3);
      *plVar5 = (int64_t)plVar3;
      (**(code **)(*plVar3 + 8))
                (plVar3,*(uint64_t *)
                         (*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x60b20) +
                            (-0x80 - param_1) + (int64_t)plVar5) + 8 +
                         (int64_t)*(int *)(*(int64_t *)(param_1 + 0x68) + 0x3054) * 8),iVar6);
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x78));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b2230(int64_t param_1)
void function_3b2230(int64_t param_1)
{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int *piVar7;
  int **ppiVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  int *piStack_50;
  uint64_t *plocal_var_48;
  int *piStack_40;
  uint64_t *plocal_var_38;
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
  lVar6 = function_3a5e10(uVar5,&system_data_02f0,*(int32_t *)(param_1 + 0x28));
  lVar11 = *(int64_t *)(param_1 + 0x68);
  if ((*(char *)(lVar11 + 0x2910) == '\0') && (iVar12 = 0, 0 < *(int *)(param_1 + 0x14))) {
    lVar11 = 0;
    do {
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          lVar3 = *(int64_t *)(param_1 + 0x40);
          puVar1 = (uint64_t *)
                   (lVar3 + ((uint64_t)(int64_t)(iVar12 * 1000 + iVar10) %
                            (uint64_t)*(uint *)(param_1 + 0x48)) * 8);
          for (piVar7 = (int *)*puVar1; piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 4)) {
            if ((iVar12 == *piVar7) && (iVar10 == piVar7[1])) {
              piStack_50 = piVar7;
              plocal_var_48 = puVar1;
              ppiVar8 = &piStack_50;
              lVar9 = *(int64_t *)(param_1 + 0x48);
              goto LAB_1803b2320;
            }
          }
          lVar9 = *(int64_t *)(param_1 + 0x48);
          plocal_var_38 = (uint64_t *)(lVar3 + lVar9 * 8);
          piStack_40 = (int *)*plocal_var_38;
          ppiVar8 = &piStack_40;
LAB_1803b2320:
          if ((*ppiVar8 != *(int **)(lVar3 + lVar9 * 8)) &&
             (lVar3 = *(int64_t *)(*ppiVar8 + 2), lVar3 != 0)) {
            iVar2 = *(int *)(lVar3 + 0x28);
            uVar4 = 1 << ((byte)(int)(float)iVar2 & 0x1f);
            function_3a4b80((int64_t)iVar10 * 0x68 +
                          *(int64_t *)(*(int64_t *)(lVar6 + 0x40) + lVar11),
                          *(uint64_t *)(param_1 + 0x68),iVar2,uVar4 + 1,
                          *(float *)(param_1 + 0x1c) / (float)uVar4);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x18));
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar12 < *(int *)(param_1 + 0x14));
    lVar11 = *(int64_t *)(param_1 + 0x68);
  }
  lVar3 = *(int64_t *)(lVar11 + 0x2908);
  if (lVar3 != 0) {
    function_3a5ff0(lVar3);
    if (*(int64_t **)(lVar3 + 0x48) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar3 + 0x48) + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
  *(int64_t *)(lVar11 + 0x2908) = lVar6;
  return;
}
// 函数: void function_3b2400(int64_t param_1)
void function_3b2400(int64_t param_1)
{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int **ppiVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piStack_28;
  int64_t lStack_20;
  int *piStack_18;
  int64_t lStack_10;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar8 = 0;
    iVar12 = 0;
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          lVar11 = *(int64_t *)(param_1 + 0x40);
          uVar6 = (uint64_t)(int64_t)(iVar12 + iVar7) % (uint64_t)*(uint *)(param_1 + 0x48);
          for (piVar1 = *(int **)(lVar11 + uVar6 * 8); piVar1 != (int *)0x0;
              piVar1 = *(int **)(piVar1 + 4)) {
            if ((iVar9 == *piVar1) && (iVar7 == piVar1[1])) {
              lVar5 = *(int64_t *)(param_1 + 0x48);
              piStack_28 = piVar1;
              ppiVar4 = &piStack_28;
              lStack_20 = lVar11 + uVar6 * 8;
              goto LAB_1803b2492;
            }
          }
          lVar5 = *(int64_t *)(param_1 + 0x48);
          piStack_18 = *(int **)(lVar11 + lVar5 * 8);
          ppiVar4 = &piStack_18;
          lStack_10 = lVar11 + lVar5 * 8;
LAB_1803b2492:
          if ((*ppiVar4 != *(int **)(lVar11 + lVar5 * 8)) &&
             (plVar2 = *(int64_t **)(*ppiVar4 + 2), plVar2 != (int64_t *)0x0)) {
            (**(code **)(*plVar2 + 0x20))
                      (plVar2,*(int64_t *)(param_1 + 0x68),
                       (int64_t)iVar7 * 0x68 +
                       *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x2908) + 0x40)
                        + lVar8));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x18));
      }
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + 1000;
      lVar8 = lVar8 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x14));
  }
  lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x2908);
  *(int32_t *)(lVar8 + 0x34) = 0x7f7fffff;
  *(int32_t *)(lVar8 + 0x38) = 0xff7fffff;
  if (0 < (int)*(uint *)(lVar8 + 0xc)) {
    lVar11 = 0;
    uVar6 = (uint64_t)*(uint *)(lVar8 + 0xc);
    do {
      if (0 < (int)*(uint *)(lVar8 + 0x10)) {
        lVar5 = 0;
        uVar10 = (uint64_t)*(uint *)(lVar8 + 0x10);
        fVar15 = *(float *)(lVar8 + 0x34);
        fVar16 = *(float *)(lVar8 + 0x38);
        do {
          lVar3 = *(int64_t *)(lVar11 + *(int64_t *)(lVar8 + 0x40));
          fVar13 = *(float *)(lVar5 + 0x14 + lVar3);
          if (fVar15 <= fVar13) {
            fVar13 = fVar15;
          }
          *(float *)(lVar8 + 0x34) = fVar13;
          fVar14 = *(float *)(lVar5 + 0x18 + lVar3);
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar8 + 0x38) = fVar14;
          uVar10 = uVar10 - 1;
          lVar5 = lVar5 + 0x68;
          fVar15 = fVar13;
          fVar16 = fVar14;
        } while (uVar10 != 0);
      }
      lVar11 = lVar11 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}