#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part026.c - 11 个函数

// 函数: void FUN_1804f93fb(void)
void FUN_1804f93fb(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint unaff_EBX;
  int64_t *plVar5;
  int64_t unaff_RDI;
  int64_t lVar6;
  
  do {
    plVar5 = *(int64_t **)(unaff_RDI + 0x87b370);
    lVar6 = (uint64_t)(unaff_EBX & 0xf) * 0xbe0 +
            *(int64_t *)(*(int64_t *)(unaff_RDI + 0x87b340) + (uint64_t)(unaff_EBX >> 4) * 8);
    if (plVar5 < *(int64_t **)(unaff_RDI + 0x87b378)) {
      *(int64_t **)(unaff_RDI + 0x87b370) = plVar5 + 1;
      *plVar5 = lVar6;
    }
    else {
      plVar4 = *(int64_t **)(unaff_RDI + 0x87b368);
      lVar2 = (int64_t)plVar5 - (int64_t)plVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1804f9479:
        plVar3 = (int64_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(unaff_RDI + 0x87b380));
        plVar4 = *(int64_t **)(unaff_RDI + 0x87b368);
        plVar5 = *(int64_t **)(unaff_RDI + 0x87b370);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_1804f9479;
        plVar3 = (int64_t *)0x0;
      }
      if (plVar4 != plVar5) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar4,(int64_t)plVar5 - (int64_t)plVar4);
      }
      *plVar3 = lVar6;
      if (*(int64_t *)(unaff_RDI + 0x87b368) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t **)(unaff_RDI + 0x87b368) = plVar3;
      *(int64_t **)(unaff_RDI + 0x87b378) = plVar3 + lVar2;
      *(int64_t **)(unaff_RDI + 0x87b370) = plVar3 + 1;
    }
    iVar1 = *(int *)(unaff_RDI + 0x87b318);
    unaff_EBX = unaff_EBX + 1;
    if (iVar1 <= (int)unaff_EBX) break;
    do {
      if (*(int *)(*(int64_t *)
                    (*(int64_t *)(unaff_RDI + 0x87b340) + (uint64_t)(unaff_EBX >> 4) * 8) + 8 +
                  (uint64_t)(unaff_EBX & 0xf) * 0xbe0) != 0) break;
      unaff_EBX = unaff_EBX + 1;
    } while ((int)unaff_EBX < iVar1);
  } while ((int)unaff_EBX < iVar1);
  *(int8_t *)(unaff_RDI + 0x87b388) = 0;
  return;
}






// 函数: void FUN_1804f954f(void)
void FUN_1804f954f(void)

{
  int64_t unaff_RDI;
  
  *(int8_t *)(unaff_RDI + 0x87b388) = 0;
  return;
}






// 函数: void FUN_1804f955b(void)
void FUN_1804f955b(void)

{
  return;
}






// 函数: void FUN_1804f9570(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1804f9570(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lStackX_8;
  
  if (*(char *)(param_1 + 0x87a940) != '\0') {
    if (*(char *)(param_2 + 0x3fe4) == '\0') {
      *(uint64_t *)(param_2 + 0x3fc8) = *(uint64_t *)(param_2 + 0x3fc0);
      *(int8_t *)(param_2 + 0x3fe4) = 1;
    }
    uVar4 = 0;
    *(int32_t *)(param_2 + 0x3fe0) = 0;
    if (*(char *)(param_3 + 0x3fe4) == '\0') {
      *(uint64_t *)(param_3 + 0x3fc8) = *(uint64_t *)(param_3 + 0x3fc0);
      *(int8_t *)(param_3 + 0x3fe4) = 1;
    }
    *(int32_t *)(param_3 + 0x3fe0) = 0;
    if (*(char *)(param_4 + 0x3fe4) == '\0') {
      *(uint64_t *)(param_4 + 0x3fc8) = *(uint64_t *)(param_4 + 0x3fc0);
      *(int8_t *)(param_4 + 0x3fe4) = 1;
    }
    *(int32_t *)(param_4 + 0x3fe0) = 0;
    *(uint *)(param_1 + 0x87b714) = *(uint *)(param_1 + 0x87b714) & 0xfffffffe;
    uVar1 = *(uint *)(param_1 + 0x52ed94);
    if (0 < (int)uVar1) {
      piVar2 = (int *)(param_1 + 0x30b0);
      uVar6 = uVar4;
      do {
        if (-1 < *piVar2) goto LAB_1804f9648;
        uVar4 = (uint64_t)((int)uVar4 + 1);
        uVar6 = uVar6 + 1;
        piVar2 = piVar2 + 0x298;
      } while ((int64_t)uVar6 < (int64_t)(int)uVar1);
    }
    uVar4 = (uint64_t)uVar1;
LAB_1804f9648:
    uVar3 = (uint)uVar4;
    while ((int)uVar3 < (int)uVar1) {
      lVar7 = param_1 + 0x30a0 + (int64_t)(int)uVar4 * 0xa60;
      lStackX_8 = lVar7;
      if (*(char *)(param_2 + 0x3fe4) == '\0') {
LAB_1804f969b:
        SystemInitializer(param_2 + 0x3fc0,&lStackX_8);
      }
      else {
        if (0x7f8 < *(int *)(param_2 + 0x3fe0) + 1) {
          FUN_1804fcbe0(param_2);
          goto LAB_1804f969b;
        }
        *(int64_t *)(param_2 + (int64_t)*(int *)(param_2 + 0x3fe0) * 8) = lVar7;
        *(int *)(param_2 + 0x3fe0) = *(int *)(param_2 + 0x3fe0) + 1;
      }
      if ((*(byte *)(lVar7 + 0x56c) & 1) == 0) {
        lStackX_8 = lVar7;
        if (*(char *)(param_4 + 0x3fe4) != '\0') {
          if (*(int *)(param_4 + 0x3fe0) + 1 < 0x7f9) {
            *(int64_t *)(param_4 + (int64_t)*(int *)(param_4 + 0x3fe0) * 8) = lVar7;
            *(int *)(param_4 + 0x3fe0) = *(int *)(param_4 + 0x3fe0) + 1;
            goto LAB_1804f9731;
          }
          FUN_1804fcbe0(param_4);
        }
        lVar5 = param_4 + 0x3fc0;
LAB_1804f9727:
        SystemInitializer(lVar5,&lStackX_8);
      }
      else {
        lStackX_8 = lVar7;
        if (*(char *)(param_3 + 0x3fe4) == '\0') {
LAB_1804f96dc:
          lVar5 = param_3 + 0x3fc0;
          goto LAB_1804f9727;
        }
        if (0x7f8 < *(int *)(param_3 + 0x3fe0) + 1) {
          FUN_1804fcbe0(param_3);
          goto LAB_1804f96dc;
        }
        *(int64_t *)(param_3 + (int64_t)*(int *)(param_3 + 0x3fe0) * 8) = lVar7;
        *(int *)(param_3 + 0x3fe0) = *(int *)(param_3 + 0x3fe0) + 1;
      }
LAB_1804f9731:
      if ((*(uint *)(lVar7 + 0x56c) & 0x10000) != 0) {
        *(uint *)(param_1 + 0x87b714) = *(uint *)(param_1 + 0x87b714) | 1;
      }
      uVar3 = (uint)*(short *)(param_1 + 0x52dda0 + (int64_t)(int)uVar4 * 2);
      uVar4 = (uint64_t)uVar3;
    }
    *(int8_t *)(param_1 + 0x87a940) = 0;
  }
  return;
}






// 函数: void FUN_1804f959a(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1804f959a(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  bool in_ZF;
  int64_t lStack0000000000000050;
  
  if (in_ZF) {
    *(uint64_t *)(param_2 + 0x3fc8) = *(uint64_t *)(param_2 + 0x3fc0);
    *(int8_t *)(param_2 + 0x3fe4) = 1;
  }
  uVar4 = 0;
  *(int32_t *)(param_2 + 0x3fe0) = 0;
  if (*(char *)(param_3 + 0x3fe4) == '\0') {
    *(uint64_t *)(param_3 + 0x3fc8) = *(uint64_t *)(param_3 + 0x3fc0);
    *(int8_t *)(param_3 + 0x3fe4) = 1;
  }
  *(int32_t *)(param_3 + 0x3fe0) = 0;
  if (*(char *)(param_4 + 0x3fe4) == '\0') {
    *(uint64_t *)(param_4 + 0x3fc8) = *(uint64_t *)(param_4 + 0x3fc0);
    *(int8_t *)(param_4 + 0x3fe4) = 1;
  }
  *(int32_t *)(param_4 + 0x3fe0) = 0;
  *(uint *)(unaff_RBP + 0x87b714) = *(uint *)(unaff_RBP + 0x87b714) & 0xfffffffe;
  uVar1 = *(uint *)(unaff_RBP + 0x52ed94);
  if (0 < (int)uVar1) {
    piVar2 = (int *)(unaff_RBP + 0x30b0);
    uVar6 = uVar4;
    do {
      if (-1 < *piVar2) goto LAB_1804f9648;
      uVar4 = (uint64_t)((int)uVar4 + 1);
      uVar6 = uVar6 + 1;
      piVar2 = piVar2 + 0x298;
    } while ((int64_t)uVar6 < (int64_t)(int)uVar1);
  }
  uVar4 = (uint64_t)uVar1;
LAB_1804f9648:
  uVar3 = (uint)uVar4;
  do {
    if ((int)uVar1 <= (int)uVar3) {
      *(int8_t *)(unaff_RBP + 0x87a940) = 0;
      return;
    }
    lVar7 = unaff_RBP + 0x30a0 + (int64_t)(int)uVar4 * 0xa60;
    lStack0000000000000050 = lVar7;
    if (*(char *)(unaff_RDI + 0x3fe4) == '\0') {
LAB_1804f969b:
      SystemInitializer(unaff_RDI + 0x3fc0,&stack0x00000050);
    }
    else {
      if (0x7f8 < *(int *)(unaff_RDI + 0x3fe0) + 1) {
        FUN_1804fcbe0();
        goto LAB_1804f969b;
      }
      *(int64_t *)(unaff_RDI + (int64_t)*(int *)(unaff_RDI + 0x3fe0) * 8) = lVar7;
      *(int *)(unaff_RDI + 0x3fe0) = *(int *)(unaff_RDI + 0x3fe0) + 1;
    }
    if ((*(byte *)(lVar7 + 0x56c) & 1) == 0) {
      lStack0000000000000050 = lVar7;
      if (*(char *)(unaff_R14 + 0x3fe4) != '\0') {
        if (*(int *)(unaff_R14 + 0x3fe0) + 1 < 0x7f9) {
          *(int64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_R14 + 0x3fe0) * 8) = lVar7;
          *(int *)(unaff_R14 + 0x3fe0) = *(int *)(unaff_R14 + 0x3fe0) + 1;
          goto LAB_1804f9731;
        }
        FUN_1804fcbe0();
      }
      lVar5 = unaff_R14 + 0x3fc0;
LAB_1804f9727:
      SystemInitializer(lVar5,&stack0x00000050);
    }
    else {
      lStack0000000000000050 = lVar7;
      if (*(char *)(unaff_RSI + 0x3fe4) == '\0') {
LAB_1804f96dc:
        lVar5 = unaff_RSI + 0x3fc0;
        goto LAB_1804f9727;
      }
      if (0x7f8 < *(int *)(unaff_RSI + 0x3fe0) + 1) {
        FUN_1804fcbe0();
        goto LAB_1804f96dc;
      }
      *(int64_t *)(unaff_RSI + (int64_t)*(int *)(unaff_RSI + 0x3fe0) * 8) = lVar7;
      *(int *)(unaff_RSI + 0x3fe0) = *(int *)(unaff_RSI + 0x3fe0) + 1;
    }
LAB_1804f9731:
    if ((*(uint *)(lVar7 + 0x56c) & 0x10000) != 0) {
      *(uint *)(unaff_RBP + 0x87b714) = *(uint *)(unaff_RBP + 0x87b714) | 1;
    }
    uVar3 = (uint)*(short *)(unaff_RBP + 0x52dda0 + (int64_t)(int)uVar4 * 2);
    uVar4 = (uint64_t)uVar3;
  } while( true );
}






// 函数: void FUN_1804f9651(int param_1)
void FUN_1804f9651(int param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R14;
  int64_t lStack0000000000000050;
  
  do {
    lVar2 = unaff_RBP + 0x30a0 + (int64_t)param_1 * 0xa60;
    lStack0000000000000050 = lVar2;
    if (*(char *)(unaff_RDI + 0x3fe4) == '\0') {
LAB_1804f969b:
      SystemInitializer(unaff_RDI + 0x3fc0,&stack0x00000050);
    }
    else {
      if (0x7f8 < *(int *)(unaff_RDI + 0x3fe0) + 1) {
        FUN_1804fcbe0();
        goto LAB_1804f969b;
      }
      *(int64_t *)(unaff_RDI + (int64_t)*(int *)(unaff_RDI + 0x3fe0) * 8) = lVar2;
      *(int *)(unaff_RDI + 0x3fe0) = *(int *)(unaff_RDI + 0x3fe0) + 1;
    }
    if ((*(byte *)(lVar2 + 0x56c) & 1) == 0) {
      lStack0000000000000050 = lVar2;
      if (*(char *)(unaff_R14 + 0x3fe4) != '\0') {
        if (*(int *)(unaff_R14 + 0x3fe0) + 1 < 0x7f9) {
          *(int64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_R14 + 0x3fe0) * 8) = lVar2;
          *(int *)(unaff_R14 + 0x3fe0) = *(int *)(unaff_R14 + 0x3fe0) + 1;
          goto LAB_1804f9731;
        }
        FUN_1804fcbe0();
      }
      lVar1 = unaff_R14 + 0x3fc0;
LAB_1804f9727:
      SystemInitializer(lVar1,&stack0x00000050);
    }
    else {
      lStack0000000000000050 = lVar2;
      if (*(char *)(unaff_RSI + 0x3fe4) == '\0') {
LAB_1804f96dc:
        lVar1 = unaff_RSI + 0x3fc0;
        goto LAB_1804f9727;
      }
      if (0x7f8 < *(int *)(unaff_RSI + 0x3fe0) + 1) {
        FUN_1804fcbe0();
        goto LAB_1804f96dc;
      }
      *(int64_t *)(unaff_RSI + (int64_t)*(int *)(unaff_RSI + 0x3fe0) * 8) = lVar2;
      *(int *)(unaff_RSI + 0x3fe0) = *(int *)(unaff_RSI + 0x3fe0) + 1;
    }
LAB_1804f9731:
    if ((*(uint *)(lVar2 + 0x56c) & 0x10000) != 0) {
      *(uint *)(unaff_RBP + 0x87b714) = *(uint *)(unaff_RBP + 0x87b714) | 1;
    }
    param_1 = (int)*(short *)(unaff_RBP + 0x52dda0 + (int64_t)param_1 * 2);
    if (unaff_R12D <= param_1) {
      *(int8_t *)(unaff_RBP + 0x87a940) = 0;
      return;
    }
  } while( true );
}






// 函数: void FUN_1804f9760(void)
void FUN_1804f9760(void)

{
  int64_t unaff_RBP;
  
  *(int8_t *)(unaff_RBP + 0x87a940) = 0;
  return;
}






// 函数: void FUN_1804f976c(void)
void FUN_1804f976c(void)

{
  return;
}






// 函数: void FUN_1804f9776(int64_t param_1)
void FUN_1804f9776(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lStack0000000000000050;
  
code_r0x0001804f9776:
  *(int64_t *)(unaff_R14 + param_1 * 8) = unaff_RBX;
  *(int *)(unaff_R14 + 0x3fe0) = *(int *)(unaff_R14 + 0x3fe0) + 1;
LAB_1804f9731:
  do {
    if ((*(uint *)(unaff_RBX + 0x56c) & 0x10000) != 0) {
      *(uint *)(unaff_RBP + 0x87b714) = *(uint *)(unaff_RBP + 0x87b714) | 1;
    }
    iVar1 = (int)*(short *)(unaff_RBP + 0x52dda0 + unaff_R15 * 2);
    if (unaff_R12D <= iVar1) {
      *(int8_t *)(unaff_RBP + 0x87a940) = 0;
      return;
    }
    unaff_R15 = (int64_t)iVar1;
    unaff_RBX = unaff_RBP + 0x30a0 + unaff_R15 * 0xa60;
    lStack0000000000000050 = unaff_RBX;
    if (*(char *)(unaff_RDI + 0x3fe4) == '\0') {
LAB_1804f969b:
      SystemInitializer(unaff_RDI + 0x3fc0,&stack0x00000050);
    }
    else {
      if (0x7f8 < *(int *)(unaff_RDI + 0x3fe0) + 1) {
        FUN_1804fcbe0();
        goto LAB_1804f969b;
      }
      *(int64_t *)(unaff_RDI + (int64_t)*(int *)(unaff_RDI + 0x3fe0) * 8) = unaff_RBX;
      *(int *)(unaff_RDI + 0x3fe0) = *(int *)(unaff_RDI + 0x3fe0) + 1;
    }
    if ((*(byte *)(unaff_RBX + 0x56c) & 1) == 0) {
      lStack0000000000000050 = unaff_RBX;
      if (*(char *)(unaff_R14 + 0x3fe4) != '\0') {
        param_1 = (int64_t)*(int *)(unaff_R14 + 0x3fe0);
        if (*(int *)(unaff_R14 + 0x3fe0) + 1 < 0x7f9) goto code_r0x0001804f9776;
        FUN_1804fcbe0();
      }
      lVar2 = unaff_R14 + 0x3fc0;
LAB_1804f9727:
      SystemInitializer(lVar2,&stack0x00000050);
      goto LAB_1804f9731;
    }
    lStack0000000000000050 = unaff_RBX;
    if (*(char *)(unaff_RSI + 0x3fe4) == '\0') {
LAB_1804f96dc:
      lVar2 = unaff_RSI + 0x3fc0;
      goto LAB_1804f9727;
    }
    if (0x7f8 < *(int *)(unaff_RSI + 0x3fe0) + 1) {
      FUN_1804fcbe0();
      goto LAB_1804f96dc;
    }
    *(int64_t *)(unaff_RSI + (int64_t)*(int *)(unaff_RSI + 0x3fe0) * 8) = unaff_RBX;
    *(int *)(unaff_RSI + 0x3fe0) = *(int *)(unaff_RSI + 0x3fe0) + 1;
  } while( true );
}






// 函数: void FUN_1804f9790(int64_t param_1,int *param_2)
void FUN_1804f9790(int64_t param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint64_t uStack_30;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  
  if (*param_2 < 0) {
    plVar8 = (int64_t *)0x0;
  }
  else {
    plVar8 = (int64_t *)(param_1 + 0x3730 + (int64_t)*param_2 * 0xa60);
  }
  uVar6 = *(uint64_t *)(param_2 + 1);
  uVar4 = *(uint64_t *)(param_2 + 3);
  uVar5 = *(uint64_t *)(param_2 + 5);
  fVar1 = (float)param_2[7];
  fVar2 = (float)param_2[8];
  fVar3 = (float)param_2[9];
  iStack_1c = (int)((uint64_t)uVar5 >> 0x20);
  iStack_20 = (int)uVar5;
  uStack_30._4_4_ = (int)((uint64_t)uVar6 >> 0x20);
  uStack_30._0_4_ = (int)uVar6;
  iStack_28 = (int)uVar4;
  iVar10 = uStack_30._4_4_;
  iVar9 = (int)uStack_30;
  uStack_30 = uVar6;
LAB_1804f9810:
  plVar8 = (int64_t *)plVar8[3];
  while (plVar8 == (int64_t *)0x0) {
    if (iVar9 == iStack_20) {
      if (iVar10 == iStack_1c) break;
      iVar10 = iVar10 + 1;
      uStack_30 = CONCAT44(iVar10,iStack_28);
      iVar9 = iStack_28;
    }
    else {
      iVar9 = iVar9 + 1;
      uStack_30._4_4_ = (int)((uint64_t)uStack_30 >> 0x20);
      uStack_30 = CONCAT44(uStack_30._4_4_,iVar9);
    }
    uVar6 = uStack_30;
    plVar8 = *(int64_t **)
              ((int64_t)
               ((int)((uint64_t)uStack_30 >> 0x20) * *(int *)(param_1 + 0x98d238) + iVar9) * 9 +
              *(int64_t *)(param_1 + 0x98d248));
  }
  do {
    if ((plVar8 == (int64_t *)0x0) ||
       (fVar11 = fVar1 - *(float *)(plVar8 + 1), fVar12 = fVar2 - *(float *)((int64_t)plVar8 + 0xc)
       , fVar11 * fVar11 + fVar12 * fVar12 <= fVar3)) break;
    plVar8 = (int64_t *)plVar8[3];
    while (plVar8 == (int64_t *)0x0) {
      if (iVar9 == iStack_20) {
        if (iVar10 == iStack_1c) break;
        iVar10 = iVar10 + 1;
        uStack_30 = CONCAT44(iVar10,iStack_28);
        iVar9 = iStack_28;
      }
      else {
        iVar9 = iVar9 + 1;
        uStack_30._4_4_ = (int)((uint64_t)uStack_30 >> 0x20);
        uStack_30 = CONCAT44(uStack_30._4_4_,iVar9);
      }
      uVar6 = uStack_30;
      plVar8 = *(int64_t **)
                ((int64_t)
                 ((int)((uint64_t)uStack_30 >> 0x20) * *(int *)(param_1 + 0x98d238) + iVar9) * 9 +
                *(int64_t *)(param_1 + 0x98d248));
    }
  } while( true );
  if (plVar8 == (int64_t *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *(int *)(*plVar8 + 0x10);
  }
  param_2[7] = (int)fVar1;
  param_2[8] = (int)fVar2;
  param_2[9] = (int)fVar3;
  *param_2 = iVar7;
  *(uint64_t *)(param_2 + 1) = uVar6;
  *(uint64_t *)(param_2 + 3) = uVar4;
  *(uint64_t *)(param_2 + 5) = uVar5;
  if ((iVar7 == -1) || (*(int *)(*plVar8 + 0x568) == 1)) {
    return;
  }
  goto LAB_1804f9810;
}






// 函数: void FUN_1804f9980(int *param_1,int param_2,int param_3,int param_4,int param_5,int64_t param_6)
void FUN_1804f9980(int *param_1,int param_2,int param_3,int param_4,int param_5,int64_t param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_58;
  
  iStack_58 = 1;
  if (1 < param_4 + param_5) {
    iVar9 = param_3 + -1;
    iVar7 = (param_2 + 1) * param_5;
    iVar5 = (param_2 + -1) * param_5;
    iVar10 = param_2 - param_3;
    do {
      bVar4 = true;
      iVar14 = 0;
      bVar1 = true;
      bVar3 = true;
      if (-1 < iStack_58) {
        iVar15 = param_2 * param_5;
        iVar6 = (param_3 * 2 - param_2) + iVar10 + iStack_58;
        iVar8 = iVar15;
        iVar11 = iVar9;
        iVar13 = param_2;
        bVar2 = bVar1;
        do {
          if ((((!bVar4) && (!bVar1)) && (!bVar2)) && (!bVar3)) break;
          iVar14 = iVar13 + -param_2;
          iVar12 = iVar6 + param_2 + param_3 * -2 + iVar9;
          if ((bVar4) && ((iVar12 < 0 || (iVar11 < 0)))) {
            bVar4 = false;
          }
          if ((bVar2) && ((iVar12 < 0 || (param_5 <= iVar6)))) {
            bVar2 = false;
          }
          if ((bVar1) && ((param_4 <= iVar13 || (iVar11 < 0)))) {
            bVar1 = false;
          }
          if ((bVar3) && ((param_4 <= iVar13 || (param_5 <= iVar6)))) {
            bVar3 = false;
          }
          if ((bVar4) && (*(int *)(param_6 + (int64_t)(iVar11 + iVar8) * 4) == 2)) {
            *param_1 = iVar12;
            param_1[1] = iVar11;
            return;
          }
          if ((bVar2) && (*(int *)(param_6 + (int64_t)(iVar6 + iVar8) * 4) == 2)) {
            *param_1 = iVar12;
            param_1[1] = iVar6;
            return;
          }
          if ((bVar1) && (*(int *)(param_6 + (int64_t)(iVar11 + iVar15) * 4) == 2)) {
            *param_1 = iVar13;
            param_1[1] = iVar11;
            return;
          }
          if ((bVar3) && (*(int *)(param_6 + (int64_t)(iVar6 + iVar15) * 4) == 2)) {
            *param_1 = iVar13;
            param_1[1] = iVar6;
            return;
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 1;
          iVar6 = iVar6 + -1;
          iVar8 = iVar8 - param_5;
          iVar15 = iVar15 + param_5;
        } while (iVar13 + -param_2 <= iStack_58);
      }
      bVar4 = true;
      bVar3 = true;
      bVar1 = true;
      if (0 < iStack_58 - iVar14) {
        iVar15 = iVar9 + iVar10;
        iVar8 = iVar7;
        iVar11 = iVar5;
        iVar13 = param_3;
        iVar6 = param_3;
        bVar2 = bVar3;
        do {
          if ((((!bVar1) && (!bVar3)) && (!bVar2)) && (!bVar4)) break;
          iVar12 = iVar10 + iVar13 + iStack_58;
          if ((bVar1) && ((iVar15 < 0 || (iVar13 < 0)))) {
            bVar1 = false;
          }
          if ((bVar2) && ((iVar15 < 0 || (param_5 <= iVar6)))) {
            bVar2 = false;
          }
          if ((bVar3) && ((param_4 <= iVar12 || (iVar13 < 0)))) {
            bVar3 = false;
          }
          if ((bVar4) && ((param_4 <= iVar12 || (param_5 <= iVar6)))) {
            bVar4 = false;
          }
          if ((bVar1) && (*(int *)(param_6 + (int64_t)(iVar11 + iVar13) * 4) == 2)) {
            *param_1 = iVar15;
            param_1[1] = iVar13;
            return;
          }
          if ((bVar2) && (*(int *)(param_6 + (int64_t)(iVar11 + iVar6) * 4) == 2)) {
            *param_1 = iVar15;
            param_1[1] = iVar6;
            return;
          }
          if ((bVar3) && (*(int *)(param_6 + (int64_t)(iVar8 + iVar13) * 4) == 2)) {
            *param_1 = iVar12;
            param_1[1] = iVar13;
            return;
          }
          if ((bVar4) && (*(int *)(param_6 + (int64_t)(iVar8 + iVar6) * 4) == 2)) {
            *param_1 = iVar12;
            param_1[1] = iVar6;
            return;
          }
          iVar6 = iVar6 + 1;
          iVar15 = iVar15 + 1;
          iVar11 = iVar11 + param_5;
          iVar8 = iVar8 - param_5;
          iVar13 = iVar13 + -1;
        } while (iVar6 - param_3 < iStack_58 - iVar14);
      }
      iStack_58 = iStack_58 + 1;
      iVar7 = iVar7 + param_5;
      iVar5 = iVar5 - param_5;
      iVar9 = iVar9 + -1;
    } while (iStack_58 < param_4 + param_5);
  }
  param_1[0] = -1;
  param_1[1] = -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




