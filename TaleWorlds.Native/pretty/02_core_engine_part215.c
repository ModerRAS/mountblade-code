#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part215.c - 3 个函数
// 函数: void GenericFunction_180190fa0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void GenericFunction_180190fa0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  bool bVar9;
  int32_t stack_special_x_10;
  int32_t stack_special_x_14;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  lVar8 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      uVar1 = param_1[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      lVar3 = lVar6;
      for (lVar4 = lVar5; lVar4 < lVar8; lVar4 = lVar4 * 2 + 2) {
        cVar2 = Function_39dea023(param_1[lVar4],param_1[lVar4 + -1]);
        if (cVar2 != '\0') {
          lVar4 = lVar4 + -1;
        }
        *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar4);
        *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      if (lVar4 == lVar8) {
        *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar4 + -1);
        *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar4 * 8 + -4);
        lVar3 = lVar4 + -1;
      }
      while (lVar6 < lVar3) {
        lVar4 = lVar3 + -1 >> 1;
        cVar2 = Function_39dea023(param_1[lVar4],uVar1);
        if (cVar2 == '\0') break;
        *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar4);
        *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      stack_special_x_20 = (int32_t)uVar1;
      stack_special_x_24 = (int32_t)((uint64_t)uVar1 >> 0x20);
      *(int32_t *)(param_1 + lVar3) = stack_special_x_20;
      *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) = stack_special_x_24;
    } while (lVar6 != 0);
  }
  puVar7 = param_2;
  if (param_2 < param_3) {
    do {
      cVar2 = Function_39dea023(*puVar7,*param_1);
      if (cVar2 != '\0') {
        uVar1 = *puVar7;
        lVar5 = 0;
        lVar6 = 2;
        *(int32_t *)puVar7 = *(int32_t *)param_1;
        *(int32_t *)((int64_t)puVar7 + 4) = *(int32_t *)((int64_t)param_1 + 4);
        bVar9 = lVar8 == 2;
        lVar3 = lVar5;
        if (2 < lVar8) {
          do {
            cVar2 = Function_39dea023(param_1[lVar6],param_1[lVar6 + -1]);
            lVar5 = lVar6;
            if (cVar2 != '\0') {
              lVar5 = lVar6 + -1;
            }
            *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar5);
            *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
                 *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4);
            lVar6 = lVar5 * 2 + 2;
            bVar9 = lVar6 == lVar8;
            lVar3 = lVar5;
          } while (lVar6 < lVar8);
        }
        if (bVar9) {
          *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar6 + -1);
          *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
               *(int32_t *)((int64_t)param_1 + lVar6 * 8 + -4);
          lVar5 = lVar6 + -1;
        }
        while (0 < lVar5) {
          lVar6 = lVar5 + -1 >> 1;
          cVar2 = Function_39dea023(param_1[lVar6],uVar1);
          if (cVar2 == '\0') break;
          *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar6);
          *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
               *(int32_t *)((int64_t)param_1 + lVar6 * 8 + 4);
          lVar5 = lVar6;
        }
        stack_special_x_20 = (int32_t)uVar1;
        stack_special_x_24 = (int32_t)((uint64_t)uVar1 >> 0x20);
        *(int32_t *)(param_1 + lVar5) = stack_special_x_20;
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) = stack_special_x_24;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 < param_3);
  }
  if (1 < lVar8) {
    param_2 = param_2 + -1;
    do {
      uVar1 = *param_2;
      lVar8 = lVar8 + -1;
      lVar5 = 0;
      lVar6 = 2;
      *(int32_t *)param_2 = *(int32_t *)param_1;
      *(int32_t *)((int64_t)param_2 + 4) = *(int32_t *)((int64_t)param_1 + 4);
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = Function_39dea023(param_1[lVar6],param_1[lVar6 + -1]);
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar5);
          *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
               *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4);
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar6 + -1);
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar6 * 8 + -4);
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        cVar2 = Function_39dea023(param_1[lVar8],uVar1);
        if (cVar2 == '\0') break;
        *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar8);
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar8 * 8 + 4);
        lVar5 = lVar8;
      }
      stack_special_x_14 = (int32_t)((uint64_t)uVar1 >> 0x20);
      param_2 = param_2 + -1;
      stack_special_x_10 = (int32_t)uVar1;
      *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) = stack_special_x_14;
      *(int32_t *)(param_1 + lVar5) = stack_special_x_10;
      lVar8 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < lVar8);
  }
  return;
}
// 函数: void GenericFunction_180190fbb(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void GenericFunction_180190fbb(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t unaff_R15;
  int64_t lVar8;
  bool bVar9;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  lVar8 = unaff_R15 - (int64_t)param_1 >> 3;
  puVar7 = param_2;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      uVar1 = param_1[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      lVar3 = lVar6;
      for (lVar4 = lVar5; lVar4 < lVar8; lVar4 = lVar4 * 2 + 2) {
        cVar2 = Function_39dea023(param_1[lVar4],param_1[lVar4 + -1]);
        if (cVar2 != '\0') {
          lVar4 = lVar4 + -1;
        }
        *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar4);
        *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      if (lVar4 == lVar8) {
        *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar4 + -1);
        *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar4 * 8 + -4);
        lVar3 = lVar4 + -1;
      }
      while (lVar6 < lVar3) {
        lVar4 = lVar3 + -1 >> 1;
        cVar2 = Function_39dea023(param_1[lVar4],uVar1);
        if (cVar2 == '\0') break;
        *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar4);
        *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar4 * 8 + 4);
        lVar3 = lVar4;
      }
      local_buffer_78 = (int32_t)uVar1;
      local_buffer_7c = (int32_t)((uint64_t)uVar1 >> 0x20);
      *(int32_t *)(param_1 + lVar3) = local_buffer_78;
      *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) = local_buffer_7c;
      param_2 = _local_buffer_68;
      puVar7 = _local_buffer_68;
    } while (lVar6 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    cVar2 = Function_39dea023(*param_2,*param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      lVar5 = 0;
      lVar6 = 2;
      *(int32_t *)param_2 = *(int32_t *)param_1;
      *(int32_t *)((int64_t)param_2 + 4) = *(int32_t *)((int64_t)param_1 + 4);
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = Function_39dea023(param_1[lVar6],param_1[lVar6 + -1]);
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar5);
          *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
               *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4);
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar6 + -1);
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar6 * 8 + -4);
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar6 = lVar5 + -1 >> 1;
        cVar2 = Function_39dea023(param_1[lVar6],uVar1);
        if (cVar2 == '\0') break;
        *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar6);
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar6 * 8 + 4);
        lVar5 = lVar6;
      }
      local_buffer_78 = (int32_t)uVar1;
      local_buffer_7c = (int32_t)((uint64_t)uVar1 >> 0x20);
      *(int32_t *)(param_1 + lVar5) = local_buffer_78;
      *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) = local_buffer_7c;
    }
    puVar7 = _local_buffer_68;
  }
  if (1 < lVar8) {
    puVar7 = puVar7 + -1;
    do {
      uVar1 = *puVar7;
      lVar8 = lVar8 + -1;
      lVar5 = 0;
      lVar6 = 2;
      *(int32_t *)puVar7 = *(int32_t *)param_1;
      *(int32_t *)((int64_t)puVar7 + 4) = *(int32_t *)((int64_t)param_1 + 4);
      bVar9 = lVar8 == 2;
      lVar3 = lVar5;
      if (2 < lVar8) {
        do {
          cVar2 = Function_39dea023(param_1[lVar6],param_1[lVar6 + -1]);
          lVar5 = lVar6;
          if (cVar2 != '\0') {
            lVar5 = lVar6 + -1;
          }
          *(int32_t *)(param_1 + lVar3) = *(int32_t *)(param_1 + lVar5);
          *(int32_t *)((int64_t)param_1 + lVar3 * 8 + 4) =
               *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4);
          lVar6 = lVar5 * 2 + 2;
          bVar9 = lVar6 == lVar8;
          lVar3 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar6 + -1);
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar6 * 8 + -4);
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        cVar2 = Function_39dea023(param_1[lVar8],uVar1);
        if (cVar2 == '\0') break;
        *(int32_t *)(param_1 + lVar5) = *(int32_t *)(param_1 + lVar8);
        *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) =
             *(int32_t *)((int64_t)param_1 + lVar8 * 8 + 4);
        lVar5 = lVar8;
      }
      local_buffer_6c = (int32_t)((uint64_t)uVar1 >> 0x20);
      puVar7 = puVar7 + -1;
      local_buffer_68 = (int32_t)uVar1;
      *(int32_t *)((int64_t)param_1 + lVar5 * 8 + 4) = local_buffer_6c;
      *(int32_t *)(param_1 + lVar5) = local_buffer_68;
      lVar8 = (8 - (int64_t)param_1) + (int64_t)puVar7 >> 3;
    } while (1 < lVar8);
  }
  return;
}
// 函数: void GenericFunction_1801911b1(void)
void GenericFunction_1801911b1(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *unaff_RDI;
  uint64_t *puVar6;
  int64_t unaff_R15;
  int64_t lVar7;
  bool bVar8;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  puVar6 = (uint64_t *)(in_RAX + -8);
  do {
    uVar1 = *puVar6;
    lVar7 = unaff_R15 + -1;
    lVar5 = 0;
    lVar4 = 2;
    *(int32_t *)puVar6 = *unaff_RDI;
    *(int32_t *)((int64_t)puVar6 + 4) = unaff_RDI[1];
    bVar8 = lVar7 == 2;
    lVar3 = lVar5;
    _local_buffer_68 = uVar1;
    if (2 < lVar7) {
      do {
        cVar2 = Function_39dea023(*(uint64_t *)(unaff_RDI + lVar4 * 2),
                                    *(uint64_t *)(unaff_RDI + lVar4 * 2 + -2));
        lVar5 = lVar4;
        if (cVar2 != '\0') {
          lVar5 = lVar4 + -1;
        }
        unaff_RDI[lVar3 * 2] = unaff_RDI[lVar5 * 2];
        unaff_RDI[lVar3 * 2 + 1] = unaff_RDI[lVar5 * 2 + 1];
        lVar4 = lVar5 * 2 + 2;
        bVar8 = lVar4 == lVar7;
        lVar3 = lVar5;
      } while (lVar4 < lVar7);
    }
    if (bVar8) {
      unaff_RDI[lVar5 * 2] = unaff_RDI[lVar4 * 2 + -2];
      unaff_RDI[lVar5 * 2 + 1] = unaff_RDI[lVar4 * 2 + -1];
      lVar5 = lVar4 + -1;
    }
    while (0 < lVar5) {
      lVar4 = lVar5 + -1 >> 1;
      cVar2 = Function_39dea023(*(uint64_t *)(unaff_RDI + lVar4 * 2),uVar1);
      if (cVar2 == '\0') break;
      unaff_RDI[lVar5 * 2] = unaff_RDI[lVar4 * 2];
      unaff_RDI[lVar5 * 2 + 1] = unaff_RDI[lVar4 * 2 + 1];
      lVar5 = lVar4;
    }
    puVar6 = puVar6 + -1;
    unaff_RDI[lVar5 * 2 + 1] = local_buffer_6c;
    unaff_RDI[lVar5 * 2] = local_buffer_68;
    unaff_R15 = (8 - (int64_t)unaff_RDI) + (int64_t)puVar6 >> 3;
    if (unaff_R15 < 2) {
      return;
    }
  } while( true );
}