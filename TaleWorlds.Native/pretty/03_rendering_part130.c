#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part130.c - 12 个函数

// 函数: void FUN_180345040(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_180345040(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  void *puVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  
  FUN_18023fa30();
  uVar7 = 0;
  lVar2 = *(longlong *)(param_3 + 0x28) - *(longlong *)(param_3 + 0x20);
  lVar3 = lVar2 >> 0x3f;
  uVar4 = uVar7;
  uVar6 = uVar7;
  if (lVar2 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180217f60(param_1 + 0x20,uVar6 * 0x98 + *(longlong *)(param_3 + 0x20));
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar6 = (longlong)(int)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)((*(longlong *)(param_3 + 0x28) - *(longlong *)(param_3 + 0x20)) / 0x98));
  }
  lVar2 = *(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178);
  lVar3 = lVar2 >> 0x3f;
  uVar4 = uVar7;
  uVar6 = uVar7;
  if (lVar2 / 0x98 + lVar3 != lVar3) {
    do {
      FUN_180217f60(param_1 + 0x178,uVar6 * 0x98 + *(longlong *)(param_3 + 0x178));
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar6 = (longlong)(int)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)((*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) / 0x98));
  }
  if (*(int *)(param_3 + 0xdc) != 0) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_3 + 0xdc);
  }
  *(int8_t *)(param_1 + 0xd8) = *(int8_t *)(param_3 + 0xd8);
  uVar5 = *(uint *)(param_3 + 0x10);
  uVar4 = (ulonglong)uVar5;
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1806277c0(param_1,uVar4);
  }
  if (uVar5 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      *(int8_t *)(uVar4 + *(longlong *)(param_1 + 8)) = 0;
    }
    *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_3 + 0x1c);
    if (*(int *)(param_3 + 0x1110) != 0) {
      *(int *)(param_1 + 0x1110) = *(int *)(param_3 + 0x1110);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1108) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1108);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1108),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x11a8) != 0) {
      *(int *)(param_1 + 0x11a8) = *(int *)(param_3 + 0x11a8);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x11a0) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x11a0);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x11a0),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1240) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x1240);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1238) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1238);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x12d8) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x12d8);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x12d0) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x12d0);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1370) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x1370);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1368) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1368);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1408) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x1408);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1400) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1400);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x50) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x50);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x48) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x48);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    piVar8 = (int *)(param_3 + 0x1a8);
    lVar2 = param_1 - param_3;
    lVar3 = 5;
    do {
      if (*piVar8 != 0) {
        *(int *)(lVar2 + (longlong)piVar8) = *piVar8;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar8 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar8 + -2);
        }
        strcpy_s(*(uint64_t *)(lVar2 + -8 + (longlong)piVar8),0x80,puVar9);
      }
      piVar8 = piVar8 + 0x26;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    piVar8 = (int *)(param_3 + 0xa40);
    lVar3 = 9;
    do {
      if (*piVar8 != 0) {
        *(int *)((longlong)piVar8 + lVar2) = *piVar8;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar8 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar8 + -2);
        }
        strcpy_s(*(uint64_t *)((longlong)piVar8 + lVar2 + -8),0x80,puVar9);
      }
      piVar8 = piVar8 + 0x26;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = *(longlong *)(param_3 + 0x490);
    lVar1 = *(longlong *)(param_3 + 0x498) - lVar3;
    lVar12 = lVar1 >> 0x3f;
    uVar4 = uVar7;
    uVar6 = uVar7;
    uVar10 = uVar7;
    if (lVar1 / 0x98 + lVar12 != lVar12) {
      do {
        if (*(int *)(uVar6 + 0x10 + lVar3) != 0) {
          FUN_180217f60(param_1 + 0x490,uVar10 * 0x98 + lVar3);
        }
        lVar3 = *(longlong *)(param_3 + 0x490);
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        uVar6 = uVar6 + 0x98;
        uVar10 = (longlong)(int)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)((*(longlong *)(param_3 + 0x498) - lVar3) / 0x98));
    }
    lVar3 = *(longlong *)(param_3 + 0x10b8);
    lVar1 = *(longlong *)(param_3 + 0x10c0) - lVar3;
    lVar12 = lVar1 >> 0x3f;
    uVar4 = uVar7;
    uVar6 = uVar7;
    if (lVar1 / 0x98 + lVar12 != lVar12) {
      do {
        if (*(int *)(uVar7 + 0x10 + lVar3) != 0) {
          FUN_180217f60(param_1 + 0x10b8,uVar4 * 0x98 + lVar3);
        }
        lVar3 = *(longlong *)(param_3 + 0x10b8);
        uVar5 = (int)uVar6 + 1;
        uVar7 = uVar7 + 0x98;
        uVar4 = (longlong)(int)uVar5;
        uVar6 = (ulonglong)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)((*(longlong *)(param_3 + 0x10c0) - lVar3) / 0x98));
    }
    piVar8 = (int *)(param_3 + 0x4c0);
    lVar12 = 0x10;
    lVar3 = 0x10;
    piVar11 = piVar8;
    do {
      if (*piVar11 != 0) {
        *(int *)((longlong)piVar11 + lVar2) = *piVar11;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar11 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar11 + -2);
        }
        strcpy_s(*(uint64_t *)((longlong)piVar11 + lVar2 + -8),0x40,puVar9);
      }
      piVar11 = piVar11 + 0x16;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar5 = *(uint *)(param_3 + 0x10e8);
    if (uVar5 != 0) {
      if (*(longlong *)(param_3 + 0x10e0) != 0) {
        FUN_1806277c0(param_1 + 0x10d8,uVar5);
      }
      if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + 0x10e0),*(uint64_t *)(param_3 + 0x10e0),(ulonglong)uVar5)
        ;
      }
      *(int32_t *)(param_1 + 0x10e8) = 0;
      if (*(longlong *)(param_1 + 0x10e0) != 0) {
        *(int8_t *)((ulonglong)uVar5 + *(longlong *)(param_1 + 0x10e0)) = 0;
      }
      *(int32_t *)(param_1 + 0x10f4) = *(int32_t *)(param_3 + 0x10f4);
    }
    if (*(int *)(param_3 + 0xf98) != 0) {
      *(int *)(param_1 + 0xf98) = *(int *)(param_3 + 0xf98);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0xf90) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0xf90);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0xf90),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1030) != 0) {
      *(int *)(param_1 + 0x1030) = *(int *)(param_3 + 0x1030);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1028) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1028);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1028),0x80,puVar9);
    }
    do {
      if (*piVar8 != 0) {
        *(int *)(lVar2 + (longlong)piVar8) = *piVar8;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar8 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar8 + -2);
        }
        strcpy_s(*(uint64_t *)(lVar2 + -8 + (longlong)piVar8),0x40,puVar9);
      }
      piVar8 = piVar8 + 0x16;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(int8_t *)(param_1 + 0x10f8) = *(int8_t *)(param_3 + 0x10f8);
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 8),*(uint64_t *)(param_3 + 8),uVar4);
}



uint64_t *
FUN_180345660(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x1a;
  strcpy_s(param_2[1],0x80,&unknown_var_4504_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_1803456e0(uint64_t *param_1,longlong param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_4912_ptr;
  param_1[3] = 0;
  puVar1 = param_1 + 4;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(int8_t *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *param_1 = &unknown_var_4544_ptr;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0xd;
  lVar2 = param_1[3];
  if (param_1[3] != param_2) {
    lVar2 = param_2;
  }
  param_1[3] = lVar2;
  param_1[2] = param_3;
  return param_1;
}



uint64_t FUN_180345790(uint64_t param_1,ulonglong param_2)

{
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}





// 函数: void FUN_1803457d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803457d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4544_ptr;
  FUN_180080df0();
  *param_1 = &unknown_var_4912_ptr;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar1);
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180345840(longlong param_1)
void FUN_180345840(longlong param_1)

{
  int8_t auStack_348 [176];
  int8_t auStack_298 [544];
  ulonglong uStack_78;
  
  uStack_78 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_348;
  if ((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50)) / 0x30 != 0) {
                    // WARNING: Subroutine does not return
    memset(auStack_298,0,0x200);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_348);
}





// 函数: void FUN_1803458a2(void)
void FUN_1803458a2(void)

{
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  longlong in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x38) = unaff_RSI;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
                    // WARNING: Subroutine does not return
  memset(&stack0x000000b0,0,0x200);
}





// 函数: void FUN_1803459e3(void)
void FUN_1803459e3(void)

{
  ulonglong in_stack_000002d0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000002d0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180345a10(longlong param_1,ulonglong *param_2)
void FUN_180345a10(longlong param_1,ulonglong *param_2)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint64_t *puVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar4 = 0;
  uVar3 = *param_2;
  uVar5 = (lVar8 >> 3) - (lVar8 >> 0x3f);
  if ((ulonglong)((longlong)(param_2[2] - uVar3) >> 5) < uVar5) {
    uVar2 = uVar4;
    if (uVar5 != 0) {
      uVar2 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x20,(char)param_2[3]);
      uVar3 = *param_2;
    }
    uVar3 = FUN_180059780(uVar3,param_2[1],uVar2);
    puVar1 = (uint64_t *)param_2[1];
    puVar7 = (uint64_t *)*param_2;
    if (puVar7 != puVar1) {
      do {
        (**(code **)*puVar7)(puVar7,0);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar1);
      puVar7 = (uint64_t *)*param_2;
    }
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar5 * 0x20 + uVar2;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      if (param_2[1] < param_2[2]) {
        param_2[1] = param_2[1] + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,uVar4 * 0x30 + *(longlong *)(param_1 + 0x50));
      }
      uVar6 = (int)uVar3 + 1;
      uVar4 = (ulonglong)(int)uVar6;
      uVar3 = (ulonglong)uVar6;
    } while (uVar4 < uVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180345a5f(ulonglong param_1)
void FUN_180345a5f(ulonglong param_1)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *unaff_RBX;
  ulonglong unaff_RBP;
  uint uVar4;
  ulonglong unaff_RSI;
  uint64_t *puVar5;
  
  uVar2 = unaff_RSI;
  if (unaff_RBP != 0) {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RBP << 5,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  uVar3 = FUN_180059780(param_1,unaff_RBX[1],uVar2);
  puVar1 = (uint64_t *)unaff_RBX[1];
  puVar5 = (uint64_t *)*unaff_RBX;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*unaff_RBX;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *unaff_RBX = uVar2;
    unaff_RBX[1] = uVar3;
    unaff_RBX[2] = unaff_RBP * 0x20 + uVar2;
    if (unaff_RBP != 0) {
      do {
        if (unaff_RBX[1] < unaff_RBX[2]) {
          unaff_RBX[1] = unaff_RBX[1] + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820();
        }
        uVar4 = (int)unaff_RSI + 1;
        unaff_RSI = (ulonglong)uVar4;
      } while ((ulonglong)(longlong)(int)uVar4 < unaff_RBP);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180345a69(ulonglong param_1)
void FUN_180345a69(ulonglong param_1)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *unaff_RBX;
  ulonglong unaff_RBP;
  uint uVar4;
  ulonglong unaff_RSI;
  uint64_t *puVar5;
  
  uVar2 = unaff_RSI;
  if (unaff_RBP != 0) {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RBP << 5,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  uVar3 = FUN_180059780(param_1,unaff_RBX[1],uVar2);
  puVar1 = (uint64_t *)unaff_RBX[1];
  puVar5 = (uint64_t *)*unaff_RBX;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*unaff_RBX;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *unaff_RBX = uVar2;
    unaff_RBX[1] = uVar3;
    unaff_RBX[2] = unaff_RBP * 0x20 + uVar2;
    if (unaff_RBP != 0) {
      do {
        if (unaff_RBX[1] < unaff_RBX[2]) {
          unaff_RBX[1] = unaff_RBX[1] + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820();
        }
        uVar4 = (int)unaff_RSI + 1;
        unaff_RSI = (ulonglong)uVar4;
      } while ((ulonglong)(longlong)(int)uVar4 < unaff_RBP);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}





// 函数: void FUN_180345ae1(void)
void FUN_180345ae1(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180345b0d(void)
void FUN_180345b0d(void)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  int unaff_ESI;
  
  if (unaff_RBP != 0) {
    do {
      if (*(ulonglong *)(unaff_RBX + 8) < *(ulonglong *)(unaff_RBX + 0x10)) {
        *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820();
      }
      unaff_ESI = unaff_ESI + 1;
    } while ((ulonglong)(longlong)unaff_ESI < unaff_RBP);
  }
  return;
}





// 函数: void FUN_180345b70(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint param_4)
void FUN_180345b70(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  uint64_t uVar17;
  void *puVar18;
  longlong lVar19;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int iStack_38;
  void *puStack_28;
  longlong lStack_20;
  
  if (param_4 < 0xe) {
    lVar19 = (ulonglong)*(uint *)(&system_data_5f30 + (longlong)(int)param_4 * 4) + 0x180000000;
    switch(param_4) {
    case 0:
      lVar19 = FUN_1803466a0(param_1);
      FUN_180627ae0(&uStack_48,*(uint64_t *)(lVar19 + 0x20));
      puVar18 = &system_buffer_ptr;
      if ((void *)CONCAT44(uStack_3c,uStack_40) != (void *)0x0) {
        puVar18 = (void *)CONCAT44(uStack_3c,uStack_40);
      }
                    // WARNING: Subroutine does not return
      memcpy(param_3 + 0x20,puVar18,(longlong)iStack_38);
    case 1:
      lVar19 = FUN_1803466a0(param_1);
      *(uint64_t *)(param_3 + 0xa0) = **(uint64_t **)(lVar19 + 0x20);
      break;
    case 2:
      lVar19 = FUN_1803466a0(param_1);
      param_3[0xa2] = **(int32_t **)(lVar19 + 0x20);
      break;
    case 3:
      lVar19 = FUN_1803466a0(param_1);
      param_3[0xa3] = (uint)**(byte **)(lVar19 + 0x20);
      break;
    case 4:
      lVar19 = FUN_1803466a0(param_1);
      param_3[0xa4] = **(int32_t **)(lVar19 + 0x20);
      break;
    case 5:
      uVar17 = FUN_1806279c0(&puStack_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = FUN_1803466a0(param_1,uVar17);
      puVar1 = *(int32_t **)(lVar19 + 0x20);
      uStack_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      puStack_28 = &unknown_var_3456_ptr;
      if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_3[0x14] = uStack_48;
      param_3[0x15] = uStack_44;
      param_3[0x16] = uStack_40;
      param_3[0x17] = uStack_3c;
      break;
    case 6:
      lVar19 = FUN_1803466a0(param_1);
      *(uint64_t *)(param_3 + 0x18) = **(uint64_t **)(lVar19 + 0x20);
      break;
    case 7:
      uVar17 = FUN_1806279c0(&puStack_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = FUN_1803466a0(param_1,uVar17);
      *(uint64_t *)(param_3 + 0x1a) = **(uint64_t **)(lVar19 + 0x20);
      puStack_28 = &unknown_var_3456_ptr;
      if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      break;
    case 8:
      uVar17 = FUN_1806279c0(&puStack_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = FUN_1803466a0(param_1,uVar17);
      *(uint64_t *)(param_3 + 0x1c) = **(uint64_t **)(lVar19 + 0x20);
      puStack_28 = &unknown_var_3456_ptr;
      if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      break;
    case 9:
      lVar19 = FUN_1803466a0(param_1);
      FUN_180627ae0(&uStack_48,*(uint64_t *)(lVar19 + 0x20));
      puVar18 = &system_buffer_ptr;
      if ((void *)CONCAT44(uStack_3c,uStack_40) != (void *)0x0) {
        puVar18 = (void *)CONCAT44(uStack_3c,uStack_40);
      }
                    // WARNING: Subroutine does not return
      memcpy(param_3 + 0x60,puVar18,(longlong)iStack_38);
    case 10:
      uVar17 = FUN_1806279c0(&puStack_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = FUN_1803466a0(param_1,uVar17);
      *(uint64_t *)(param_3 + 0x1e) = **(uint64_t **)(lVar19 + 0x20);
      puStack_28 = &unknown_var_3456_ptr;
      if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      break;
    case 0xc:
      uVar17 = FUN_1806279c0(&puStack_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = FUN_1803466a0(param_1,uVar17);
      puVar1 = *(int32_t **)(lVar19 + 0x20);
      uStack_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      puStack_28 = &unknown_var_3456_ptr;
      if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_3[0x10] = uStack_48;
      param_3[0x11] = uStack_44;
      param_3[0x12] = uStack_40;
      param_3[0x13] = uStack_3c;
      break;
    case 0xd:
      uVar17 = FUN_1806279c0(&puStack_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = FUN_1803466a0(param_1,uVar17);
      puVar1 = *(int32_t **)(lVar19 + 0x20);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      *param_3 = *puVar1;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[4] = uVar5;
      param_3[5] = uVar6;
      param_3[6] = uVar7;
      param_3[7] = uVar8;
      param_3[8] = uVar9;
      param_3[9] = uVar10;
      param_3[10] = uVar11;
      param_3[0xb] = uVar12;
      param_3[0xc] = uVar13;
      param_3[0xd] = uVar14;
      param_3[0xe] = uVar15;
      param_3[0xf] = uVar16;
      puStack_28 = &unknown_var_3456_ptr;
      if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}



int32_t FUN_180345f70(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar7;
  
  lVar10 = *(longlong *)(param_1 + 0x50);
  lVar8 = *(longlong *)(param_1 + 0x58) - lVar10;
  uVar5 = 0;
  lVar9 = lVar8 >> 0x3f;
  if (lVar8 / 0x30 + lVar9 != lVar9) {
    uVar7 = uVar5;
    do {
      iVar3 = *(int *)(uVar5 + 0x10 + lVar10);
      if ((iVar3 == *(int *)(param_2 + 0x10)) && (iVar3 != 0)) {
        pcVar4 = *(char **)(uVar5 + 8 + lVar10);
        lVar9 = *(longlong *)(param_2 + 8) - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar9];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        bVar11 = cVar1 == cVar2;
      }
      else {
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_180346068;
        bVar11 = false;
      }
      if (bVar11) {
LAB_180346068:
        return *(int32_t *)(lVar10 + 0x28 + (longlong)(int)uVar7 * 0x30);
      }
      lVar10 = *(longlong *)(param_1 + 0x50);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 0x30;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)((*(longlong *)(param_1 + 0x58) - lVar10) / 0x30));
  }
  return 0xffffffff;
}



bool FUN_180346080(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1803466a0();
  return lVar1 != 0;
}





// 函数: void FUN_1803460a0(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_1803460a0(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  uint64_t *puVar1;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  
  FUN_1806279c0(&puStack_50);
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  uStack_30 = param_3;
  uStack_28 = param_4;
  if (puVar1 < *(uint64_t **)(param_1 + 0x60)) {
    *(uint64_t **)(param_1 + 0x58) = puVar1 + 6;
    *puVar1 = &unknown_var_720_ptr;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 2) = 0;
    *puVar1 = &unknown_var_3456_ptr;
    puVar1[3] = 0;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 2) = 0;
    *(int32_t *)(puVar1 + 2) = uStack_40;
    puVar1[1] = lStack_48;
    *(int32_t *)((longlong)puVar1 + 0x1c) = uStack_38._4_4_;
    *(int32_t *)(puVar1 + 3) = (int32_t)uStack_38;
    uStack_40 = 0;
    lStack_48 = 0;
    uStack_38 = 0;
    puVar1[4] = param_3;
    *(int32_t *)(puVar1 + 5) = param_4;
  }
  else {
    FUN_180346430(param_1 + 0x50,&puStack_50);
  }
  puStack_50 = &unknown_var_3456_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





