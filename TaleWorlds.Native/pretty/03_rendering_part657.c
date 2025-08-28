#include "TaleWorlds.Native.Split.h"
// 03_rendering_part657.c - 16 个函数
// 函数: void UtilitiesSystem_40330(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)
void UtilitiesSystem_40330(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)
{
  char cVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t astack_special_x_18 [2];
  if (param_1 != param_2) {
    lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    for (lVar2 = lVar5; lVar2 != 0; lVar2 = lVar2 >> 1) {
    }
    astack_special_x_18[0] = param_3;
    UtilitiesSystem_404d0();
    if (lVar5 < 0x1d) {
      if (param_1 != param_2) {
        for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
          astack_special_x_18[0] = *puVar4;
          puVar3 = puVar4;
          puVar6 = puVar4;
          while (puVar6 != param_1) {
            puVar6 = puVar6 + -1;
            cVar1 = Function_6be5e162(astack_special_x_18,puVar6);
            if (cVar1 == '\0') break;
            *puVar3 = *puVar6;
            puVar3 = puVar3 + -1;
          }
          *puVar3 = astack_special_x_18[0];
        }
      }
      return;
    }
    puVar4 = param_1 + 0x1c;
    UtilitiesSystem_40430(param_1,puVar4);
    if (puVar4 != param_2) {
      param_1 = param_1 + 0x1b;
      do {
        astack_special_x_18[0] = *puVar4;
        cVar1 = Function_6be5e162(astack_special_x_18,param_1);
        puVar3 = param_1;
        puVar6 = puVar4;
        while (cVar1 != '\0') {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + -1;
          cVar1 = Function_6be5e162(astack_special_x_18,puVar3);
        }
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
        *puVar6 = astack_special_x_18[0];
      } while (puVar4 != param_2);
    }
  }
  return;
}
// 函数: void UtilitiesSystem_40345(uint64_t *param_1,uint64_t *param_2)
void UtilitiesSystem_40345(uint64_t *param_1,uint64_t *param_2)
{
  char cVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t local_buffer_50;
  lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  for (lVar2 = lVar5; lVar2 != 0; lVar2 = lVar2 >> 1) {
  }
  UtilitiesSystem_404d0();
  if (0x1c < lVar5) {
    puVar4 = param_1 + 0x1c;
    UtilitiesSystem_40430(param_1,puVar4);
    if (puVar4 != param_2) {
      param_1 = param_1 + 0x1b;
      do {
        local_buffer_50 = *puVar4;
        cVar1 = Function_6be5e162(&local_buffer_00000050,param_1);
        puVar3 = param_1;
        puVar6 = puVar4;
        while (cVar1 != '\0') {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + -1;
          cVar1 = Function_6be5e162(&local_buffer_00000050,puVar3);
        }
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
        *puVar6 = local_buffer_50;
      } while (puVar4 != param_2);
    }
    return;
  }
  if (param_1 != param_2) {
    for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
      local_buffer_50 = *puVar4;
      puVar3 = puVar4;
      puVar6 = puVar4;
      while (puVar6 != param_1) {
        puVar6 = puVar6 + -1;
        cVar1 = Function_6be5e162(&local_buffer_00000050,puVar6);
        if (cVar1 == '\0') break;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + -1;
      }
      *puVar3 = local_buffer_50;
    }
  }
  return;
}
// 函数: void UtilitiesSystem_403a2(void)
void UtilitiesSystem_403a2(void)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *unaff_RSI;
  uint64_t *puVar4;
  uint64_t *unaff_R14;
  uint64_t local_buffer_50;
  puVar3 = unaff_RSI + -1;
  do {
    local_buffer_50 = *unaff_RSI;
    cVar1 = Function_6be5e162(&local_buffer_00000050,puVar3);
    puVar2 = puVar3;
    puVar4 = unaff_RSI;
    while (cVar1 != '\0') {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
      cVar1 = Function_6be5e162(&local_buffer_00000050,puVar2);
    }
    unaff_RSI = unaff_RSI + 1;
    puVar3 = puVar3 + 1;
    *puVar4 = local_buffer_50;
  } while (unaff_RSI != unaff_R14);
  return;
}
// 函数: void UtilitiesSystem_40409(void)
void UtilitiesSystem_40409(void)
{
  return;
}
// 函数: void UtilitiesSystem_4041a(void)
void UtilitiesSystem_4041a(void)
{
  return;
}
// 函数: void UtilitiesSystem_4041b(uint64_t *param_1)
void UtilitiesSystem_4041b(uint64_t *param_1)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *unaff_R14;
  uint64_t local_var_30;
  uint64_t local_buffer_40;
  uint64_t local_buffer_50;
  if ((param_1 != unaff_R14) && (puVar3 = param_1 + 1, puVar3 != unaff_R14)) {
    local_buffer_40 = local_var_30;
    do {
      local_buffer_50 = *puVar3;
      puVar2 = puVar3;
      puVar4 = puVar3;
      while (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        cVar1 = Function_6be5e162(&local_buffer_00000050,puVar2);
        if (cVar1 == '\0') break;
        *puVar4 = *puVar2;
        puVar4 = puVar4 + -1;
      }
      puVar3 = puVar3 + 1;
      *puVar4 = local_buffer_50;
    } while (puVar3 != unaff_R14);
  }
  return;
}
// 函数: void UtilitiesSystem_40430(uint64_t *param_1,uint64_t *param_2)
void UtilitiesSystem_40430(uint64_t *param_1,uint64_t *param_2)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t astack_special_x_18 [2];
  if (param_1 != param_2) {
    for (puVar3 = param_1 + 1; puVar3 != param_2; puVar3 = puVar3 + 1) {
      astack_special_x_18[0] = *puVar3;
      puVar4 = puVar3;
      puVar2 = puVar3;
      while (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        cVar1 = Function_6be5e162(astack_special_x_18,puVar2);
        if (cVar1 == '\0') break;
        *puVar4 = *puVar2;
        puVar4 = puVar4 + -1;
      }
      *puVar4 = astack_special_x_18[0];
    }
  }
  return;
}
// 函数: void UtilitiesSystem_40445(uint64_t *param_1,uint64_t *param_2)
void UtilitiesSystem_40445(uint64_t *param_1,uint64_t *param_2)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t local_buffer_50;
  puVar3 = param_1 + 1;
  do {
    if (puVar3 == param_2) {
      return;
    }
    local_buffer_50 = *puVar3;
    puVar4 = puVar3;
    puVar2 = puVar3;
    while (puVar2 != param_1) {
      puVar2 = puVar2 + -1;
      cVar1 = Function_6be5e162(&local_buffer_00000050,puVar2);
      if (cVar1 == '\0') break;
      *puVar4 = *puVar2;
      puVar4 = puVar4 + -1;
    }
    puVar3 = puVar3 + 1;
    *puVar4 = local_buffer_50;
  } while( true );
}
// 函数: void UtilitiesSystem_40459(void)
void UtilitiesSystem_40459(void)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar3;
  uint64_t *unaff_R14;
  uint64_t local_buffer_50;
  do {
    local_buffer_50 = *unaff_RSI;
    puVar2 = unaff_RSI;
    puVar3 = unaff_RSI;
    while (puVar2 != unaff_RBP) {
      puVar2 = puVar2 + -1;
      cVar1 = Function_6be5e162(&local_buffer_00000050,puVar2);
      if (cVar1 == '\0') break;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + -1;
    }
    unaff_RSI = unaff_RSI + 1;
    *puVar3 = local_buffer_50;
    if (unaff_RSI == unaff_R14) {
      return;
    }
  } while( true );
}
// 函数: void UtilitiesSystem_404c2(void)
void UtilitiesSystem_404c2(void)
{
  return;
}
// 函数: void UtilitiesSystem_404ce(void)
void UtilitiesSystem_404ce(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)
// 函数: void UtilitiesSystem_404d0(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
void UtilitiesSystem_404d0(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
{
  uint64_t uVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  int8_t *pstack_special_x_20;
  uVar3 = (int64_t)param_2 - (int64_t)param_1;
  pstack_special_x_20 = param_4;
  do {
    if (((int64_t)(uVar3 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      pstack_special_x_20 = param_4;
      if (1 < lVar4) {
        lVar8 = (lVar4 + -2 >> 1) + 1;
        lVar11 = lVar8 * 2 + 2;
        do {
          pstack_special_x_20 = (int8_t *)param_1[lVar8 + -1];
          lVar8 = lVar8 + -1;
          lVar11 = lVar11 + -2;
          lVar9 = lVar8;
          for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
            cVar2 = Function_6be5e162(param_1 + lVar10,param_1 + lVar10 + -1);
            if (cVar2 != '\0') {
              lVar10 = lVar10 + -1;
            }
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          if (lVar10 == lVar4) {
            param_1[lVar9] = param_1[lVar10 + -1];
            lVar9 = lVar10 + -1;
          }
          while (lVar8 < lVar9) {
            lVar10 = lVar9 + -1 >> 1;
            cVar2 = Function_6be5e162(param_1 + lVar10,&pstack_special_x_20);
            if (cVar2 == '\0') break;
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          param_1[lVar9] = pstack_special_x_20;
        } while (lVar8 != 0);
      }
      if (1 < lVar4) {
        param_2 = param_2 + -1;
        do {
          uVar1 = *param_2;
          lVar4 = lVar4 + -1;
          lVar11 = 0;
          lVar8 = 2;
          *param_2 = *param_1;
          bVar12 = lVar4 == 2;
          lVar9 = lVar11;
          if (2 < lVar4) {
            do {
              cVar2 = Function_6be5e162(param_1 + lVar8,param_1 + lVar8 + -1);
              lVar11 = lVar8;
              if (cVar2 != '\0') {
                lVar11 = lVar8 + -1;
              }
              param_1[lVar9] = param_1[lVar11];
              lVar8 = lVar11 * 2 + 2;
              bVar12 = lVar8 == lVar4;
              lVar9 = lVar11;
            } while (lVar8 < lVar4);
          }
          if (bVar12) {
            param_1[lVar11] = param_1[lVar8 + -1];
            lVar11 = lVar8 + -1;
          }
          while (0 < lVar11) {
            lVar4 = lVar11 + -1 >> 1;
            cVar2 = Function_6be5e162(param_1 + lVar4,&local_buffer_00000010);
            if (cVar2 == '\0') break;
            param_1[lVar11] = param_1[lVar4];
            lVar11 = lVar4;
          }
          param_2 = param_2 + -1;
          param_1[lVar11] = uVar1;
          lVar4 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar4);
      }
      return;
    }
    puVar7 = param_2 + -1;
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = param_1 + (lVar4 >> 1);
    cVar2 = Function_6be5e162(param_1,puVar5);
    if (cVar2 == '\0') {
      cVar2 = Function_6be5e162(param_1,puVar7);
      puVar6 = param_1;
      if (cVar2 == '\0') {
        cVar2 = Function_6be5e162(puVar5,puVar7);
        goto LAB_180640580;
      }
    }
    else {
      cVar2 = Function_6be5e162(puVar5,puVar7);
      puVar6 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = Function_6be5e162(param_1,puVar7);
        puVar5 = param_1;
LAB_180640580:
        puVar6 = puVar5;
        if (cVar2 != '\0') {
          puVar6 = puVar7;
        }
      }
    }
    pstack_special_x_20 = (int8_t *)*puVar6;
    puVar7 = param_2;
    puVar5 = param_1;
    while( true ) {
      while (cVar2 = Function_6be5e162(puVar5,&pstack_special_x_20), cVar2 != '\0') {
        puVar5 = puVar5 + 1;
      }
      puVar7 = puVar7 + -1;
      cVar2 = Function_6be5e162(&pstack_special_x_20,puVar7);
      while (cVar2 != '\0') {
        puVar7 = puVar7 + -1;
        cVar2 = Function_6be5e162(&pstack_special_x_20,puVar7);
      }
      if (puVar7 <= puVar5) break;
      uVar1 = *puVar5;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    }
    param_3 = param_3 + -1;
    param_4 = &SUB_18063e940;
    UtilitiesSystem_404d0(puVar5,param_2,param_3);
    uVar3 = (int64_t)puVar5 - (int64_t)param_1;
    param_2 = puVar5;
  } while( true );
}
// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)
// 函数: void UtilitiesSystem_404de(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
void UtilitiesSystem_404de(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
{
  uint64_t uVar1;
  char cVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  int8_t *local_var_58;
  uVar3 = in_RAX - (int64_t)param_1;
  do {
    if (((int64_t)(uVar3 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      local_var_58 = param_4;
      if (1 < lVar4) {
        lVar8 = (lVar4 + -2 >> 1) + 1;
        lVar11 = lVar8 * 2 + 2;
        do {
          local_var_58 = (int8_t *)param_1[lVar8 + -1];
          lVar8 = lVar8 + -1;
          lVar11 = lVar11 + -2;
          lVar9 = lVar8;
          for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
            cVar2 = Function_6be5e162(param_1 + lVar10,param_1 + lVar10 + -1);
            if (cVar2 != '\0') {
              lVar10 = lVar10 + -1;
            }
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          if (lVar10 == lVar4) {
            param_1[lVar9] = param_1[lVar10 + -1];
            lVar9 = lVar10 + -1;
          }
          while (lVar8 < lVar9) {
            lVar10 = lVar9 + -1 >> 1;
            cVar2 = Function_6be5e162(param_1 + lVar10,&local_buffer_00000058);
            if (cVar2 == '\0') break;
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          param_1[lVar9] = local_var_58;
        } while (lVar8 != 0);
      }
      if (1 < lVar4) {
        param_2 = param_2 + -1;
        do {
          uVar1 = *param_2;
          lVar4 = lVar4 + -1;
          lVar11 = 0;
          lVar8 = 2;
          *param_2 = *param_1;
          bVar12 = lVar4 == 2;
          lVar9 = lVar11;
          if (2 < lVar4) {
            do {
              cVar2 = Function_6be5e162(param_1 + lVar8,param_1 + lVar8 + -1);
              lVar11 = lVar8;
              if (cVar2 != '\0') {
                lVar11 = lVar8 + -1;
              }
              param_1[lVar9] = param_1[lVar11];
              lVar8 = lVar11 * 2 + 2;
              bVar12 = lVar8 == lVar4;
              lVar9 = lVar11;
            } while (lVar8 < lVar4);
          }
          if (bVar12) {
            param_1[lVar11] = param_1[lVar8 + -1];
            lVar11 = lVar8 + -1;
          }
          while (0 < lVar11) {
            lVar4 = lVar11 + -1 >> 1;
            cVar2 = Function_6be5e162(param_1 + lVar4,&local_buffer_00000048);
            if (cVar2 == '\0') break;
            param_1[lVar11] = param_1[lVar4];
            lVar11 = lVar4;
          }
          param_2 = param_2 + -1;
          param_1[lVar11] = uVar1;
          lVar4 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar4);
      }
      return;
    }
    puVar7 = param_2 + -1;
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = param_1 + (lVar4 >> 1);
    cVar2 = Function_6be5e162(param_1,puVar5);
    if (cVar2 == '\0') {
      cVar2 = Function_6be5e162(param_1,puVar7);
      puVar6 = param_1;
      if (cVar2 == '\0') {
        cVar2 = Function_6be5e162(puVar5,puVar7);
        goto LAB_180640580;
      }
    }
    else {
      cVar2 = Function_6be5e162(puVar5,puVar7);
      puVar6 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = Function_6be5e162(param_1,puVar7);
        puVar5 = param_1;
LAB_180640580:
        puVar6 = puVar5;
        if (cVar2 != '\0') {
          puVar6 = puVar7;
        }
      }
    }
    local_var_58 = (int8_t *)*puVar6;
    puVar7 = param_2;
    puVar5 = param_1;
    while( true ) {
      while (cVar2 = Function_6be5e162(puVar5,&local_buffer_00000058), cVar2 != '\0') {
        puVar5 = puVar5 + 1;
      }
      puVar7 = puVar7 + -1;
      cVar2 = Function_6be5e162(&local_buffer_00000058,puVar7);
      while (cVar2 != '\0') {
        puVar7 = puVar7 + -1;
        cVar2 = Function_6be5e162(&local_buffer_00000058,puVar7);
      }
      if (puVar7 <= puVar5) break;
      uVar1 = *puVar5;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    }
    param_3 = param_3 + -1;
    param_4 = &SUB_18063e940;
    UtilitiesSystem_404d0(puVar5,param_2,param_3);
    uVar3 = (int64_t)puVar5 - (int64_t)param_1;
    param_2 = puVar5;
  } while( true );
}
// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)
// 函数: void UtilitiesSystem_404ff(void)
void UtilitiesSystem_404ff(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *unaff_RBP;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *unaff_RSI;
  int64_t lVar8;
  int64_t lVar9;
  int8_t *in_R9;
  int64_t lVar10;
  int64_t unaff_R14;
  bool bVar11;
  int8_t *local_var_58;
  do {
    puVar7 = unaff_RBP;
    if (unaff_R14 < 1) break;
    puVar7 = unaff_RBP + -1;
    lVar3 = (int64_t)unaff_RBP - (int64_t)unaff_RSI >> 3;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    puVar5 = unaff_RSI + (lVar3 >> 1);
    cVar2 = Function_6be5e162();
    if (cVar2 == '\0') {
      cVar2 = Function_6be5e162();
      puVar4 = unaff_RSI;
      if (cVar2 == '\0') {
        cVar2 = Function_6be5e162(puVar5,puVar7);
        goto LAB_180640580;
      }
    }
    else {
      cVar2 = Function_6be5e162(puVar5,puVar7);
      puVar4 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = Function_6be5e162();
        puVar5 = unaff_RSI;
LAB_180640580:
        puVar4 = puVar5;
        if (cVar2 != '\0') {
          puVar4 = puVar7;
        }
      }
    }
    local_var_58 = (int8_t *)*puVar4;
    puVar5 = unaff_RBP;
    puVar7 = unaff_RSI;
    while( true ) {
      while (cVar2 = Function_6be5e162(puVar7,&local_buffer_00000058), cVar2 != '\0') {
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar5 + -1;
      cVar2 = Function_6be5e162(&local_buffer_00000058,puVar5);
      while (cVar2 != '\0') {
        puVar5 = puVar5 + -1;
        cVar2 = Function_6be5e162(&local_buffer_00000058,puVar5);
      }
      if (puVar5 <= puVar7) break;
      uVar1 = *puVar7;
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
      *puVar5 = uVar1;
    }
    unaff_R14 = unaff_R14 + -1;
    in_R9 = &SUB_18063e940;
    UtilitiesSystem_404d0(puVar7,unaff_RBP,unaff_R14);
    unaff_RBP = puVar7;
  } while (0xe0 < (int64_t)((int64_t)puVar7 - (int64_t)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_R14 != 0) {
    return;
  }
  lVar3 = (int64_t)puVar7 - (int64_t)unaff_RSI >> 3;
  local_var_58 = in_R9;
  if (1 < lVar3) {
    lVar6 = (lVar3 + -2 >> 1) + 1;
    lVar10 = lVar6 * 2 + 2;
    do {
      local_var_58 = (int8_t *)unaff_RSI[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar10 = lVar10 + -2;
      lVar8 = lVar6;
      for (lVar9 = lVar10; lVar9 < lVar3; lVar9 = lVar9 * 2 + 2) {
        cVar2 = Function_6be5e162(unaff_RSI + lVar9,unaff_RSI + lVar9 + -1);
        if (cVar2 != '\0') {
          lVar9 = lVar9 + -1;
        }
        unaff_RSI[lVar8] = unaff_RSI[lVar9];
        lVar8 = lVar9;
      }
      if (lVar9 == lVar3) {
        unaff_RSI[lVar8] = unaff_RSI[lVar9 + -1];
        lVar8 = lVar9 + -1;
      }
      while (lVar6 < lVar8) {
        lVar9 = lVar8 + -1 >> 1;
        cVar2 = Function_6be5e162(unaff_RSI + lVar9,&local_buffer_00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar8] = unaff_RSI[lVar9];
        lVar8 = lVar9;
      }
      unaff_RSI[lVar8] = local_var_58;
    } while (lVar6 != 0);
  }
  if (1 < lVar3) {
    puVar7 = puVar7 + -1;
    do {
      uVar1 = *puVar7;
      lVar3 = lVar3 + -1;
      lVar10 = 0;
      lVar6 = 2;
      *puVar7 = *unaff_RSI;
      bVar11 = lVar3 == 2;
      lVar8 = lVar10;
      if (2 < lVar3) {
        do {
          cVar2 = Function_6be5e162(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
          lVar10 = lVar6;
          if (cVar2 != '\0') {
            lVar10 = lVar6 + -1;
          }
          unaff_RSI[lVar8] = unaff_RSI[lVar10];
          lVar6 = lVar10 * 2 + 2;
          bVar11 = lVar6 == lVar3;
          lVar8 = lVar10;
        } while (lVar6 < lVar3);
      }
      if (bVar11) {
        unaff_RSI[lVar10] = unaff_RSI[lVar6 + -1];
        lVar10 = lVar6 + -1;
      }
      while (0 < lVar10) {
        lVar3 = lVar10 + -1 >> 1;
        cVar2 = Function_6be5e162(unaff_RSI + lVar3,&local_buffer_00000048);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar10] = unaff_RSI[lVar3];
        lVar10 = lVar3;
      }
      puVar7 = puVar7 + -1;
      unaff_RSI[lVar10] = uVar1;
      lVar3 = (8 - (int64_t)unaff_RSI) + (int64_t)puVar7 >> 3;
    } while (1 < lVar3);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)
// 函数: void UtilitiesSystem_40635(void)
void UtilitiesSystem_40635(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RSI;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t in_R9;
  int64_t lVar7;
  int64_t unaff_R14;
  int64_t lVar8;
  bool bVar9;
  uint64_t local_buffer_58;
  if (unaff_R14 != 0) {
    return;
  }
  lVar8 = unaff_RBP - (int64_t)unaff_RSI >> 3;
  local_buffer_58 = in_R9;
  if (1 < lVar8) {
    lVar3 = (lVar8 + -2 >> 1) + 1;
    lVar7 = lVar3 * 2 + 2;
    do {
      local_buffer_58 = unaff_RSI[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar7 = lVar7 + -2;
      lVar5 = lVar3;
      for (lVar6 = lVar7; lVar6 < lVar8; lVar6 = lVar6 * 2 + 2) {
        cVar2 = Function_6be5e162(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
        if (cVar2 != '\0') {
          lVar6 = lVar6 + -1;
        }
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      if (lVar6 == lVar8) {
        unaff_RSI[lVar5] = unaff_RSI[lVar6 + -1];
        lVar5 = lVar6 + -1;
      }
      while (lVar3 < lVar5) {
        lVar6 = lVar5 + -1 >> 1;
        cVar2 = Function_6be5e162(unaff_RSI + lVar6,&local_buffer_00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      unaff_RSI[lVar5] = local_buffer_58;
    } while (lVar3 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (uint64_t *)(unaff_RBP + -8);
    do {
      uVar1 = *puVar4;
      lVar8 = lVar8 + -1;
      lVar7 = 0;
      lVar3 = 2;
      *puVar4 = *unaff_RSI;
      bVar9 = lVar8 == 2;
      lVar5 = lVar7;
      if (2 < lVar8) {
        do {
          cVar2 = Function_6be5e162(unaff_RSI + lVar3,unaff_RSI + lVar3 + -1);
          lVar7 = lVar3;
          if (cVar2 != '\0') {
            lVar7 = lVar3 + -1;
          }
          unaff_RSI[lVar5] = unaff_RSI[lVar7];
          lVar3 = lVar7 * 2 + 2;
          bVar9 = lVar3 == lVar8;
          lVar5 = lVar7;
        } while (lVar3 < lVar8);
      }
      if (bVar9) {
        unaff_RSI[lVar7] = unaff_RSI[lVar3 + -1];
        lVar7 = lVar3 + -1;
      }
      while (0 < lVar7) {
        lVar8 = lVar7 + -1 >> 1;
        cVar2 = Function_6be5e162(unaff_RSI + lVar8,&local_buffer_00000048);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar7] = unaff_RSI[lVar8];
        lVar7 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RSI[lVar7] = uVar1;
      lVar8 = (8 - (int64_t)unaff_RSI) + (int64_t)puVar4 >> 3;
    } while (1 < lVar8);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180640770)
// WARNING: Removing unreachable block (ram,0x000180640783)
// WARNING: Removing unreachable block (ram,0x0001806407a0)
// WARNING: Removing unreachable block (ram,0x0001806407b1)
// WARNING: Removing unreachable block (ram,0x0001806407b4)
// WARNING: Removing unreachable block (ram,0x0001806407cc)
// WARNING: Removing unreachable block (ram,0x0001806407ce)
// WARNING: Removing unreachable block (ram,0x0001806407db)
// WARNING: Removing unreachable block (ram,0x0001806407e0)
// WARNING: Removing unreachable block (ram,0x0001806407fc)
// WARNING: Removing unreachable block (ram,0x00018064080b)
// WARNING: Removing unreachable block (ram,0x000180640814)
// WARNING: Removing unreachable block (ram,0x000180640821)
// 函数: void UtilitiesSystem_4063f(void)
void UtilitiesSystem_4063f(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RSI;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t in_R9;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  uint64_t local_buffer_58;
  lVar8 = unaff_RBP - (int64_t)unaff_RSI >> 3;
  local_buffer_58 = in_R9;
  if (1 < lVar8) {
    lVar3 = (lVar8 + -2 >> 1) + 1;
    lVar7 = lVar3 * 2 + 2;
    do {
      local_buffer_58 = unaff_RSI[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar7 = lVar7 + -2;
      lVar5 = lVar3;
      for (lVar6 = lVar7; lVar6 < lVar8; lVar6 = lVar6 * 2 + 2) {
        cVar2 = Function_6be5e162(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
        if (cVar2 != '\0') {
          lVar6 = lVar6 + -1;
        }
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      if (lVar6 == lVar8) {
        unaff_RSI[lVar5] = unaff_RSI[lVar6 + -1];
        lVar5 = lVar6 + -1;
      }
      while (lVar3 < lVar5) {
        lVar6 = lVar5 + -1 >> 1;
        cVar2 = Function_6be5e162(unaff_RSI + lVar6,&local_buffer_00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar5] = unaff_RSI[lVar6];
        lVar5 = lVar6;
      }
      unaff_RSI[lVar5] = local_buffer_58;
    } while (lVar3 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (uint64_t *)(unaff_RBP + -8);
    do {
      uVar1 = *puVar4;
      lVar8 = lVar8 + -1;
      lVar7 = 0;
      lVar3 = 2;
      *puVar4 = *unaff_RSI;
      bVar9 = lVar8 == 2;
      lVar5 = lVar7;
      if (2 < lVar8) {
        do {
          cVar2 = Function_6be5e162(unaff_RSI + lVar3,unaff_RSI + lVar3 + -1);
          lVar7 = lVar3;
          if (cVar2 != '\0') {
            lVar7 = lVar3 + -1;
          }
          unaff_RSI[lVar5] = unaff_RSI[lVar7];
          lVar3 = lVar7 * 2 + 2;
          bVar9 = lVar3 == lVar8;
          lVar5 = lVar7;
        } while (lVar3 < lVar8);
      }
      if (bVar9) {
        unaff_RSI[lVar7] = unaff_RSI[lVar3 + -1];
        lVar7 = lVar3 + -1;
      }
      while (0 < lVar7) {
        lVar8 = lVar7 + -1 >> 1;
        cVar2 = Function_6be5e162(unaff_RSI + lVar8,&local_buffer_00000048);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar7] = unaff_RSI[lVar8];
        lVar7 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RSI[lVar7] = uVar1;
      lVar8 = (8 - (int64_t)unaff_RSI) + (int64_t)puVar4 >> 3;
    } while (1 < lVar8);
  }
  return;
}