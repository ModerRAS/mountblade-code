#include "TaleWorlds.Native.Split.h"

// 99_part_05_part008.c - 13 个函数

// 函数: void FUN_1802d9e99(void)
void FUN_1802d9e99(void)

{
  int8_t unaff_BL;
  int32_t *unaff_R13;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  uStack0000000000000050 = *unaff_R15;
  uStack0000000000000058 = unaff_R15[1];
  uStack0000000000000070 = *unaff_R13;
  uStack0000000000000074 = unaff_R13[1];
  uStack0000000000000078 = unaff_R13[2];
  uStack000000000000007c = unaff_R13[3];
  uStack0000000000000060 = uStack0000000000000050;
  uStack0000000000000068 = uStack0000000000000058;
  FUN_1802da110(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  return;
}






// 函数: void FUN_1802d9ee0(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
void FUN_1802d9ee0(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  if (param_1 != param_2) {
    for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
      uVar2 = *puVar4;
      puVar5 = puVar4;
      if (puVar4 != param_1) {
        puVar3 = puVar4;
        do {
          puVar1 = puVar3 + -1;
          puVar3 = puVar3 + -1;
          if (*(short *)((uint64_t)(uint)*puVar1 * 0x70 + 0x30 + *(int64_t *)(param_3 + 0x58)) <=
              *(short *)((uVar2 & 0xffffffff) * 0x70 + 0x30 + *(int64_t *)(param_3 + 0x58))) break;
          *puVar5 = *puVar3;
          puVar5 = puVar5 + -1;
        } while (puVar3 != param_1);
      }
      *puVar5 = uVar2;
    }
  }
  return;
}






// 函数: void FUN_1802d9eef(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
void FUN_1802d9eef(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  puVar4 = param_1 + 1;
  do {
    if (puVar4 == param_2) {
      return;
    }
    uVar2 = *puVar4;
    puVar5 = puVar4;
    if (puVar4 != param_1) {
      puVar3 = puVar4;
      do {
        puVar1 = puVar3 + -1;
        puVar3 = puVar3 + -1;
        if (*(short *)((uint64_t)(uint)*puVar1 * 0x70 + 0x30 + *(int64_t *)(param_3 + 0x58)) <=
            *(short *)((uVar2 & 0xffffffff) * 0x70 + 0x30 + *(int64_t *)(param_3 + 0x58))) break;
        *puVar5 = *puVar3;
        puVar5 = puVar5 + -1;
      } while (puVar3 != param_1);
    }
    puVar4 = puVar4 + 1;
    *puVar5 = uVar2;
  } while( true );
}






// 函数: void FUN_1802d9f03(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1802d9f03(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RDI;
  uint64_t *puVar4;
  
  do {
    uVar2 = *unaff_RBX;
    puVar4 = unaff_RBX;
    if (unaff_RBX != unaff_RDI) {
      puVar3 = unaff_RBX;
      do {
        puVar1 = puVar3 + -1;
        puVar3 = puVar3 + -1;
        if (*(short *)((uint64_t)(uint)*puVar1 * 0x70 + 0x30 + *(int64_t *)(param_3 + 0x58)) <=
            *(short *)((uVar2 & 0xffffffff) * 0x70 + 0x30 + *(int64_t *)(param_3 + 0x58))) break;
        *puVar4 = *puVar3;
        puVar4 = puVar4 + -1;
      } while (puVar3 != unaff_RDI);
    }
    unaff_RBX = unaff_RBX + 1;
    *puVar4 = uVar2;
    if (unaff_RBX == unaff_RBP) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1802d9f6d(void)
void FUN_1802d9f6d(void)

{
  return;
}






// 函数: void FUN_1802d9f78(void)
void FUN_1802d9f78(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802da820)
// WARNING: Removing unreachable block (ram,0x0001802da82b)
// WARNING: Removing unreachable block (ram,0x0001802da840)
// WARNING: Removing unreachable block (ram,0x0001802da84d)
// WARNING: Removing unreachable block (ram,0x0001802da851)
// WARNING: Removing unreachable block (ram,0x0001802da869)
// WARNING: Removing unreachable block (ram,0x0001802da86b)
// WARNING: Removing unreachable block (ram,0x0001802da878)
// WARNING: Removing unreachable block (ram,0x0001802da880)
// WARNING: Removing unreachable block (ram,0x0001802da890)
// WARNING: Removing unreachable block (ram,0x0001802da89c)
// WARNING: Removing unreachable block (ram,0x0001802da8a0)
// WARNING: Removing unreachable block (ram,0x0001802da813)




// 函数: void FUN_1802d9ff0(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
void FUN_1802d9ff0(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  
  uVar2 = (int64_t)param_2 - (int64_t)param_1;
  while ((0xe0 < (int64_t)(uVar2 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    uVar5 = *param_1;
    uVar2 = param_2[-1];
    uVar1 = param_1[lVar9 >> 1];
    uVar10 = uVar5;
    if (uVar5 < uVar1) {
      uVar10 = uVar1;
      uVar1 = uVar5;
    }
    puVar3 = param_2;
    puVar7 = param_1;
    if ((uVar2 <= uVar10) && (uVar10 = uVar1, uVar1 < uVar2)) {
      uVar10 = uVar2;
    }
    while( true ) {
      while (uVar5 < uVar10) {
        uVar5 = puVar7[1];
        puVar7 = puVar7 + 1;
      }
      puVar3 = puVar3 + -1;
      uVar2 = *puVar3;
      while (uVar10 < uVar2) {
        puVar3 = puVar3 + -1;
        uVar2 = *puVar3;
      }
      if (puVar3 <= puVar7) break;
      uVar2 = *puVar7;
      *puVar7 = *puVar3;
      *puVar3 = uVar2;
      uVar5 = puVar7[1];
      puVar7 = puVar7 + 1;
    }
    param_3 = param_3 + -1;
    FUN_1802d9ff0(puVar7,param_2,param_3);
    uVar2 = (int64_t)puVar7 - (int64_t)param_1;
    param_2 = puVar7;
  }
  if (param_3 != 0) {
    return;
  }
  lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < lVar9) {
    lVar12 = (lVar9 + -2 >> 1) + 1;
    lVar8 = lVar12 * 2 + 2;
    do {
      uVar2 = param_1[lVar12 + -1];
      lVar12 = lVar12 + -1;
      lVar8 = lVar8 + -2;
      lVar11 = lVar12;
      lVar4 = lVar8;
      while (lVar4 < lVar9) {
        lVar6 = lVar4 + -1;
        if (param_1[lVar4 + -1] <= param_1[lVar4]) {
          lVar6 = lVar4;
        }
        param_1[lVar11] = param_1[lVar6];
        lVar11 = lVar6;
        lVar4 = lVar6 * 2 + 2;
      }
      if (lVar4 == lVar9) {
        param_1[lVar11] = param_1[lVar4 + -1];
        lVar11 = lVar4 + -1;
      }
      while (lVar12 < lVar11) {
        lVar4 = lVar11 + -1 >> 1;
        if (uVar2 <= param_1[lVar4]) break;
        param_1[lVar11] = param_1[lVar4];
        lVar11 = lVar4;
      }
      param_1[lVar11] = uVar2;
    } while (lVar12 != 0);
  }
  if (1 < lVar9) {
    param_2 = param_2 + -1;
    do {
      lVar9 = lVar9 + -1;
      uVar2 = *param_2;
      lVar12 = 2;
      *param_2 = *param_1;
      bVar13 = lVar9 == 2;
      lVar8 = 0;
      lVar11 = 0;
      if (2 < lVar9) {
        do {
          lVar8 = lVar12 + -1;
          if (param_1[lVar12 + -1] <= param_1[lVar12]) {
            lVar8 = lVar12;
          }
          lVar12 = lVar8 * 2 + 2;
          param_1[lVar11] = param_1[lVar8];
          bVar13 = lVar12 == lVar9;
          lVar11 = lVar8;
        } while (lVar12 < lVar9);
      }
      if (bVar13) {
        param_1[lVar8] = param_1[lVar12 + -1];
        lVar8 = lVar12 + -1;
      }
      while (0 < lVar8) {
        lVar9 = lVar8 + -1 >> 1;
        if (uVar2 <= param_1[lVar9]) break;
        param_1[lVar8] = param_1[lVar9];
        lVar8 = lVar9;
      }
      param_2 = param_2 + -1;
      param_1[lVar8] = uVar2;
      lVar9 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < lVar9);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802da820)
// WARNING: Removing unreachable block (ram,0x0001802da82b)
// WARNING: Removing unreachable block (ram,0x0001802da840)
// WARNING: Removing unreachable block (ram,0x0001802da84d)
// WARNING: Removing unreachable block (ram,0x0001802da851)
// WARNING: Removing unreachable block (ram,0x0001802da869)
// WARNING: Removing unreachable block (ram,0x0001802da86b)
// WARNING: Removing unreachable block (ram,0x0001802da878)
// WARNING: Removing unreachable block (ram,0x0001802da880)
// WARNING: Removing unreachable block (ram,0x0001802da890)
// WARNING: Removing unreachable block (ram,0x0001802da89c)
// WARNING: Removing unreachable block (ram,0x0001802da8a0)
// WARNING: Removing unreachable block (ram,0x0001802da813)




// 函数: void FUN_1802d9ff9(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
void FUN_1802d9ff9(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  
  uVar2 = in_RAX - (int64_t)param_1;
  while ((0xe0 < (int64_t)(uVar2 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    uVar5 = *param_1;
    uVar2 = param_2[-1];
    uVar1 = param_1[lVar9 >> 1];
    uVar10 = uVar5;
    if (uVar5 < uVar1) {
      uVar10 = uVar1;
      uVar1 = uVar5;
    }
    puVar3 = param_2;
    puVar7 = param_1;
    if ((uVar2 <= uVar10) && (uVar10 = uVar1, uVar1 < uVar2)) {
      uVar10 = uVar2;
    }
    while( true ) {
      while (uVar5 < uVar10) {
        uVar5 = puVar7[1];
        puVar7 = puVar7 + 1;
      }
      puVar3 = puVar3 + -1;
      uVar2 = *puVar3;
      while (uVar10 < uVar2) {
        puVar3 = puVar3 + -1;
        uVar2 = *puVar3;
      }
      if (puVar3 <= puVar7) break;
      uVar2 = *puVar7;
      *puVar7 = *puVar3;
      *puVar3 = uVar2;
      uVar5 = puVar7[1];
      puVar7 = puVar7 + 1;
    }
    param_3 = param_3 + -1;
    FUN_1802d9ff0(puVar7,param_2,param_3);
    uVar2 = (int64_t)puVar7 - (int64_t)param_1;
    param_2 = puVar7;
  }
  if (param_3 != 0) {
    return;
  }
  lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < lVar9) {
    lVar12 = (lVar9 + -2 >> 1) + 1;
    lVar8 = lVar12 * 2 + 2;
    do {
      uVar2 = param_1[lVar12 + -1];
      lVar12 = lVar12 + -1;
      lVar8 = lVar8 + -2;
      lVar11 = lVar12;
      lVar4 = lVar8;
      while (lVar4 < lVar9) {
        lVar6 = lVar4 + -1;
        if (param_1[lVar4 + -1] <= param_1[lVar4]) {
          lVar6 = lVar4;
        }
        param_1[lVar11] = param_1[lVar6];
        lVar11 = lVar6;
        lVar4 = lVar6 * 2 + 2;
      }
      if (lVar4 == lVar9) {
        param_1[lVar11] = param_1[lVar4 + -1];
        lVar11 = lVar4 + -1;
      }
      while (lVar12 < lVar11) {
        lVar4 = lVar11 + -1 >> 1;
        if (uVar2 <= param_1[lVar4]) break;
        param_1[lVar11] = param_1[lVar4];
        lVar11 = lVar4;
      }
      param_1[lVar11] = uVar2;
    } while (lVar12 != 0);
  }
  if (1 < lVar9) {
    param_2 = param_2 + -1;
    do {
      lVar9 = lVar9 + -1;
      uVar2 = *param_2;
      lVar12 = 2;
      *param_2 = *param_1;
      bVar13 = lVar9 == 2;
      lVar8 = 0;
      lVar11 = 0;
      if (2 < lVar9) {
        do {
          lVar8 = lVar12 + -1;
          if (param_1[lVar12 + -1] <= param_1[lVar12]) {
            lVar8 = lVar12;
          }
          lVar12 = lVar8 * 2 + 2;
          param_1[lVar11] = param_1[lVar8];
          bVar13 = lVar12 == lVar9;
          lVar11 = lVar8;
        } while (lVar12 < lVar9);
      }
      if (bVar13) {
        param_1[lVar8] = param_1[lVar12 + -1];
        lVar8 = lVar12 + -1;
      }
      while (0 < lVar8) {
        lVar9 = lVar8 + -1 >> 1;
        if (uVar2 <= param_1[lVar9]) break;
        param_1[lVar8] = param_1[lVar9];
        lVar8 = lVar9;
      }
      param_2 = param_2 + -1;
      param_1[lVar8] = uVar2;
      lVar9 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < lVar9);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802da820)
// WARNING: Removing unreachable block (ram,0x0001802da82b)
// WARNING: Removing unreachable block (ram,0x0001802da840)
// WARNING: Removing unreachable block (ram,0x0001802da84d)
// WARNING: Removing unreachable block (ram,0x0001802da851)
// WARNING: Removing unreachable block (ram,0x0001802da869)
// WARNING: Removing unreachable block (ram,0x0001802da86b)
// WARNING: Removing unreachable block (ram,0x0001802da878)
// WARNING: Removing unreachable block (ram,0x0001802da880)
// WARNING: Removing unreachable block (ram,0x0001802da890)
// WARNING: Removing unreachable block (ram,0x0001802da89c)
// WARNING: Removing unreachable block (ram,0x0001802da8a0)
// WARNING: Removing unreachable block (ram,0x0001802da813)




// 函数: void FUN_1802da01a(void)
void FUN_1802da01a(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *in_R9;
  int64_t lVar12;
  bool bVar13;
  
  do {
    puVar7 = in_R9;
    if (unaff_RSI < 1) break;
    lVar9 = (int64_t)in_R9 - (int64_t)unaff_RDI >> 3;
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    uVar5 = *unaff_RDI;
    uVar1 = in_R9[-1];
    uVar2 = unaff_RDI[lVar9 >> 1];
    uVar10 = uVar5;
    if (uVar5 < uVar2) {
      uVar10 = uVar2;
      uVar2 = uVar5;
    }
    puVar3 = in_R9;
    puVar7 = unaff_RDI;
    if ((uVar1 <= uVar10) && (uVar10 = uVar2, uVar2 < uVar1)) {
      uVar10 = uVar1;
    }
    while( true ) {
      while (uVar5 < uVar10) {
        uVar5 = puVar7[1];
        puVar7 = puVar7 + 1;
      }
      puVar3 = puVar3 + -1;
      uVar1 = *puVar3;
      while (uVar10 < uVar1) {
        puVar3 = puVar3 + -1;
        uVar1 = *puVar3;
      }
      if (puVar3 <= puVar7) break;
      uVar1 = *puVar7;
      *puVar7 = *puVar3;
      *puVar3 = uVar1;
      uVar5 = puVar7[1];
      puVar7 = puVar7 + 1;
    }
    unaff_RSI = unaff_RSI + -1;
    FUN_1802d9ff0(puVar7,in_R9,unaff_RSI);
    in_R9 = puVar7;
  } while (0xe0 < (int64_t)((int64_t)puVar7 - (int64_t)unaff_RDI & 0xfffffffffffffff8U));
  if (unaff_RSI != 0) {
    return;
  }
  lVar9 = (int64_t)puVar7 - (int64_t)unaff_RDI >> 3;
  if (1 < lVar9) {
    lVar12 = (lVar9 + -2 >> 1) + 1;
    lVar8 = lVar12 * 2 + 2;
    do {
      uVar1 = unaff_RDI[lVar12 + -1];
      lVar12 = lVar12 + -1;
      lVar8 = lVar8 + -2;
      lVar11 = lVar12;
      lVar4 = lVar8;
      while (lVar4 < lVar9) {
        lVar6 = lVar4 + -1;
        if (unaff_RDI[lVar4 + -1] <= unaff_RDI[lVar4]) {
          lVar6 = lVar4;
        }
        unaff_RDI[lVar11] = unaff_RDI[lVar6];
        lVar11 = lVar6;
        lVar4 = lVar6 * 2 + 2;
      }
      if (lVar4 == lVar9) {
        unaff_RDI[lVar11] = unaff_RDI[lVar4 + -1];
        lVar11 = lVar4 + -1;
      }
      while (lVar12 < lVar11) {
        lVar4 = lVar11 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar4]) break;
        unaff_RDI[lVar11] = unaff_RDI[lVar4];
        lVar11 = lVar4;
      }
      unaff_RDI[lVar11] = uVar1;
    } while (lVar12 != 0);
  }
  if (1 < lVar9) {
    puVar7 = puVar7 + -1;
    do {
      lVar9 = lVar9 + -1;
      uVar1 = *puVar7;
      lVar12 = 2;
      *puVar7 = *unaff_RDI;
      bVar13 = lVar9 == 2;
      lVar8 = 0;
      lVar11 = 0;
      if (2 < lVar9) {
        do {
          lVar8 = lVar12 + -1;
          if (unaff_RDI[lVar12 + -1] <= unaff_RDI[lVar12]) {
            lVar8 = lVar12;
          }
          lVar12 = lVar8 * 2 + 2;
          unaff_RDI[lVar11] = unaff_RDI[lVar8];
          bVar13 = lVar12 == lVar9;
          lVar11 = lVar8;
        } while (lVar12 < lVar9);
      }
      if (bVar13) {
        unaff_RDI[lVar8] = unaff_RDI[lVar12 + -1];
        lVar8 = lVar12 + -1;
      }
      while (0 < lVar8) {
        lVar9 = lVar8 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar9]) break;
        unaff_RDI[lVar8] = unaff_RDI[lVar9];
        lVar8 = lVar9;
      }
      puVar7 = puVar7 + -1;
      unaff_RDI[lVar8] = uVar1;
      lVar9 = (8 - (int64_t)unaff_RDI) + (int64_t)puVar7 >> 3;
    } while (1 < lVar9);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802da820)
// WARNING: Removing unreachable block (ram,0x0001802da82b)
// WARNING: Removing unreachable block (ram,0x0001802da840)
// WARNING: Removing unreachable block (ram,0x0001802da84d)
// WARNING: Removing unreachable block (ram,0x0001802da851)
// WARNING: Removing unreachable block (ram,0x0001802da869)
// WARNING: Removing unreachable block (ram,0x0001802da86b)
// WARNING: Removing unreachable block (ram,0x0001802da878)
// WARNING: Removing unreachable block (ram,0x0001802da880)
// WARNING: Removing unreachable block (ram,0x0001802da890)
// WARNING: Removing unreachable block (ram,0x0001802da89c)
// WARNING: Removing unreachable block (ram,0x0001802da8a0)
// WARNING: Removing unreachable block (ram,0x0001802da813)




// 函数: void FUN_1802da0e0(void)
void FUN_1802da0e0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_R9;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  
  if (unaff_RSI != 0) {
    return;
  }
  lVar8 = in_R9 - (int64_t)unaff_RDI >> 3;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_RDI[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar5 = lVar5 + -2;
      lVar6 = lVar7;
      lVar2 = lVar5;
      while (lVar2 < lVar8) {
        lVar3 = lVar2 + -1;
        if (unaff_RDI[lVar2 + -1] <= unaff_RDI[lVar2]) {
          lVar3 = lVar2;
        }
        unaff_RDI[lVar6] = unaff_RDI[lVar3];
        lVar6 = lVar3;
        lVar2 = lVar3 * 2 + 2;
      }
      if (lVar2 == lVar8) {
        unaff_RDI[lVar6] = unaff_RDI[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (lVar7 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar2]) break;
        unaff_RDI[lVar6] = unaff_RDI[lVar2];
        lVar6 = lVar2;
      }
      unaff_RDI[lVar6] = uVar1;
    } while (lVar7 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (uint64_t *)(in_R9 + -8);
    do {
      lVar8 = lVar8 + -1;
      uVar1 = *puVar4;
      lVar7 = 2;
      *puVar4 = *unaff_RDI;
      bVar9 = lVar8 == 2;
      lVar5 = 0;
      lVar6 = 0;
      if (2 < lVar8) {
        do {
          lVar5 = lVar7 + -1;
          if (unaff_RDI[lVar7 + -1] <= unaff_RDI[lVar7]) {
            lVar5 = lVar7;
          }
          lVar7 = lVar5 * 2 + 2;
          unaff_RDI[lVar6] = unaff_RDI[lVar5];
          bVar9 = lVar7 == lVar8;
          lVar6 = lVar5;
        } while (lVar7 < lVar8);
      }
      if (bVar9) {
        unaff_RDI[lVar5] = unaff_RDI[lVar7 + -1];
        lVar5 = lVar7 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar8]) break;
        unaff_RDI[lVar5] = unaff_RDI[lVar8];
        lVar5 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RDI[lVar5] = uVar1;
      lVar8 = (8 - (int64_t)unaff_RDI) + (int64_t)puVar4 >> 3;
    } while (1 < lVar8);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802da820)
// WARNING: Removing unreachable block (ram,0x0001802da82b)
// WARNING: Removing unreachable block (ram,0x0001802da840)
// WARNING: Removing unreachable block (ram,0x0001802da84d)
// WARNING: Removing unreachable block (ram,0x0001802da851)
// WARNING: Removing unreachable block (ram,0x0001802da869)
// WARNING: Removing unreachable block (ram,0x0001802da86b)
// WARNING: Removing unreachable block (ram,0x0001802da878)
// WARNING: Removing unreachable block (ram,0x0001802da880)
// WARNING: Removing unreachable block (ram,0x0001802da890)
// WARNING: Removing unreachable block (ram,0x0001802da89c)
// WARNING: Removing unreachable block (ram,0x0001802da8a0)
// WARNING: Removing unreachable block (ram,0x0001802da813)




// 函数: void FUN_1802da0ea(void)
void FUN_1802da0ea(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RDI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_R9;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  
  lVar8 = in_R9 - (int64_t)unaff_RDI >> 3;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_RDI[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar5 = lVar5 + -2;
      lVar6 = lVar7;
      lVar2 = lVar5;
      while (lVar2 < lVar8) {
        lVar3 = lVar2 + -1;
        if (unaff_RDI[lVar2 + -1] <= unaff_RDI[lVar2]) {
          lVar3 = lVar2;
        }
        unaff_RDI[lVar6] = unaff_RDI[lVar3];
        lVar6 = lVar3;
        lVar2 = lVar3 * 2 + 2;
      }
      if (lVar2 == lVar8) {
        unaff_RDI[lVar6] = unaff_RDI[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (lVar7 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar2]) break;
        unaff_RDI[lVar6] = unaff_RDI[lVar2];
        lVar6 = lVar2;
      }
      unaff_RDI[lVar6] = uVar1;
    } while (lVar7 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (uint64_t *)(in_R9 + -8);
    do {
      lVar8 = lVar8 + -1;
      uVar1 = *puVar4;
      lVar7 = 2;
      *puVar4 = *unaff_RDI;
      bVar9 = lVar8 == 2;
      lVar5 = 0;
      lVar6 = 0;
      if (2 < lVar8) {
        do {
          lVar5 = lVar7 + -1;
          if (unaff_RDI[lVar7 + -1] <= unaff_RDI[lVar7]) {
            lVar5 = lVar7;
          }
          lVar7 = lVar5 * 2 + 2;
          unaff_RDI[lVar6] = unaff_RDI[lVar5];
          bVar9 = lVar7 == lVar8;
          lVar6 = lVar5;
        } while (lVar7 < lVar8);
      }
      if (bVar9) {
        unaff_RDI[lVar5] = unaff_RDI[lVar7 + -1];
        lVar5 = lVar7 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar8]) break;
        unaff_RDI[lVar5] = unaff_RDI[lVar8];
        lVar5 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RDI[lVar5] = uVar1;
      lVar8 = (8 - (int64_t)unaff_RDI) + (int64_t)puVar4 >> 3;
    } while (1 < lVar8);
  }
  return;
}






// 函数: void FUN_1802da110(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1802da110(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint uVar14;
  uint uVar15;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  lVar8 = *param_1;
  lVar3 = param_1[1];
  lVar12 = (int64_t)(int)param_2[1] - (int64_t)(int)lVar3;
  if (1 < lVar12) {
    lVar13 = (lVar12 + -2 >> 1) + 1;
    do {
      lVar13 = lVar13 + -1;
      uVar14 = (int)lVar13 + (int)lVar3;
      uVar11 = uVar14 >> 10;
      uVar10 = (uint64_t)(uVar14 + uVar11 * -0x400);
      lVar6 = *(int64_t *)(lVar8 + 8 + (uint64_t)uVar11 * 8);
      puVar1 = (uint64_t *)(lVar6 + uVar10 * 0x18);
      uStack_78 = *puVar1;
      uStack_70 = puVar1[1];
      uStack_68 = *(uint64_t *)(lVar6 + 0x10 + uVar10 * 0x18);
      lStack_a8 = *param_1;
      lStack_a0 = param_1[1];
      FUN_1802dadf0(&lStack_a8,lVar13,lVar12,lVar13,&uStack_78,param_4);
    } while (lVar13 != 0);
  }
  lVar8 = *param_2;
  uVar11 = *(uint *)(param_2 + 1);
  lStack_a0 = param_2[1];
  iVar5 = *(int *)(param_3 + 8);
  lStack_a8 = lVar8;
  if ((int)uVar11 < iVar5) {
    uVar14 = *(uint *)(param_1 + 1);
    lVar12 = *param_1;
    uVar7 = uVar14 >> 10;
    lVar3 = (uint64_t)(uVar14 - (uVar14 & 0xfffffc00)) * 0x18;
    do {
      uVar15 = uVar11 >> 10;
      if (*(float *)(*(int64_t *)(lVar12 + 8 + (uint64_t)uVar7 * 8) + 8 + lVar3) <
          *(float *)(*(int64_t *)(lVar8 + 8 + (uint64_t)uVar15 * 8) + 8 +
                    (uint64_t)(uVar11 + uVar15 * -0x400) * 0x18)) {
        lVar13 = *(int64_t *)(lVar8 + 8 + (uint64_t)uVar15 * 8);
        uVar10 = (uint64_t)(uVar11 + uVar15 * -0x400);
        lVar6 = *(int64_t *)(lVar12 + 8 + (uint64_t)uVar7 * 8);
        puVar1 = (uint64_t *)(lVar13 + uVar10 * 0x18);
        uStack_60 = *puVar1;
        uStack_58 = puVar1[1];
        uStack_50 = *(uint64_t *)(lVar13 + 0x10 + uVar10 * 0x18);
        lVar13 = *(int64_t *)(lVar8 + 8 + (uint64_t)uVar15 * 8);
        puVar1 = (uint64_t *)(lVar6 + lVar3);
        uVar9 = puVar1[1];
        uVar4 = *(uint64_t *)(lVar6 + 0x10 + lVar3);
        uVar10 = (uint64_t)(uVar11 + uVar15 * -0x400);
        puVar2 = (uint64_t *)(lVar13 + uVar10 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        lStack_98 = *param_1;
        lStack_90 = param_1[1];
        *(uint64_t *)(lVar13 + 0x10 + uVar10 * 0x18) = uVar4;
        FUN_1802dadf0(&lStack_98,0,(int64_t)(int)param_2[1] - (int64_t)(int)uVar14,0,&uStack_60,
                      param_4);
        uVar14 = *(uint *)(param_1 + 1);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar5);
  }
  lVar8 = *param_2;
  uVar11 = *(uint *)(param_2 + 1);
  lStack_90 = param_2[1];
  lVar3 = param_1[1];
  if (1 < (int64_t)(int)uVar11 - (int64_t)(int)lVar3) {
    lVar12 = *param_1;
    uVar14 = (uint)param_1[1];
    uVar10 = (uint64_t)(uVar14 + (uVar14 >> 10) * -0x400);
    lStack_98 = lVar8;
    do {
      uVar7 = uVar11 - 1;
      uVar15 = uVar7 & 0x3ff;
      lVar13 = *(int64_t *)(lVar8 + 8 + (uint64_t)(uVar7 >> 10) * 8);
      puVar1 = (uint64_t *)(lVar13 + (uint64_t)uVar15 * 0x18);
      uStack_48 = *puVar1;
      uStack_40 = puVar1[1];
      uStack_38 = *(uint64_t *)(lVar13 + 0x10 + (uint64_t)uVar15 * 0x18);
      lVar13 = *(int64_t *)(lVar12 + 8 + (uint64_t)(uVar14 >> 10) * 8);
      lVar6 = *(int64_t *)(lVar8 + 8 + (uint64_t)(uVar7 >> 10) * 8);
      puVar1 = (uint64_t *)(lVar13 + uVar10 * 0x18);
      uVar9 = puVar1[1];
      uVar4 = *(uint64_t *)(lVar13 + 0x10 + uVar10 * 0x18);
      puVar2 = (uint64_t *)(lVar6 + (uint64_t)uVar15 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      lStack_88 = *param_1;
      lStack_80 = param_1[1];
      *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar15 * 0x18) = uVar4;
      FUN_1802dadf0(&lStack_88,0,((int64_t)(int)uVar11 - (int64_t)(int)uVar14) + -1,0,&uStack_48,
                    param_4);
      uVar11 = uVar7;
    } while (1 < (int64_t)(int)uVar7 - (int64_t)(int)lVar3);
  }
  return;
}






// 函数: void FUN_1802da450(uint *param_1,uint *param_2,int64_t param_3,int64_t param_4)
void FUN_1802da450(uint *param_1,uint *param_2,int64_t param_3,int64_t param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  short sVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar8 = (int64_t)param_2 - (int64_t)param_1;
  do {
    if (((int64_t)(uVar8 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_1802da990(param_1,param_2,param_2,param_4);
      }
      return;
    }
    lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    lVar5 = *(int64_t *)(param_4 + 0x58);
    uVar8 = (uint64_t)*param_1;
    puVar10 = param_1 + (lVar9 >> 1) * 2;
    sVar1 = *(short *)(uVar8 * 0x70 + 0x30 + lVar5);
    sVar2 = *(short *)((uint64_t)*puVar10 * 0x70 + 0x30 + lVar5);
    sVar3 = *(short *)((uint64_t)param_2[-2] * 0x70 + 0x30 + lVar5);
    if (sVar1 < sVar2) {
      puVar12 = puVar10;
      if (sVar3 <= sVar2) {
        sVar7 = sVar1 - sVar3;
        puVar10 = param_1;
        sVar2 = sVar1;
LAB_1802da501:
        puVar12 = puVar10;
        if (SBORROW2(sVar2,sVar3) != sVar7 < 0) {
          puVar12 = param_2 + -2;
        }
      }
    }
    else {
      puVar12 = param_1;
      if (sVar3 <= sVar1) {
        sVar7 = sVar2 - sVar3;
        goto LAB_1802da501;
      }
    }
    uVar4 = *puVar12;
    puVar10 = param_2;
    puVar12 = param_1;
    while( true ) {
      while( true ) {
        lVar9 = *(int64_t *)(param_4 + 0x58);
        sVar1 = *(short *)(lVar9 + (uint64_t)uVar4 * 0x70 + 0x30);
        if (sVar1 <= *(short *)(uVar8 * 0x70 + 0x30 + lVar9)) break;
        uVar8 = (uint64_t)puVar12[2];
        puVar12 = puVar12 + 2;
      }
      sVar3 = *(short *)((uint64_t)puVar10[-2] * 0x70 + 0x30 + lVar9);
      puVar11 = puVar10;
      while (puVar10 = puVar11 + -2, sVar1 < sVar3) {
        sVar3 = *(short *)((uint64_t)puVar11[-4] * 0x70 + 0x30 + lVar9);
        puVar11 = puVar10;
      }
      if (puVar10 <= puVar12) break;
      uVar6 = *(uint64_t *)puVar12;
      *(uint64_t *)puVar12 = *(uint64_t *)puVar10;
      puVar12 = puVar12 + 2;
      *(uint64_t *)puVar10 = uVar6;
      uVar8 = (uint64_t)*puVar12;
    }
    param_3 = param_3 + -1;
    FUN_1802da450(puVar12,param_2,param_3,param_4);
    uVar8 = (int64_t)puVar12 - (int64_t)param_1;
    param_2 = puVar12;
  } while( true );
}






