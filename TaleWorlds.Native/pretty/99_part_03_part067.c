#include "TaleWorlds.Native.Split.h"
// 99_part_03_part067.c - 7 个函数
// 函数: void function_239800(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
void function_239800(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
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
            cVar2 = SystemFunction_000180233670(param_1 + lVar10,param_1 + lVar10 + -1);
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
            cVar2 = SystemFunction_000180233670(param_1 + lVar10,&pstack_special_x_20);
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
              cVar2 = SystemFunction_000180233670(param_1 + lVar8,param_1 + lVar8 + -1);
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
            cVar2 = SystemFunction_000180233670(param_1 + lVar4,&local_buffer_00000010);
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
    cVar2 = SystemFunction_000180233670(param_1,puVar5);
    if (cVar2 == '\0') {
      cVar2 = SystemFunction_000180233670(param_1,puVar7);
      puVar6 = param_1;
      if (cVar2 == '\0') {
        cVar2 = SystemFunction_000180233670(puVar5,puVar7);
        goto LAB_1802398b0;
      }
    }
    else {
      cVar2 = SystemFunction_000180233670(puVar5,puVar7);
      puVar6 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = SystemFunction_000180233670(param_1,puVar7);
        puVar5 = param_1;
LAB_1802398b0:
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
      while (cVar2 = SystemFunction_000180233670(puVar5,&pstack_special_x_20), cVar2 != '\0') {
        puVar5 = puVar5 + 1;
      }
      puVar7 = puVar7 + -1;
      cVar2 = SystemFunction_000180233670(&pstack_special_x_20,puVar7);
      while (cVar2 != '\0') {
        puVar7 = puVar7 + -1;
        cVar2 = SystemFunction_000180233670(&pstack_special_x_20,puVar7);
      }
      if (puVar7 <= puVar5) break;
      uVar1 = *puVar5;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    }
    param_3 = param_3 + -1;
    param_4 = &SUB_180233670;
    function_239800(puVar5,param_2,param_3);
    uVar3 = (int64_t)puVar5 - (int64_t)param_1;
    param_2 = puVar5;
  } while( true );
}
// WARNING: Removing unreachable block (ram,0x000180239aa0)
// WARNING: Removing unreachable block (ram,0x000180239ab3)
// WARNING: Removing unreachable block (ram,0x000180239ad0)
// WARNING: Removing unreachable block (ram,0x000180239ae1)
// WARNING: Removing unreachable block (ram,0x000180239ae4)
// WARNING: Removing unreachable block (ram,0x000180239afc)
// WARNING: Removing unreachable block (ram,0x000180239afe)
// WARNING: Removing unreachable block (ram,0x000180239b0b)
// WARNING: Removing unreachable block (ram,0x000180239b10)
// WARNING: Removing unreachable block (ram,0x000180239b2c)
// WARNING: Removing unreachable block (ram,0x000180239b3b)
// WARNING: Removing unreachable block (ram,0x000180239b44)
// WARNING: Removing unreachable block (ram,0x000180239b51)
// 函数: void function_23980e(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
void function_23980e(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t *param_4)
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
  int8_t *local_buffer_58;
  uVar3 = in_RAX - (int64_t)param_1;
  do {
    if (((int64_t)(uVar3 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      local_buffer_58 = param_4;
      if (1 < lVar4) {
        lVar8 = (lVar4 + -2 >> 1) + 1;
        lVar11 = lVar8 * 2 + 2;
        do {
          local_buffer_58 = (int8_t *)param_1[lVar8 + -1];
          lVar8 = lVar8 + -1;
          lVar11 = lVar11 + -2;
          lVar9 = lVar8;
          for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
            cVar2 = SystemFunction_000180233670(param_1 + lVar10,param_1 + lVar10 + -1);
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
            cVar2 = SystemFunction_000180233670(param_1 + lVar10,&local_buffer_00000058);
            if (cVar2 == '\0') break;
            param_1[lVar9] = param_1[lVar10];
            lVar9 = lVar10;
          }
          param_1[lVar9] = local_buffer_58;
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
              cVar2 = SystemFunction_000180233670(param_1 + lVar8,param_1 + lVar8 + -1);
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
            cVar2 = SystemFunction_000180233670(param_1 + lVar4,&local_buffer_00000048);
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
    cVar2 = SystemFunction_000180233670(param_1,puVar5);
    if (cVar2 == '\0') {
      cVar2 = SystemFunction_000180233670(param_1,puVar7);
      puVar6 = param_1;
      if (cVar2 == '\0') {
        cVar2 = SystemFunction_000180233670(puVar5,puVar7);
        goto LAB_1802398b0;
      }
    }
    else {
      cVar2 = SystemFunction_000180233670(puVar5,puVar7);
      puVar6 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = SystemFunction_000180233670(param_1,puVar7);
        puVar5 = param_1;
LAB_1802398b0:
        puVar6 = puVar5;
        if (cVar2 != '\0') {
          puVar6 = puVar7;
        }
      }
    }
    local_buffer_58 = (int8_t *)*puVar6;
    puVar7 = param_2;
    puVar5 = param_1;
    while( true ) {
      while (cVar2 = SystemFunction_000180233670(puVar5,&local_buffer_00000058), cVar2 != '\0') {
        puVar5 = puVar5 + 1;
      }
      puVar7 = puVar7 + -1;
      cVar2 = SystemFunction_000180233670(&local_buffer_00000058,puVar7);
      while (cVar2 != '\0') {
        puVar7 = puVar7 + -1;
        cVar2 = SystemFunction_000180233670(&local_buffer_00000058,puVar7);
      }
      if (puVar7 <= puVar5) break;
      uVar1 = *puVar5;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    }
    param_3 = param_3 + -1;
    param_4 = &SUB_180233670;
    function_239800(puVar5,param_2,param_3);
    uVar3 = (int64_t)puVar5 - (int64_t)param_1;
    param_2 = puVar5;
  } while( true );
}
// WARNING: Removing unreachable block (ram,0x000180239aa0)
// WARNING: Removing unreachable block (ram,0x000180239ab3)
// WARNING: Removing unreachable block (ram,0x000180239ad0)
// WARNING: Removing unreachable block (ram,0x000180239ae1)
// WARNING: Removing unreachable block (ram,0x000180239ae4)
// WARNING: Removing unreachable block (ram,0x000180239afc)
// WARNING: Removing unreachable block (ram,0x000180239afe)
// WARNING: Removing unreachable block (ram,0x000180239b0b)
// WARNING: Removing unreachable block (ram,0x000180239b10)
// WARNING: Removing unreachable block (ram,0x000180239b2c)
// WARNING: Removing unreachable block (ram,0x000180239b3b)
// WARNING: Removing unreachable block (ram,0x000180239b44)
// WARNING: Removing unreachable block (ram,0x000180239b51)
// 函数: void function_23982f(void)
void function_23982f(void)
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
  int8_t *local_buffer_58;
  do {
    puVar7 = unaff_RBP;
    if (unaff_R14 < 1) break;
    puVar7 = unaff_RBP + -1;
    lVar3 = (int64_t)unaff_RBP - (int64_t)unaff_RSI >> 3;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    puVar5 = unaff_RSI + (lVar3 >> 1);
    cVar2 = SystemFunction_000180233670();
    if (cVar2 == '\0') {
      cVar2 = SystemFunction_000180233670();
      puVar4 = unaff_RSI;
      if (cVar2 == '\0') {
        cVar2 = SystemFunction_000180233670(puVar5,puVar7);
        goto LAB_1802398b0;
      }
    }
    else {
      cVar2 = SystemFunction_000180233670(puVar5,puVar7);
      puVar4 = puVar5;
      if (cVar2 == '\0') {
        cVar2 = SystemFunction_000180233670();
        puVar5 = unaff_RSI;
LAB_1802398b0:
        puVar4 = puVar5;
        if (cVar2 != '\0') {
          puVar4 = puVar7;
        }
      }
    }
    local_buffer_58 = (int8_t *)*puVar4;
    puVar5 = unaff_RBP;
    puVar7 = unaff_RSI;
    while( true ) {
      while (cVar2 = SystemFunction_000180233670(puVar7,&local_buffer_00000058), cVar2 != '\0') {
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar5 + -1;
      cVar2 = SystemFunction_000180233670(&local_buffer_00000058,puVar5);
      while (cVar2 != '\0') {
        puVar5 = puVar5 + -1;
        cVar2 = SystemFunction_000180233670(&local_buffer_00000058,puVar5);
      }
      if (puVar5 <= puVar7) break;
      uVar1 = *puVar7;
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
      *puVar5 = uVar1;
    }
    unaff_R14 = unaff_R14 + -1;
    in_R9 = &SUB_180233670;
    function_239800(puVar7,unaff_RBP,unaff_R14);
    unaff_RBP = puVar7;
  } while (0xe0 < (int64_t)((int64_t)puVar7 - (int64_t)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_R14 != 0) {
    return;
  }
  lVar3 = (int64_t)puVar7 - (int64_t)unaff_RSI >> 3;
  local_buffer_58 = in_R9;
  if (1 < lVar3) {
    lVar6 = (lVar3 + -2 >> 1) + 1;
    lVar10 = lVar6 * 2 + 2;
    do {
      local_buffer_58 = (int8_t *)unaff_RSI[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar10 = lVar10 + -2;
      lVar8 = lVar6;
      for (lVar9 = lVar10; lVar9 < lVar3; lVar9 = lVar9 * 2 + 2) {
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar9,unaff_RSI + lVar9 + -1);
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar9,&local_buffer_00000058);
        if (cVar2 == '\0') break;
        unaff_RSI[lVar8] = unaff_RSI[lVar9];
        lVar8 = lVar9;
      }
      unaff_RSI[lVar8] = local_buffer_58;
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
          cVar2 = SystemFunction_000180233670(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar3,&local_buffer_00000048);
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
// WARNING: Removing unreachable block (ram,0x000180239aa0)
// WARNING: Removing unreachable block (ram,0x000180239ab3)
// WARNING: Removing unreachable block (ram,0x000180239ad0)
// WARNING: Removing unreachable block (ram,0x000180239ae1)
// WARNING: Removing unreachable block (ram,0x000180239ae4)
// WARNING: Removing unreachable block (ram,0x000180239afc)
// WARNING: Removing unreachable block (ram,0x000180239afe)
// WARNING: Removing unreachable block (ram,0x000180239b0b)
// WARNING: Removing unreachable block (ram,0x000180239b10)
// WARNING: Removing unreachable block (ram,0x000180239b2c)
// WARNING: Removing unreachable block (ram,0x000180239b3b)
// WARNING: Removing unreachable block (ram,0x000180239b44)
// WARNING: Removing unreachable block (ram,0x000180239b51)
// 函数: void function_239965(void)
void function_239965(void)
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar6,&local_buffer_00000058);
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
          cVar2 = SystemFunction_000180233670(unaff_RSI + lVar3,unaff_RSI + lVar3 + -1);
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar8,&local_buffer_00000048);
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
// WARNING: Removing unreachable block (ram,0x000180239aa0)
// WARNING: Removing unreachable block (ram,0x000180239ab3)
// WARNING: Removing unreachable block (ram,0x000180239ad0)
// WARNING: Removing unreachable block (ram,0x000180239ae1)
// WARNING: Removing unreachable block (ram,0x000180239ae4)
// WARNING: Removing unreachable block (ram,0x000180239afc)
// WARNING: Removing unreachable block (ram,0x000180239afe)
// WARNING: Removing unreachable block (ram,0x000180239b0b)
// WARNING: Removing unreachable block (ram,0x000180239b10)
// WARNING: Removing unreachable block (ram,0x000180239b2c)
// WARNING: Removing unreachable block (ram,0x000180239b3b)
// WARNING: Removing unreachable block (ram,0x000180239b44)
// WARNING: Removing unreachable block (ram,0x000180239b51)
// 函数: void function_23996f(void)
void function_23996f(void)
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar6,unaff_RSI + lVar6 + -1);
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar6,&local_buffer_00000058);
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
          cVar2 = SystemFunction_000180233670(unaff_RSI + lVar3,unaff_RSI + lVar3 + -1);
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
        cVar2 = SystemFunction_000180233670(unaff_RSI + lVar8,&local_buffer_00000048);
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
// 函数: void function_239990(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
void function_239990(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  char cVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  uint64_t *apstack_special_x_10 [2];
  uint64_t stack_special_x_20;
  lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  apstack_special_x_10[0] = param_2;
  stack_special_x_20 = param_4;
  if (1 < lVar7) {
    lVar2 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar2 * 2 + 2;
    do {
      stack_special_x_20 = param_1[lVar2 + -1];
      lVar2 = lVar2 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar2;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar1 = SystemFunction_000180233670(param_1 + lVar5,param_1 + lVar5 + -1);
        if (cVar1 != '\0') {
          lVar5 = lVar5 + -1;
        }
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        param_1[lVar4] = param_1[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar2 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar1 = SystemFunction_000180233670(param_1 + lVar5,&stack_special_x_20);
        if (cVar1 == '\0') break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = stack_special_x_20;
      param_2 = apstack_special_x_10[0];
    } while (lVar2 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    cVar1 = SystemFunction_000180233670(param_2,param_1);
    if (cVar1 != '\0') {
      stack_special_x_20 = *param_2;
      lVar6 = 0;
      lVar2 = 2;
      *param_2 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = SystemFunction_000180233670(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        cVar1 = SystemFunction_000180233670(param_1 + lVar2,&stack_special_x_20);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar2];
        lVar6 = lVar2;
      }
      param_1[lVar6] = stack_special_x_20;
    }
  }
  if (1 < lVar7) {
    puVar3 = apstack_special_x_10[0] + -1;
    do {
      apstack_special_x_10[0] = (uint64_t *)*puVar3;
      lVar7 = lVar7 + -1;
      lVar6 = 0;
      lVar2 = 2;
      *puVar3 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = SystemFunction_000180233670(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar1 = SystemFunction_000180233670(param_1 + lVar7,apstack_special_x_10);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar7];
        lVar6 = lVar7;
      }
      puVar3 = puVar3 + -1;
      param_1[lVar6] = apstack_special_x_10[0];
      lVar7 = (8 - (int64_t)param_1) + (int64_t)puVar3 >> 3;
    } while (1 < lVar7);
  }
  return;
}
// 函数: void function_2399ab(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void function_2399ab(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  char cVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_R15;
  int64_t lVar7;
  bool bVar8;
  uint64_t *local_buffer_68;
  uint64_t local_buffer_78;
  lVar7 = unaff_R15 - (int64_t)param_1 >> 3;
  puVar3 = param_2;
  if (1 < lVar7) {
    lVar2 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar2 * 2 + 2;
    do {
      local_buffer_78 = param_1[lVar2 + -1];
      lVar2 = lVar2 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar2;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar1 = SystemFunction_000180233670(param_1 + lVar5,param_1 + lVar5 + -1);
        if (cVar1 != '\0') {
          lVar5 = lVar5 + -1;
        }
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        param_1[lVar4] = param_1[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar2 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar1 = SystemFunction_000180233670(param_1 + lVar5,&local_buffer_00000078);
        if (cVar1 == '\0') break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = local_buffer_78;
      param_2 = local_buffer_68;
      puVar3 = local_buffer_68;
    } while (lVar2 != 0);
  }
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    cVar1 = SystemFunction_000180233670(param_2,param_1);
    if (cVar1 != '\0') {
      local_buffer_78 = *param_2;
      lVar6 = 0;
      lVar2 = 2;
      *param_2 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = SystemFunction_000180233670(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        cVar1 = SystemFunction_000180233670(param_1 + lVar2,&local_buffer_00000078);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar2];
        lVar6 = lVar2;
      }
      param_1[lVar6] = local_buffer_78;
    }
    puVar3 = local_buffer_68;
  }
  if (1 < lVar7) {
    puVar3 = puVar3 + -1;
    do {
      local_buffer_68 = (uint64_t *)*puVar3;
      lVar7 = lVar7 + -1;
      lVar6 = 0;
      lVar2 = 2;
      *puVar3 = *param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar1 = SystemFunction_000180233670(param_1 + lVar2,param_1 + lVar2 + -1);
          lVar6 = lVar2;
          if (cVar1 != '\0') {
            lVar6 = lVar2 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar2 = lVar6 * 2 + 2;
          bVar8 = lVar2 == lVar7;
          lVar4 = lVar6;
        } while (lVar2 < lVar7);
      }
      if (bVar8) {
        param_1[lVar6] = param_1[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar1 = SystemFunction_000180233670(param_1 + lVar7,&local_buffer_00000068);
        if (cVar1 == '\0') break;
        param_1[lVar6] = param_1[lVar7];
        lVar6 = lVar7;
      }
      puVar3 = puVar3 + -1;
      param_1[lVar6] = local_buffer_68;
      lVar7 = (8 - (int64_t)param_1) + (int64_t)puVar3 >> 3;
    } while (1 < lVar7);
  }
  return;
}