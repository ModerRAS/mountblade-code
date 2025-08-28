#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part005.c - 7 个函数

// 函数: void FUN_18025aa20(longlong *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18025aa20(longlong *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  puVar4 = (uint64_t *)param_1[1];
  lVar3 = *param_1;
  uVar1 = (longlong)puVar4 - lVar3 >> 5;
  if (param_2 <= uVar1) {
    puVar5 = (uint64_t *)(param_2 * 0x20 + lVar3);
    if (puVar5 != puVar4) {
      do {
        (**(code **)*puVar5)(puVar5,0);
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar4);
      lVar3 = *param_1;
    }
    param_1[1] = param_2 * 0x20 + lVar3;
    return;
  }
  param_2 = param_2 - uVar1;
  puVar4 = (uint64_t *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar4 >> 5) < param_2) {
    lVar3 = *param_1;
    lVar2 = (longlong)puVar4 - lVar3 >> 5;
    uVar1 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    if (uVar1 < lVar2 + param_2) {
      uVar1 = lVar2 + param_2;
    }
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar1 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar4 = (uint64_t *)param_1[1];
      lVar3 = *param_1;
    }
    lVar3 = FUN_180059780(lVar3,puVar4,lVar2);
    if (param_2 != 0) {
      puVar4 = (uint64_t *)(lVar3 + 8);
      uVar6 = param_2;
      do {
        puVar4[-1] = &unknown_var_720_ptr;
        *puVar4 = 0;
        *(int32_t *)(puVar4 + 1) = 0;
        puVar4[-1] = &unknown_var_3456_ptr;
        puVar4[2] = 0;
        *puVar4 = 0;
        *(int32_t *)(puVar4 + 1) = 0;
        puVar4 = puVar4 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar4 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
    if (puVar5 != puVar4) {
      do {
        (**(code **)*puVar5)(puVar5,0);
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar4);
      puVar5 = (uint64_t *)*param_1;
    }
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    *param_1 = lVar2;
    param_1[1] = lVar3 + param_2 * 0x20;
    param_1[2] = uVar1 * 0x20 + lVar2;
  }
  else {
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        *puVar4 = &unknown_var_720_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &unknown_var_3456_ptr;
        puVar4[3] = 0;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      puVar4 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar4 + param_2 * 4);
  }
  return;
}






// 函数: void FUN_18025aac0(longlong *param_1)
void FUN_18025aac0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x170) {
    FUN_180257e50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025ab30(longlong *param_1,ulonglong param_2)
void FUN_18025ab30(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = param_1[1];
  lVar3 = *param_1;
  uVar2 = lVar1 - lVar3 >> 5;
  if (uVar2 < param_2) {
    param_2 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - lVar1 >> 5) < param_2) {
      uVar5 = uVar2 * 2;
      if (uVar2 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar2 + param_2) {
        uVar5 = uVar2 + param_2;
      }
      if (uVar5 == 0) {
        lVar4 = lVar1;
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar5 << 5,(char)param_1[3]);
        lVar3 = *param_1;
        lVar4 = param_1[1];
      }
      if (lVar3 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar3,lVar4 - lVar3);
      }
      if (param_2 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar1,0,param_2 * 0x20);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = lVar1;
      param_1[2] = uVar5 * 0x20 + lVar1;
    }
    else if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,param_2 * 0x20);
    }
  }
  else {
    lVar1 = param_2 * 0x20 + lVar3;
  }
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025ab76(longlong param_1,longlong param_2)
void FUN_18025ab76(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong *unaff_RDI;
  
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(param_1 + unaff_RBX)) {
    uVar2 = param_1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar2 << 5,(char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
    unaff_RBP = unaff_RDI[1];
  }
  if (param_2 != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RBP - param_2);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX << 5);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = uVar2 * 0x20 + lVar1;
  unaff_RDI[1] = lVar1;
  return;
}






// 函数: void FUN_18025ac28(void)
void FUN_18025ac28(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_RBP;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t *
FUN_18025ac70(int32_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_180627ae0(param_1 + 4,param_2 + 4,param_3,param_4,0xfffffffffffffffe);
  param_1[0xc] = param_2[0xc];
  uVar5 = *(uint64_t *)(param_2 + 0xf);
  *(uint64_t *)(param_1 + 0xd) = *(uint64_t *)(param_2 + 0xd);
  *(uint64_t *)(param_1 + 0xf) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x13);
  *(uint64_t *)(param_1 + 0x11) = *(uint64_t *)(param_2 + 0x11);
  *(uint64_t *)(param_1 + 0x13) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x17);
  *(uint64_t *)(param_1 + 0x15) = *(uint64_t *)(param_2 + 0x15);
  *(uint64_t *)(param_1 + 0x17) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x1b);
  *(uint64_t *)(param_1 + 0x19) = *(uint64_t *)(param_2 + 0x19);
  *(uint64_t *)(param_1 + 0x1b) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x1f);
  *(uint64_t *)(param_1 + 0x1d) = *(uint64_t *)(param_2 + 0x1d);
  *(uint64_t *)(param_1 + 0x1f) = uVar5;
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  uVar5 = *(uint64_t *)(param_2 + 0x28);
  *(uint64_t *)(param_1 + 0x26) = *(uint64_t *)(param_2 + 0x26);
  *(uint64_t *)(param_1 + 0x28) = uVar5;
  uVar2 = param_2[0x2b];
  uVar3 = param_2[0x2c];
  uVar4 = param_2[0x2d];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar2;
  param_1[0x2c] = uVar3;
  param_1[0x2d] = uVar4;
  uVar2 = param_2[0x2f];
  uVar3 = param_2[0x30];
  uVar4 = param_2[0x31];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar2;
  param_1[0x30] = uVar3;
  param_1[0x31] = uVar4;
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  lVar7 = *(longlong *)(param_2 + 0x36) - *(longlong *)(param_2 + 0x34) >> 5;
  uVar1 = param_2[0x3a];
  param_1[0x3a] = uVar1;
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_18062b420(system_memory_pool_ptr,lVar7 << 5,uVar1 & 0xff);
  }
  *(longlong *)(param_1 + 0x34) = lVar6;
  *(longlong *)(param_1 + 0x36) = lVar6;
  *(longlong *)(param_1 + 0x38) = lVar7 * 0x20 + lVar6;
  lVar7 = *(longlong *)(param_1 + 0x34);
  lVar6 = *(longlong *)(param_2 + 0x36);
  for (lVar8 = *(longlong *)(param_2 + 0x34); lVar8 != lVar6; lVar8 = lVar8 + 0x20) {
    FUN_180627ae0(lVar7,lVar8);
    lVar7 = lVar7 + 0x20;
  }
  *(longlong *)(param_1 + 0x36) = lVar7;
  param_1[0x3c] = param_2[0x3c];
  FUN_180627ae0(param_1 + 0x3e,param_2 + 0x3e);
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  *(int8_t *)(param_1 + 0x52) = *(int8_t *)(param_2 + 0x52);
  *(int8_t *)((longlong)param_1 + 0x149) = *(int8_t *)((longlong)param_2 + 0x149);
  *(int8_t *)((longlong)param_1 + 0x14a) = *(int8_t *)((longlong)param_2 + 0x14a);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025aec0(longlong *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18025aec0(longlong *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar3 = (uint64_t *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar3 >> 5) < param_2) {
    lVar2 = *param_1;
    lVar1 = (longlong)puVar3 - lVar2 >> 5;
    uVar5 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar5 = 1;
    }
    if (uVar5 < lVar1 + param_2) {
      uVar5 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar5 != 0) {
      lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar5 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar3 = (uint64_t *)param_1[1];
      lVar2 = *param_1;
    }
    lVar2 = FUN_180059780(lVar2,puVar3,lVar1);
    if (param_2 != 0) {
      puVar3 = (uint64_t *)(lVar2 + 8);
      uVar6 = param_2;
      do {
        puVar3[-1] = &unknown_var_720_ptr;
        *puVar3 = 0;
        *(int32_t *)(puVar3 + 1) = 0;
        puVar3[-1] = &unknown_var_3456_ptr;
        puVar3[2] = 0;
        *puVar3 = 0;
        *(int32_t *)(puVar3 + 1) = 0;
        puVar3 = puVar3 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar3 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar3) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar3);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    *param_1 = lVar1;
    param_1[1] = lVar2 + param_2 * 0x20;
    param_1[2] = uVar5 * 0x20 + lVar1;
  }
  else {
    uVar5 = param_2;
    if (param_2 != 0) {
      do {
        *puVar3 = &unknown_var_720_ptr;
        puVar3[1] = 0;
        *(int32_t *)(puVar3 + 2) = 0;
        *puVar3 = &unknown_var_3456_ptr;
        puVar3[3] = 0;
        puVar3[1] = 0;
        *(int32_t *)(puVar3 + 2) = 0;
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar3 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025b060(longlong *param_1,ulonglong param_2)
void FUN_18025b060(longlong *param_1,ulonglong param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  puVar9 = (int32_t *)param_1[1];
  lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - (longlong)puVar9),8) +
          (param_1[2] - (longlong)puVar9);
  if ((ulonglong)((lVar5 >> 8) - (lVar5 >> 0x3f)) < param_2) {
    puVar10 = (int32_t *)*param_1;
    lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar9 - (longlong)puVar10),8) +
            ((longlong)puVar9 - (longlong)puVar10);
    lVar5 = (lVar5 >> 8) - (lVar5 >> 0x3f);
    uVar11 = lVar5 * 2;
    if (lVar5 == 0) {
      uVar11 = 1;
    }
    if (uVar11 < lVar5 + param_2) {
      uVar11 = lVar5 + param_2;
    }
    lVar5 = 0;
    if (uVar11 != 0) {
      lVar5 = FUN_18062b420(system_memory_pool_ptr,uVar11 * 0x170,(char)param_1[3],0xb21642c8590b2165,
                            0xfffffffffffffffe);
      puVar9 = (int32_t *)param_1[1];
      puVar10 = (int32_t *)*param_1;
    }
    lVar6 = lVar5;
    if (puVar10 != puVar9) {
      lVar12 = lVar5 - (longlong)puVar10;
      puVar10 = puVar10 + 0x55;
      do {
        FUN_18025b520(lVar6,puVar10 + -0x55);
        *(int8_t *)((longlong)puVar10 + lVar12 + -4) = *(int8_t *)(puVar10 + -1);
        *(int32_t *)((longlong)puVar10 + lVar12) = *puVar10;
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        uVar4 = puVar10[4];
        puVar1 = (int32_t *)((longlong)puVar10 + lVar12 + 4);
        *puVar1 = puVar10[1];
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        *(int32_t *)((longlong)puVar10 + lVar12 + 0x14) = puVar10[5];
        lVar6 = lVar6 + 0x170;
        puVar1 = puVar10 + 7;
        puVar10 = puVar10 + 0x5c;
      } while (puVar1 != puVar9);
    }
    if (param_2 != 0) {
      puVar9 = (int32_t *)(lVar6 + 0x154);
      uVar8 = param_2;
      do {
        FUN_180259450();
        *(int8_t *)(puVar9 + -1) = 1;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9 = puVar9 + 0x5c;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar12 = param_1[1];
    lVar7 = *param_1;
    if (lVar7 != lVar12) {
      do {
        FUN_180257e50(lVar7);
        lVar7 = lVar7 + 0x170;
      } while (lVar7 != lVar12);
      lVar7 = *param_1;
    }
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar7);
    }
    *param_1 = lVar5;
    param_1[1] = param_2 * 0x170 + lVar6;
    param_1[2] = uVar11 * 0x170 + lVar5;
  }
  else {
    uVar11 = param_2;
    if (param_2 != 0) {
      do {
        FUN_180259450(puVar9);
        *(int8_t *)(puVar9 + 0x54) = 1;
        puVar9[0x55] = 0;
        puVar9[0x56] = 0;
        puVar9[0x57] = 0;
        puVar9[0x58] = 0;
        puVar9[0x59] = 0;
        puVar9[0x5a] = 0;
        puVar9 = puVar9 + 0x5c;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      puVar9 = (int32_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar9 + param_2 * 0x5c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




