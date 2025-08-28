#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part213.c - 11 个函数

// 函数: void FUN_18018fb50(void)
void FUN_18018fb50(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



bool FUN_180190530(uint64_t param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  void *puVar5;
  int iVar6;
  
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x10) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 0x10);
  }
  lVar2 = strstr(puVar5,&unknown_var_1588_ptr);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_3 + 0x10) != (void *)0x0) {
    puVar5 = *(void **)(param_3 + 0x10);
  }
  lVar3 = strstr(puVar5,&unknown_var_1588_ptr);
  if (lVar2 == 0) {
    if ((lVar3 != 0) || (*(int *)(param_3 + 0x18) == 0)) {
      return false;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      pbVar4 = *(byte **)(param_3 + 0x10);
      lVar2 = *(longlong *)(param_2 + 0x10) - (longlong)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar2;
        iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar6 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
LAB_180190603:
      return 0 < iVar6;
    }
  }
  else if (lVar3 != 0) {
    if (*(int *)(param_3 + 0x18) == 0) {
      return false;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      pbVar4 = *(byte **)(param_3 + 0x10);
      lVar2 = *(longlong *)(param_2 + 0x10) - (longlong)pbVar4;
      while( true ) {
        pbVar1 = pbVar4 + lVar2;
        iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar6 != 0) break;
        pbVar4 = pbVar4 + 1;
        if (*pbVar1 == 0) {
          return false;
        }
      }
      goto LAB_180190603;
    }
  }
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180190630(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar6 = (uint64_t *)param_1[1];
  if (puVar6 < (uint64_t *)param_1[2]) {
    param_1[1] = (longlong)(puVar6 + 0x69);
    *puVar6 = &unknown_var_5912_ptr;
    *puVar6 = &unknown_var_5880_ptr;
    FUN_180627ae0(puVar6 + 1,param_2 + 8,param_3,param_4,0xfffffffffffffffe);
    *(int32_t *)(puVar6 + 5) = *(int32_t *)(param_2 + 0x28);
    *(int32_t *)((longlong)puVar6 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
    *(int32_t *)(puVar6 + 6) = *(int32_t *)(param_2 + 0x30);
    *(int32_t *)((longlong)puVar6 + 0x34) = *(int32_t *)(param_2 + 0x34);
    *(int32_t *)(puVar6 + 7) = *(int32_t *)(param_2 + 0x38);
    *(int32_t *)((longlong)puVar6 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
    *(int32_t *)(puVar6 + 8) = *(int32_t *)(param_2 + 0x40);
    FUN_180627ae0(puVar6 + 9,param_2 + 0x48);
    plVar1 = *(longlong **)(param_2 + 0x68);
    puVar6[0xd] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    FUN_180627ae0(puVar6 + 0xe,param_2 + 0x70);
    plVar1 = *(longlong **)(param_2 + 0x90);
    puVar6[0x12] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(int32_t *)(puVar6 + 0x13) = *(int32_t *)(param_2 + 0x98);
    *(int32_t *)((longlong)puVar6 + 0x9c) = *(int32_t *)(param_2 + 0x9c);
    *(int32_t *)(puVar6 + 0x14) = *(int32_t *)(param_2 + 0xa0);
    *(int32_t *)((longlong)puVar6 + 0xa4) = *(int32_t *)(param_2 + 0xa4);
    *(int32_t *)(puVar6 + 0x15) = *(int32_t *)(param_2 + 0xa8);
    *(int32_t *)((longlong)puVar6 + 0xac) = *(int32_t *)(param_2 + 0xac);
    *(int32_t *)(puVar6 + 0x16) = *(int32_t *)(param_2 + 0xb0);
    *(int32_t *)((longlong)puVar6 + 0xb4) = *(int32_t *)(param_2 + 0xb4);
    *(int32_t *)(puVar6 + 0x17) = *(int32_t *)(param_2 + 0xb8);
    *(int32_t *)((longlong)puVar6 + 0xbc) = *(int32_t *)(param_2 + 0xbc);
    *(int32_t *)(puVar6 + 0x18) = *(int32_t *)(param_2 + 0xc0);
    uVar5 = *(uint64_t *)(param_2 + 0xcc);
    *(uint64_t *)((longlong)puVar6 + 0xc4) = *(uint64_t *)(param_2 + 0xc4);
    *(uint64_t *)((longlong)puVar6 + 0xcc) = uVar5;
    uVar5 = *(uint64_t *)(param_2 + 0xdc);
    *(uint64_t *)((longlong)puVar6 + 0xd4) = *(uint64_t *)(param_2 + 0xd4);
    *(uint64_t *)((longlong)puVar6 + 0xdc) = uVar5;
    uVar5 = *(uint64_t *)(param_2 + 0xec);
    *(uint64_t *)((longlong)puVar6 + 0xe4) = *(uint64_t *)(param_2 + 0xe4);
    *(uint64_t *)((longlong)puVar6 + 0xec) = uVar5;
    uVar5 = *(uint64_t *)(param_2 + 0xfc);
    *(uint64_t *)((longlong)puVar6 + 0xf4) = *(uint64_t *)(param_2 + 0xf4);
    *(uint64_t *)((longlong)puVar6 + 0xfc) = uVar5;
    uVar2 = *(int32_t *)(param_2 + 0x108);
    uVar3 = *(int32_t *)(param_2 + 0x10c);
    uVar4 = *(int32_t *)(param_2 + 0x110);
    *(int32_t *)((longlong)puVar6 + 0x104) = *(int32_t *)(param_2 + 0x104);
    *(int32_t *)(puVar6 + 0x21) = uVar2;
    *(int32_t *)((longlong)puVar6 + 0x10c) = uVar3;
    *(int32_t *)(puVar6 + 0x22) = uVar4;
    *(int32_t *)((longlong)puVar6 + 0x114) = *(int32_t *)(param_2 + 0x114);
    *(int32_t *)(puVar6 + 0x23) = *(int32_t *)(param_2 + 0x118);
    *(int32_t *)((longlong)puVar6 + 0x11c) = *(int32_t *)(param_2 + 0x11c);
    *(int32_t *)(puVar6 + 0x24) = *(int32_t *)(param_2 + 0x120);
    *(int32_t *)((longlong)puVar6 + 0x124) = *(int32_t *)(param_2 + 0x124);
    *(int32_t *)(puVar6 + 0x25) = *(int32_t *)(param_2 + 0x128);
    *(int32_t *)((longlong)puVar6 + 300) = *(int32_t *)(param_2 + 300);
    FUN_180627ae0(puVar6 + 0x26,param_2 + 0x130);
    plVar1 = *(longlong **)(param_2 + 0x150);
    puVar6[0x2a] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    FUN_180627ae0(puVar6 + 0x2b,param_2 + 0x158);
    plVar1 = *(longlong **)(param_2 + 0x178);
    puVar6[0x2f] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(int32_t *)(puVar6 + 0x30) = *(int32_t *)(param_2 + 0x180);
    FUN_180627ae0(puVar6 + 0x31,param_2 + 0x188);
    plVar1 = *(longlong **)(param_2 + 0x1a8);
    puVar6[0x35] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    plVar1 = *(longlong **)(param_2 + 0x1b0);
    puVar6[0x36] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(int32_t *)(puVar6 + 0x37) = *(int32_t *)(param_2 + 0x1b8);
    *(int32_t *)((longlong)puVar6 + 0x1bc) = *(int32_t *)(param_2 + 0x1bc);
    uVar2 = *(int32_t *)(param_2 + 0x1c4);
    uVar3 = *(int32_t *)(param_2 + 0x1c8);
    uVar4 = *(int32_t *)(param_2 + 0x1cc);
    *(int32_t *)(puVar6 + 0x38) = *(int32_t *)(param_2 + 0x1c0);
    *(int32_t *)((longlong)puVar6 + 0x1c4) = uVar2;
    *(int32_t *)(puVar6 + 0x39) = uVar3;
    *(int32_t *)((longlong)puVar6 + 0x1cc) = uVar4;
    *(int32_t *)(puVar6 + 0x3a) = *(int32_t *)(param_2 + 0x1d0);
    *(int32_t *)((longlong)puVar6 + 0x1d4) = *(int32_t *)(param_2 + 0x1d4);
    *(int32_t *)(puVar6 + 0x3b) = *(int32_t *)(param_2 + 0x1d8);
    *(int32_t *)((longlong)puVar6 + 0x1dc) = *(int32_t *)(param_2 + 0x1dc);
    *(int32_t *)(puVar6 + 0x3c) = *(int32_t *)(param_2 + 0x1e0);
    *(int32_t *)((longlong)puVar6 + 0x1e4) = *(int32_t *)(param_2 + 0x1e4);
    *(int32_t *)(puVar6 + 0x3d) = *(int32_t *)(param_2 + 0x1e8);
    *(int32_t *)((longlong)puVar6 + 0x1ec) = *(int32_t *)(param_2 + 0x1ec);
    *(int32_t *)(puVar6 + 0x3e) = *(int32_t *)(param_2 + 0x1f0);
    *(int32_t *)((longlong)puVar6 + 500) = *(int32_t *)(param_2 + 500);
    *(int32_t *)(puVar6 + 0x3f) = *(int32_t *)(param_2 + 0x1f8);
    *(int32_t *)((longlong)puVar6 + 0x1fc) = *(int32_t *)(param_2 + 0x1fc);
    *(int32_t *)(puVar6 + 0x40) = *(int32_t *)(param_2 + 0x200);
    *(int32_t *)((longlong)puVar6 + 0x204) = *(int32_t *)(param_2 + 0x204);
    *(int32_t *)(puVar6 + 0x41) = *(int32_t *)(param_2 + 0x208);
    *(int32_t *)((longlong)puVar6 + 0x20c) = *(int32_t *)(param_2 + 0x20c);
    *(int32_t *)(puVar6 + 0x42) = *(int32_t *)(param_2 + 0x210);
    *(int32_t *)((longlong)puVar6 + 0x214) = *(int32_t *)(param_2 + 0x214);
    *(int32_t *)(puVar6 + 0x43) = *(int32_t *)(param_2 + 0x218);
    *(int32_t *)((longlong)puVar6 + 0x21c) = *(int32_t *)(param_2 + 0x21c);
    *(int32_t *)(puVar6 + 0x44) = *(int32_t *)(param_2 + 0x220);
    *(int32_t *)((longlong)puVar6 + 0x224) = *(int32_t *)(param_2 + 0x224);
    *(int32_t *)(puVar6 + 0x45) = *(int32_t *)(param_2 + 0x228);
    *(int32_t *)((longlong)puVar6 + 0x22c) = *(int32_t *)(param_2 + 0x22c);
    *(int32_t *)(puVar6 + 0x46) = *(int32_t *)(param_2 + 0x230);
    *(int32_t *)((longlong)puVar6 + 0x234) = *(int32_t *)(param_2 + 0x234);
    FUN_180627ae0(puVar6 + 0x47,param_2 + 0x238);
    plVar1 = *(longlong **)(param_2 + 600);
    puVar6[0x4b] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    FUN_180627ae0(puVar6 + 0x4c,param_2 + 0x260);
    plVar1 = *(longlong **)(param_2 + 0x280);
    puVar6[0x50] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(int32_t *)(puVar6 + 0x51) = *(int32_t *)(param_2 + 0x288);
    *(int32_t *)((longlong)puVar6 + 0x28c) = *(int32_t *)(param_2 + 0x28c);
    *(int32_t *)(puVar6 + 0x52) = *(int32_t *)(param_2 + 0x290);
    *(int32_t *)((longlong)puVar6 + 0x294) = *(int32_t *)(param_2 + 0x294);
    *(int32_t *)(puVar6 + 0x53) = *(int32_t *)(param_2 + 0x298);
    uVar2 = *(int32_t *)(param_2 + 0x2a0);
    uVar3 = *(int32_t *)(param_2 + 0x2a4);
    uVar4 = *(int32_t *)(param_2 + 0x2a8);
    *(int32_t *)((longlong)puVar6 + 0x29c) = *(int32_t *)(param_2 + 0x29c);
    *(int32_t *)(puVar6 + 0x54) = uVar2;
    *(int32_t *)((longlong)puVar6 + 0x2a4) = uVar3;
    *(int32_t *)(puVar6 + 0x55) = uVar4;
    *(int32_t *)((longlong)puVar6 + 0x2ac) = *(int32_t *)(param_2 + 0x2ac);
    *(int32_t *)(puVar6 + 0x56) = *(int32_t *)(param_2 + 0x2b0);
    *(int32_t *)((longlong)puVar6 + 0x2b4) = *(int32_t *)(param_2 + 0x2b4);
    *(int32_t *)(puVar6 + 0x57) = *(int32_t *)(param_2 + 0x2b8);
    *(int32_t *)((longlong)puVar6 + 700) = *(int32_t *)(param_2 + 700);
    *(int32_t *)(puVar6 + 0x58) = *(int32_t *)(param_2 + 0x2c0);
    *(int32_t *)((longlong)puVar6 + 0x2c4) = *(int32_t *)(param_2 + 0x2c4);
    *(int32_t *)(puVar6 + 0x59) = *(int32_t *)(param_2 + 0x2c8);
    *(int32_t *)((longlong)puVar6 + 0x2cc) = *(int32_t *)(param_2 + 0x2cc);
    *(int32_t *)(puVar6 + 0x5a) = *(int32_t *)(param_2 + 0x2d0);
    *(int32_t *)((longlong)puVar6 + 0x2d4) = *(int32_t *)(param_2 + 0x2d4);
    *(int32_t *)(puVar6 + 0x5b) = *(int32_t *)(param_2 + 0x2d8);
    *(int32_t *)((longlong)puVar6 + 0x2dc) = *(int32_t *)(param_2 + 0x2dc);
    *(int32_t *)(puVar6 + 0x5c) = *(int32_t *)(param_2 + 0x2e0);
    *(int32_t *)((longlong)puVar6 + 0x2e4) = *(int32_t *)(param_2 + 0x2e4);
    *(int32_t *)(puVar6 + 0x5d) = *(int32_t *)(param_2 + 0x2e8);
    *(int32_t *)((longlong)puVar6 + 0x2ec) = *(int32_t *)(param_2 + 0x2ec);
    *(int32_t *)(puVar6 + 0x5e) = *(int32_t *)(param_2 + 0x2f0);
    *(int32_t *)((longlong)puVar6 + 0x2f4) = *(int32_t *)(param_2 + 0x2f4);
    *(int32_t *)(puVar6 + 0x5f) = *(int32_t *)(param_2 + 0x2f8);
    *(int32_t *)((longlong)puVar6 + 0x2fc) = *(int32_t *)(param_2 + 0x2fc);
    *(int32_t *)(puVar6 + 0x60) = *(int32_t *)(param_2 + 0x300);
    *(int8_t *)((longlong)puVar6 + 0x304) = *(int8_t *)(param_2 + 0x304);
    *(int8_t *)((longlong)puVar6 + 0x305) = *(int8_t *)(param_2 + 0x305);
    *(int8_t *)((longlong)puVar6 + 0x306) = *(int8_t *)(param_2 + 0x306);
    *(int32_t *)(puVar6 + 0x61) = *(int32_t *)(param_2 + 0x308);
    *(int32_t *)((longlong)puVar6 + 0x30c) = *(int32_t *)(param_2 + 0x30c);
    *(int32_t *)(puVar6 + 0x62) = *(int32_t *)(param_2 + 0x310);
    *(int32_t *)((longlong)puVar6 + 0x314) = *(int32_t *)(param_2 + 0x314);
    *(int8_t *)(puVar6 + 99) = *(int8_t *)(param_2 + 0x318);
    FUN_180627ae0(puVar6 + 100,param_2 + 800);
    *(int32_t *)(puVar6 + 0x68) = *(int32_t *)(param_2 + 0x340);
    return puVar6;
  }
  puVar7 = (uint64_t *)*param_1;
  lVar9 = ((longlong)puVar6 - (longlong)puVar7) / 0x348;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) {
      lVar8 = 0;
      lVar10 = lVar8;
      goto joined_r0x0001801906da;
    }
  }
  lVar8 = FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x348,(char)param_1[3]);
  puVar6 = (uint64_t *)param_1[1];
  puVar7 = (uint64_t *)*param_1;
  lVar10 = lVar8;
joined_r0x0001801906da:
  for (; puVar7 != puVar6; puVar7 = puVar7 + 0x69) {
    FUN_18018e7e0(lVar8,puVar7);
    lVar8 = lVar8 + 0x348;
  }
  FUN_18018e7e0(lVar8,param_2);
  puVar6 = (uint64_t *)*param_1;
  puVar7 = (uint64_t *)param_1[1];
  if (puVar6 != puVar7) {
    do {
      (**(code **)*puVar6)(puVar6,0);
      puVar6 = puVar6 + 0x69;
    } while (puVar6 != puVar7);
    puVar6 = (uint64_t *)*param_1;
  }
  if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  puVar6 = (uint64_t *)(lVar9 * 0x348 + lVar10);
  *param_1 = lVar10;
  param_1[2] = (longlong)puVar6;
  param_1[1] = lVar8 + 0x348;
  return puVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18019067c(longlong param_1)
void FUN_18019067c(longlong param_1)

{
  uint64_t *puVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t *puVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = SUB168(SEXT816(in_RAX) * SEXT816(param_1),8);
  lVar2 = (lVar2 >> 8) - (lVar2 >> 0x3f);
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      lVar4 = 0;
      lVar5 = lVar4;
      goto joined_r0x0001801906da;
    }
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar2 * 0x348,(char)unaff_RSI[3]);
  unaff_RBP = unaff_RSI[1];
  unaff_RBX = *unaff_RSI;
  lVar5 = lVar4;
joined_r0x0001801906da:
  for (; unaff_RBX != unaff_RBP; unaff_RBX = unaff_RBX + 0x348) {
    FUN_18018e7e0(lVar4,unaff_RBX);
    lVar4 = lVar4 + 0x348;
  }
  FUN_18018e7e0(lVar4);
  puVar3 = (uint64_t *)*unaff_RSI;
  puVar1 = (uint64_t *)unaff_RSI[1];
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 0x69;
    } while (puVar3 != puVar1);
    puVar3 = (uint64_t *)*unaff_RSI;
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *unaff_RSI = lVar5;
  unaff_RSI[2] = lVar2 * 0x348 + lVar5;
  unaff_RSI[1] = lVar4 + 0x348;
  return;
}





// 函数: void FUN_180190743(void)
void FUN_180190743(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180190780(longlong *param_1)
void FUN_180190780(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0x69;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)puVar2;
  return;
}





// 函数: void FUN_1801907f0(longlong param_1,longlong param_2,int8_t param_3)
void FUN_1801907f0(longlong param_1,longlong param_2,int8_t param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  void *puVar7;
  longlong lVar8;
  uint64_t *puVar9;
  bool bVar10;
  int8_t auStack_368 [16];
  void *puStack_358;
  int iStack_350;
  
  if (param_1 != param_2) {
    iVar6 = 0;
    lVar8 = (param_2 - param_1) / 0x348;
    for (lVar2 = lVar8; lVar2 != 0; lVar2 = lVar2 >> 1) {
      iVar6 = iVar6 + 1;
    }
    FUN_180190e30(param_1,param_2,(longlong)(iVar6 + -1) * 2,param_3,0xfffffffffffffffe);
    if (lVar8 < 0x1d) {
      FUN_180190ae0(param_1,param_2);
    }
    else {
      lVar8 = param_1 + 0x5be0;
      FUN_180190ae0(param_1,lVar8);
      if (lVar8 != param_2) {
        param_1 = param_1 + 0x5898;
LAB_1801908b0:
        FUN_18018e7e0(auStack_368,lVar8);
        puVar9 = (uint64_t *)(param_1 + 0x10);
        lVar2 = lVar8;
        do {
          puVar7 = &system_buffer_ptr;
          if (puStack_358 != (void *)0x0) {
            puVar7 = puStack_358;
          }
          lVar3 = strstr(puVar7,&unknown_var_1588_ptr);
          puVar7 = &system_buffer_ptr;
          if ((void *)*puVar9 != (void *)0x0) {
            puVar7 = (void *)*puVar9;
          }
          lVar4 = strstr(puVar7,&unknown_var_1588_ptr);
          bVar10 = lVar4 != 0;
          if (lVar3 == 0) {
            if (bVar10) goto LAB_1801909bf;
            if (*(int *)(puVar9 + 1) != 0) {
              if (iStack_350 == 0) {
LAB_18019099a:
                bVar10 = true;
              }
              else {
                pbVar5 = (byte *)*puVar9;
                lVar3 = (longlong)puStack_358 - (longlong)pbVar5;
                do {
                  pbVar1 = pbVar5 + lVar3;
                  iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
                  if (iVar6 != 0) break;
                  pbVar5 = pbVar5 + 1;
                } while (*pbVar1 != 0);
LAB_180190993:
                bVar10 = 0 < iVar6;
              }
            }
LAB_18019099c:
            if (!bVar10) goto LAB_1801909bf;
          }
          else if (bVar10) {
            if (*(int *)(puVar9 + 1) == 0) {
              bVar10 = false;
            }
            else {
              if (iStack_350 == 0) goto LAB_18019099a;
              pbVar5 = (byte *)*puVar9;
              lVar3 = (longlong)puStack_358 - (longlong)pbVar5;
              do {
                pbVar1 = pbVar5 + lVar3;
                iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
                if (iVar6 != 0) goto LAB_180190993;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar1 != 0);
              bVar10 = false;
            }
            goto LAB_18019099c;
          }
          FUN_18018d8f0(lVar2,(param_1 - lVar8) + lVar2);
          lVar2 = lVar2 + -0x348;
          puVar9 = puVar9 + -0x69;
        } while( true );
      }
    }
  }
  return;
LAB_1801909bf:
  FUN_18018d8f0(lVar2,auStack_368);
  FUN_1801431d0(auStack_368);
  lVar8 = lVar8 + 0x348;
  param_1 = param_1 + 0x348;
  if (lVar8 == param_2) {
    return;
  }
  goto LAB_1801908b0;
}





// 函数: void FUN_180190a20(uint64_t *param_1,uint64_t *param_2)
void FUN_180190a20(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  char cVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int32_t uStackX_18;
  int32_t uStackX_1c;
  
  if (param_1 != param_2) {
    for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
      uVar1 = *puVar5;
      puVar4 = puVar5;
      puVar2 = puVar5;
      while (puVar2 != param_1) {
        cVar3 = func_0x00018018e0d0(uVar1,puVar2[-1]);
        if (cVar3 == '\0') break;
        *(int32_t *)puVar4 = *(int32_t *)(puVar2 + -1);
        *(int32_t *)((longlong)puVar4 + 4) = *(int32_t *)((longlong)puVar2 + -4);
        puVar4 = puVar4 + -1;
        puVar2 = puVar2 + -1;
      }
      uStackX_18 = (int32_t)uVar1;
      uStackX_1c = (int32_t)((ulonglong)uVar1 >> 0x20);
      *(int32_t *)puVar4 = uStackX_18;
      *(int32_t *)((longlong)puVar4 + 4) = uStackX_1c;
    }
  }
  return;
}





// 函数: void FUN_180190a35(uint64_t *param_1,uint64_t *param_2)
void FUN_180190a35(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  char cVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  
  puVar5 = param_1 + 1;
  do {
    if (puVar5 == param_2) {
      return;
    }
    uVar1 = *puVar5;
    _uStack0000000000000050 = uVar1;
    puVar4 = puVar5;
    puVar2 = puVar5;
    while (puVar2 != param_1) {
      cVar3 = func_0x00018018e0d0(uVar1,puVar2[-1]);
      if (cVar3 == '\0') break;
      *(int32_t *)puVar4 = *(int32_t *)(puVar2 + -1);
      *(int32_t *)((longlong)puVar4 + 4) = *(int32_t *)((longlong)puVar2 + -4);
      puVar4 = puVar4 + -1;
      puVar2 = puVar2 + -1;
    }
    puVar5 = puVar5 + 1;
    *(int32_t *)puVar4 = uStack0000000000000050;
    *(int32_t *)((longlong)puVar4 + 4) = uStack0000000000000054;
  } while( true );
}





// 函数: void FUN_180190a4d(void)
void FUN_180190a4d(void)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  char cVar3;
  uint64_t *unaff_RBP;
  uint64_t *puVar4;
  uint64_t *unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  
  do {
    uVar1 = *unaff_R14;
    _uStack0000000000000050 = uVar1;
    puVar2 = unaff_R14;
    puVar4 = unaff_R14;
    while (puVar2 != unaff_RBP) {
      cVar3 = func_0x00018018e0d0(uVar1,puVar2[-1]);
      if (cVar3 == '\0') break;
      *(int32_t *)puVar4 = *(int32_t *)(puVar2 + -1);
      *(int32_t *)((longlong)puVar4 + 4) = *(int32_t *)((longlong)puVar2 + -4);
      puVar4 = puVar4 + -1;
      puVar2 = puVar2 + -1;
    }
    unaff_R14 = unaff_R14 + 1;
    *(int32_t *)puVar4 = uStack0000000000000050;
    *(int32_t *)((longlong)puVar4 + 4) = uStack0000000000000054;
    if (unaff_R14 == unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180190ad0(void)
void FUN_180190ad0(void)

{
  return;
}





// 函数: void FUN_180190adc(void)
void FUN_180190adc(void)

{
  return;
}





// 函数: void FUN_180190ae0(uint64_t *param_1,uint64_t *param_2)
void FUN_180190ae0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  void *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  bool bVar12;
  int8_t auStack_368 [16];
  void *puStack_358;
  int iStack_350;
  
  if (param_1 != param_2) {
    for (puVar9 = param_1 + 0x69; puVar9 != param_2; puVar9 = puVar9 + 0x69) {
      FUN_18018e7e0(auStack_368,puVar9);
      puVar10 = puVar9;
      if (puVar9 != param_1) {
        puVar11 = puVar9 + 2;
        do {
          puVar2 = puVar11 + -0x69;
          puVar7 = &system_buffer_ptr;
          if (puStack_358 != (void *)0x0) {
            puVar7 = puStack_358;
          }
          lVar4 = strstr(puVar7,&unknown_var_1588_ptr);
          puVar7 = &system_buffer_ptr;
          if ((void *)*puVar2 != (void *)0x0) {
            puVar7 = (void *)*puVar2;
          }
          lVar5 = strstr(puVar7,&unknown_var_1588_ptr);
          bVar12 = lVar5 != 0;
          if (lVar4 == 0) {
            if (bVar12) break;
            if (*(int *)(puVar11 + -0x68) != 0) {
              if (iStack_350 == 0) {
LAB_180190c1a:
                bVar12 = true;
              }
              else {
                pbVar6 = (byte *)*puVar2;
                lVar4 = (longlong)puStack_358 - (longlong)pbVar6;
                do {
                  pbVar3 = pbVar6 + lVar4;
                  iVar8 = (uint)*pbVar6 - (uint)*pbVar3;
                  if (iVar8 != 0) break;
                  pbVar6 = pbVar6 + 1;
                } while (*pbVar3 != 0);
LAB_180190c13:
                bVar12 = 0 < iVar8;
              }
            }
LAB_180190c1c:
            if (!bVar12) break;
          }
          else if (bVar12) {
            if (*(int *)(puVar11 + -0x68) == 0) {
              bVar12 = false;
            }
            else {
              if (iStack_350 == 0) goto LAB_180190c1a;
              pbVar6 = (byte *)*puVar2;
              lVar4 = (longlong)puStack_358 - (longlong)pbVar6;
              do {
                pbVar3 = pbVar6 + lVar4;
                iVar8 = (uint)*pbVar6 - (uint)*pbVar3;
                if (iVar8 != 0) goto LAB_180190c13;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar3 != 0);
              bVar12 = false;
            }
            goto LAB_180190c1c;
          }
          puVar1 = puVar11 + -0x6b;
          FUN_18018d8f0(puVar10,puVar1);
          puVar10 = puVar10 + -0x69;
          puVar11 = puVar2;
        } while (puVar1 != param_1);
      }
      FUN_18018d8f0(puVar10,auStack_368);
      FUN_1801431d0(auStack_368);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001801910ba)
// WARNING: Removing unreachable block (ram,0x0001801910c0)
// WARNING: Removing unreachable block (ram,0x0001801910d3)
// WARNING: Removing unreachable block (ram,0x0001801910f7)
// WARNING: Removing unreachable block (ram,0x000180191100)
// WARNING: Removing unreachable block (ram,0x000180191112)
// WARNING: Removing unreachable block (ram,0x000180191115)
// WARNING: Removing unreachable block (ram,0x000180191133)
// WARNING: Removing unreachable block (ram,0x000180191135)
// WARNING: Removing unreachable block (ram,0x000180191148)
// WARNING: Removing unreachable block (ram,0x000180191150)
// WARNING: Removing unreachable block (ram,0x000180191167)
// WARNING: Removing unreachable block (ram,0x00018019117d)
// WARNING: Removing unreachable block (ram,0x000180191190)
// WARNING: Removing unreachable block (ram,0x00018019119d)



