#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part120.c - 12 个函数

// 函数: void FUN_18033ce60(uint64_t *param_1)
void FUN_18033ce60(uint64_t *param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  int64_t lStack_d0;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  int64_t alStack_a8 [2];
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int32_t uStack_46;
  int8_t uStack_42;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x18033ce79;
  uVar3 = FUN_18023a940(*(uint64_t *)(*(int64_t *)param_1[1] + 8));
  plVar2 = system_message_buffer;
  uVar1 = *param_1;
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  FUN_1806279c0(&puStack_d8);
  FUN_1800b2a30();
  puStack_d8 = &system_data_buffer_ptr;
  if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_d0 = 0;
  uStack_c0 = 0;
  puStack_d8 = &system_state_ptr;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_46 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  (**(code **)(*plVar2 + 0x108))(plVar2,uVar3,alStack_a8);
  FUN_1802a8080(uVar1,alStack_a8,4);
  if (uStack_98._1_1_ == '\0') {
    if (((char)uStack_98 == '\0') && (alStack_a8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_a8[0] = 0;
    alStack_a8[1] = 0;
    uStack_98 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_f8);
}





// 函数: void FUN_18033ced0(int param_1,int param_2,int64_t *param_3)
void FUN_18033ced0(int param_1,int param_2,int64_t *param_3)

{
  char cVar1;
  uint *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  
  for (lVar4 = (int64_t)param_1; lVar4 < param_2; lVar4 = lVar4 + 1) {
    puVar2 = (uint *)FUN_18032ba60(*param_3,*(int32_t *)(*(int64_t *)param_3[1] + lVar4 * 4),
                                   *(int32_t *)(*param_3 + 0x150));
    lVar3 = FUN_18032ba60(*param_3,*(int32_t *)(*(int64_t *)param_3[1] + lVar4 * 4),
                          *(int *)(*param_3 + 0x150) + -1);
    cVar1 = func_0x000180285f10(lVar3 + 4,puVar2 + 1,0x38d1b717);
    if (cVar1 == '\0') {
      *puVar2 = *puVar2 | 8;
    }
    if (*(char *)(lVar3 + 0xb0) != (char)puVar2[0x2c]) {
      *puVar2 = *puVar2 | 8;
    }
    if (*(char *)(lVar3 + 0x4c) != (char)puVar2[0x13]) {
      *puVar2 = *puVar2 | 8;
    }
    if (*(uint *)(lVar3 + 0x44) != puVar2[0x11]) {
      *puVar2 = *puVar2 | 8;
    }
    if (*(uint *)(lVar3 + 0x48) != puVar2[0x12]) {
      *puVar2 = *puVar2 | 8;
    }
    fVar5 = *(float *)(lVar3 + 0xa8) - (float)puVar2[0x2a];
    if ((fVar5 <= -0.0001) || (0.0001 <= fVar5)) {
      *puVar2 = *puVar2 | 8;
    }
    FUN_1803280a0(*param_3,lVar3 + 0xc0,puVar2 + 0x30);
    FUN_180328540(*param_3,lVar3 + 400,puVar2 + 100);
    FUN_180327e70(*param_3,lVar3 + 0x170,puVar2 + 0x5c,0);
  }
  return;
}





// 函数: void FUN_18033cef2(void)
void FUN_18033cef2(void)

{
  char cVar1;
  uint *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_R14;
  float fVar4;
  
  do {
    puVar2 = (uint *)FUN_18032ba60(*unaff_RSI,
                                   *(int32_t *)(*(int64_t *)unaff_RSI[1] + unaff_RBP * 4),
                                   *(int32_t *)(*unaff_RSI + 0x150));
    lVar3 = FUN_18032ba60(*unaff_RSI,*(int32_t *)(*(int64_t *)unaff_RSI[1] + unaff_RBP * 4),
                          *(int *)(*unaff_RSI + 0x150) + -1);
    cVar1 = func_0x000180285f10(lVar3 + 4,puVar2 + 1,0x38d1b717);
    if (cVar1 == '\0') {
      *puVar2 = *puVar2 | 8;
    }
    if (*(char *)(lVar3 + 0xb0) != (char)puVar2[0x2c]) {
      *puVar2 = *puVar2 | 8;
    }
    if (*(char *)(lVar3 + 0x4c) != (char)puVar2[0x13]) {
      *puVar2 = *puVar2 | 8;
    }
    if (*(uint *)(lVar3 + 0x44) != puVar2[0x11]) {
      *puVar2 = *puVar2 | 8;
    }
    if (*(uint *)(lVar3 + 0x48) != puVar2[0x12]) {
      *puVar2 = *puVar2 | 8;
    }
    fVar4 = *(float *)(lVar3 + 0xa8) - (float)puVar2[0x2a];
    if ((fVar4 <= -0.0001) || (0.0001 <= fVar4)) {
      *puVar2 = *puVar2 | 8;
    }
    FUN_1803280a0(*unaff_RSI,lVar3 + 0xc0,puVar2 + 0x30);
    FUN_180328540(*unaff_RSI,lVar3 + 400,puVar2 + 100);
    FUN_180327e70(*unaff_RSI,lVar3 + 0x170,puVar2 + 0x5c,0);
    unaff_RBP = unaff_RBP + 1;
  } while (unaff_RBP < unaff_R14);
  return;
}





// 函数: void FUN_18033d01f(void)
void FUN_18033d01f(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18033d080(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c056a0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18033d170(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c056e0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_18033d250(int param_1,int param_2,uint64_t *param_3)
void FUN_18033d250(int param_1,int param_2,uint64_t *param_3)

{
  int64_t lVar1;
  
  for (lVar1 = (int64_t)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_180322890(param_3[1],*(uint64_t *)(*(int64_t *)*param_3 + lVar1 * 8),0xffffffff);
  }
  return;
}





// 函数: void FUN_18033d370(int64_t *param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18033d370(int64_t *param_1,uint64_t param_2,uint64_t *param_3)

{
  code *pcVar1;
  int64_t lStackX_10;
  int64_t *plStackX_18;
  
  pcVar1 = (code *)*param_3;
  plStackX_18 = &lStackX_10;
  lStackX_10 = *param_1;
  *param_1 = 0;
  (*pcVar1)(&lStackX_10);
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018033d3bb. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033d450(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_18033d450(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  
  if (param_3 != param_4) {
    lVar7 = param_1[1];
    uVar11 = param_4 - param_3 >> 5;
    if ((uint64_t)(param_1[2] - lVar7 >> 5) < uVar11) {
      lVar9 = *param_1;
      lVar7 = lVar7 - lVar9 >> 5;
      uVar8 = lVar7 * 2;
      if (lVar7 == 0) {
        uVar8 = 1;
      }
      if (uVar8 <= lVar7 + uVar11) {
        uVar8 = lVar7 + uVar11;
      }
      if (uVar8 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar8 << 5,(char)param_1[3]);
        lVar9 = *param_1;
      }
      uVar4 = FUN_180059780(lVar9,param_2,lVar7);
      uVar4 = FUN_180059300(param_3,param_4,uVar4);
      lVar9 = FUN_180059780(param_2,param_1[1],uVar4);
      puVar3 = (uint64_t *)param_1[1];
      puVar6 = (uint64_t *)*param_1;
      if (puVar6 != puVar3) {
        do {
          (**(code **)*puVar6)(puVar6,0);
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar3);
        puVar6 = (uint64_t *)*param_1;
      }
      if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar6);
      }
      *param_1 = lVar7;
      param_1[2] = uVar8 * 0x20 + lVar7;
      param_1[1] = lVar9;
    }
    else {
      uVar8 = lVar7 - param_2 >> 5;
      if (uVar11 < uVar8) {
        FUN_180059780(lVar7 + uVar11 * -0x20);
        FUN_18016fec0(param_2,param_1[1] + uVar11 * -0x20);
        FUN_180059250(param_3,param_4,param_2);
        param_1[1] = param_1[1] + uVar11 * 0x20;
      }
      else {
        lVar9 = uVar8 * 0x20;
        param_3 = param_3 + lVar9;
        FUN_180059300(param_3,param_4,lVar7);
        FUN_180059780(param_2,param_1[1],(uVar11 - uVar8) * 0x20 + param_1[1]);
        lVar7 = lVar9 + param_2;
        if (0 < (int64_t)uVar8) {
          param_2 = param_2 + (lVar9 - param_3);
          plVar5 = (int64_t *)(param_3 + 8);
          do {
            uVar2 = *(uint *)(plVar5 + -3);
            uVar10 = (uint64_t)uVar2;
            plVar1 = plVar5 + -4;
            lVar7 = lVar7 + -0x20;
            if (*plVar1 != 0) {
              FUN_1806277c0(lVar7,uVar10);
            }
            if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(*(uint64_t *)(param_2 + (int64_t)plVar1),*plVar1,uVar10);
            }
            *(int32_t *)(param_2 + 8 + (int64_t)plVar1) = 0;
            if (*(int64_t *)(param_2 + (int64_t)plVar1) != 0) {
              *(int8_t *)(uVar10 + *(int64_t *)(param_2 + (int64_t)plVar1)) = 0;
            }
            uVar8 = uVar8 - 1;
            *(int32_t *)(param_2 + 0x14 + (int64_t)plVar1) =
                 *(int32_t *)((int64_t)plVar5 + -0xc);
            plVar5 = plVar1;
          } while (0 < (int64_t)uVar8);
        }
        param_1[1] = param_1[1] + uVar11 * 0x20;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033d472(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_18033d472(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t *puVar3;
  int64_t in_RAX;
  int64_t *plVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t unaff_R12;
  uint64_t uVar10;
  
  uVar10 = param_4 - param_3 >> 5;
  if ((uint64_t)(in_RAX - param_2 >> 5) < uVar10) {
    lVar6 = *param_1;
    lVar8 = param_2 - lVar6 >> 5;
    uVar7 = lVar8 * 2;
    if (lVar8 == 0) {
      uVar7 = 1;
    }
    if (uVar7 <= lVar8 + uVar10) {
      uVar7 = lVar8 + uVar10;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_18062b420(system_memory_pool_ptr,uVar7 << 5,(char)param_1[3]);
      lVar6 = *param_1;
    }
    FUN_180059780(lVar6);
    FUN_180059300(param_3);
    lVar6 = FUN_180059780();
    puVar3 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
    if (puVar5 != puVar3) {
      do {
        (**(code **)*puVar5)(puVar5,0);
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar3);
      puVar5 = (uint64_t *)*param_1;
    }
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    *param_1 = lVar8;
    param_1[2] = uVar7 * 0x20 + lVar8;
    param_1[1] = lVar6;
  }
  else {
    uVar7 = param_2 - unaff_R12 >> 5;
    if (uVar10 < uVar7) {
      FUN_180059780(param_2 + uVar10 * -0x20);
      FUN_18016fec0();
      FUN_180059250(param_3);
      param_1[1] = param_1[1] + uVar10 * 0x20;
    }
    else {
      lVar8 = uVar7 * 0x20;
      param_3 = param_3 + lVar8;
      FUN_180059300(param_3);
      FUN_180059780();
      lVar6 = lVar8 + unaff_R12;
      if (0 < (int64_t)uVar7) {
        lVar8 = unaff_R12 + (lVar8 - param_3);
        plVar4 = (int64_t *)(param_3 + 8);
        do {
          uVar2 = *(uint *)(plVar4 + -3);
          uVar9 = (uint64_t)uVar2;
          plVar1 = plVar4 + -4;
          lVar6 = lVar6 + -0x20;
          if (*plVar1 != 0) {
            FUN_1806277c0(lVar6,uVar9);
          }
          if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(lVar8 + (int64_t)plVar1),*plVar1,uVar9);
          }
          *(int32_t *)(lVar8 + 8 + (int64_t)plVar1) = 0;
          if (*(int64_t *)(lVar8 + (int64_t)plVar1) != 0) {
            *(int8_t *)(uVar9 + *(int64_t *)(lVar8 + (int64_t)plVar1)) = 0;
          }
          uVar7 = uVar7 - 1;
          *(int32_t *)(lVar8 + 0x14 + (int64_t)plVar1) =
               *(int32_t *)((int64_t)plVar4 + -0xc);
          plVar4 = plVar1;
        } while (0 < (int64_t)uVar7);
      }
      param_1[1] = param_1[1] + uVar10 * 0x20;
    }
  }
  return;
}





// 函数: void FUN_18033d675(void)
void FUN_18033d675(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033da00)
// WARNING: Removing unreachable block (ram,0x00018033da0a)
// WARNING: Removing unreachable block (ram,0x00018033da1a)
// WARNING: Removing unreachable block (ram,0x00018033da20)
// WARNING: Removing unreachable block (ram,0x00018033da2d)
// WARNING: Removing unreachable block (ram,0x00018033da31)
// WARNING: Removing unreachable block (ram,0x00018033da48)
// WARNING: Removing unreachable block (ram,0x00018033da4a)
// WARNING: Removing unreachable block (ram,0x00018033da57)
// WARNING: Removing unreachable block (ram,0x00018033da60)
// WARNING: Removing unreachable block (ram,0x00018033da6f)
// WARNING: Removing unreachable block (ram,0x00018033da7b)
// WARNING: Removing unreachable block (ram,0x00018033da7f)
// WARNING: Removing unreachable block (ram,0x00018033d9f1)



// 函数: void FUN_18033d680(uint *param_1,uint *param_2,int64_t param_3)
void FUN_18033d680(uint *param_1,uint *param_2,int64_t param_3)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint *puVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  uint *puVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  bool bVar14;
  
  uVar3 = (int64_t)param_2 - (int64_t)param_1;
  while ((0x70 < (int64_t)(uVar3 & 0xfffffffffffffffc) && (0 < param_3))) {
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    uVar7 = *param_1;
    uVar1 = param_1[lVar4 >> 1];
    uVar2 = param_2[-1];
    uVar11 = uVar7;
    if (uVar7 < uVar1) {
      uVar11 = uVar1;
      uVar1 = uVar7;
    }
    puVar5 = param_2;
    puVar9 = param_1;
    if ((uVar2 <= uVar11) && (uVar11 = uVar1, uVar1 < uVar2)) {
      uVar11 = uVar2;
    }
    while( true ) {
      while (uVar7 < uVar11) {
        uVar7 = puVar9[1];
        puVar9 = puVar9 + 1;
      }
      puVar5 = puVar5 + -1;
      uVar1 = *puVar5;
      while (uVar11 < uVar1) {
        puVar5 = puVar5 + -1;
        uVar1 = *puVar5;
      }
      if (puVar5 <= puVar9) break;
      uVar1 = *puVar9;
      *puVar9 = *puVar5;
      *puVar5 = uVar1;
      uVar7 = puVar9[1];
      puVar9 = puVar9 + 1;
    }
    param_3 = param_3 + -1;
    FUN_18033d680(puVar9,param_2,param_3);
    uVar3 = (int64_t)puVar9 - (int64_t)param_1;
    param_2 = puVar9;
  }
  if (param_3 != 0) {
    return;
  }
  lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < lVar4) {
    lVar13 = (lVar4 + -2 >> 1) + 1;
    lVar10 = lVar13 * 2 + 2;
    do {
      uVar1 = param_1[lVar13 + -1];
      lVar13 = lVar13 + -1;
      lVar10 = lVar10 + -2;
      lVar12 = lVar13;
      lVar6 = lVar10;
      while (lVar6 < lVar4) {
        lVar8 = lVar6 + -1;
        if (param_1[lVar6 + -1] <= param_1[lVar6]) {
          lVar8 = lVar6;
        }
        param_1[lVar12] = param_1[lVar8];
        lVar12 = lVar8;
        lVar6 = lVar8 * 2 + 2;
      }
      if (lVar6 == lVar4) {
        param_1[lVar12] = param_1[lVar6 + -1];
        lVar12 = lVar6 + -1;
      }
      while (lVar13 < lVar12) {
        lVar6 = lVar12 + -1 >> 1;
        if (uVar1 <= param_1[lVar6]) break;
        param_1[lVar12] = param_1[lVar6];
        lVar12 = lVar6;
      }
      param_1[lVar12] = uVar1;
    } while (lVar13 != 0);
  }
  if (1 < lVar4) {
    param_2 = param_2 + -1;
    do {
      uVar1 = *param_2;
      lVar4 = lVar4 + -1;
      lVar13 = 2;
      *param_2 = *param_1;
      bVar14 = lVar4 == 2;
      lVar10 = 0;
      lVar12 = 0;
      if (2 < lVar4) {
        do {
          lVar10 = lVar13 + -1;
          if (param_1[lVar13 + -1] <= param_1[lVar13]) {
            lVar10 = lVar13;
          }
          lVar13 = lVar10 * 2 + 2;
          param_1[lVar12] = param_1[lVar10];
          bVar14 = lVar13 == lVar4;
          lVar12 = lVar10;
        } while (lVar13 < lVar4);
      }
      if (bVar14) {
        param_1[lVar10] = param_1[lVar13 + -1];
        lVar10 = lVar13 + -1;
      }
      while (0 < lVar10) {
        lVar4 = lVar10 + -1 >> 1;
        if (uVar1 <= param_1[lVar4]) break;
        param_1[lVar10] = param_1[lVar4];
        lVar10 = lVar4;
      }
      param_2 = param_2 + -1;
      param_1[lVar10] = uVar1;
      lVar4 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < lVar4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033da00)
// WARNING: Removing unreachable block (ram,0x00018033da0a)
// WARNING: Removing unreachable block (ram,0x00018033da1a)
// WARNING: Removing unreachable block (ram,0x00018033da20)
// WARNING: Removing unreachable block (ram,0x00018033da2d)
// WARNING: Removing unreachable block (ram,0x00018033da31)
// WARNING: Removing unreachable block (ram,0x00018033da48)
// WARNING: Removing unreachable block (ram,0x00018033da4a)
// WARNING: Removing unreachable block (ram,0x00018033da57)
// WARNING: Removing unreachable block (ram,0x00018033da60)
// WARNING: Removing unreachable block (ram,0x00018033da6f)
// WARNING: Removing unreachable block (ram,0x00018033da7b)
// WARNING: Removing unreachable block (ram,0x00018033da7f)
// WARNING: Removing unreachable block (ram,0x00018033d9f1)



// 函数: void FUN_18033d689(uint *param_1,uint *param_2,int64_t param_3)
void FUN_18033d689(uint *param_1,uint *param_2,int64_t param_3)

{
  uint uVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  uint *puVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  uint *puVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  bool bVar14;
  
  uVar3 = in_RAX - (int64_t)param_1;
  while ((0x70 < (int64_t)(uVar3 & 0xfffffffffffffffc) && (0 < param_3))) {
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    uVar7 = *param_1;
    uVar1 = param_1[lVar4 >> 1];
    uVar2 = param_2[-1];
    uVar11 = uVar7;
    if (uVar7 < uVar1) {
      uVar11 = uVar1;
      uVar1 = uVar7;
    }
    puVar5 = param_2;
    puVar9 = param_1;
    if ((uVar2 <= uVar11) && (uVar11 = uVar1, uVar1 < uVar2)) {
      uVar11 = uVar2;
    }
    while( true ) {
      while (uVar7 < uVar11) {
        uVar7 = puVar9[1];
        puVar9 = puVar9 + 1;
      }
      puVar5 = puVar5 + -1;
      uVar1 = *puVar5;
      while (uVar11 < uVar1) {
        puVar5 = puVar5 + -1;
        uVar1 = *puVar5;
      }
      if (puVar5 <= puVar9) break;
      uVar1 = *puVar9;
      *puVar9 = *puVar5;
      *puVar5 = uVar1;
      uVar7 = puVar9[1];
      puVar9 = puVar9 + 1;
    }
    param_3 = param_3 + -1;
    FUN_18033d680(puVar9,param_2,param_3);
    uVar3 = (int64_t)puVar9 - (int64_t)param_1;
    param_2 = puVar9;
  }
  if (param_3 != 0) {
    return;
  }
  lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < lVar4) {
    lVar13 = (lVar4 + -2 >> 1) + 1;
    lVar10 = lVar13 * 2 + 2;
    do {
      uVar1 = param_1[lVar13 + -1];
      lVar13 = lVar13 + -1;
      lVar10 = lVar10 + -2;
      lVar12 = lVar13;
      lVar6 = lVar10;
      while (lVar6 < lVar4) {
        lVar8 = lVar6 + -1;
        if (param_1[lVar6 + -1] <= param_1[lVar6]) {
          lVar8 = lVar6;
        }
        param_1[lVar12] = param_1[lVar8];
        lVar12 = lVar8;
        lVar6 = lVar8 * 2 + 2;
      }
      if (lVar6 == lVar4) {
        param_1[lVar12] = param_1[lVar6 + -1];
        lVar12 = lVar6 + -1;
      }
      while (lVar13 < lVar12) {
        lVar6 = lVar12 + -1 >> 1;
        if (uVar1 <= param_1[lVar6]) break;
        param_1[lVar12] = param_1[lVar6];
        lVar12 = lVar6;
      }
      param_1[lVar12] = uVar1;
    } while (lVar13 != 0);
  }
  if (1 < lVar4) {
    param_2 = param_2 + -1;
    do {
      uVar1 = *param_2;
      lVar4 = lVar4 + -1;
      lVar13 = 2;
      *param_2 = *param_1;
      bVar14 = lVar4 == 2;
      lVar10 = 0;
      lVar12 = 0;
      if (2 < lVar4) {
        do {
          lVar10 = lVar13 + -1;
          if (param_1[lVar13 + -1] <= param_1[lVar13]) {
            lVar10 = lVar13;
          }
          lVar13 = lVar10 * 2 + 2;
          param_1[lVar12] = param_1[lVar10];
          bVar14 = lVar13 == lVar4;
          lVar12 = lVar10;
        } while (lVar13 < lVar4);
      }
      if (bVar14) {
        param_1[lVar10] = param_1[lVar13 + -1];
        lVar10 = lVar13 + -1;
      }
      while (0 < lVar10) {
        lVar4 = lVar10 + -1 >> 1;
        if (uVar1 <= param_1[lVar4]) break;
        param_1[lVar10] = param_1[lVar4];
        lVar10 = lVar4;
      }
      param_2 = param_2 + -1;
      param_1[lVar10] = uVar1;
      lVar4 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < lVar4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033da00)
// WARNING: Removing unreachable block (ram,0x00018033da0a)
// WARNING: Removing unreachable block (ram,0x00018033da1a)
// WARNING: Removing unreachable block (ram,0x00018033da20)
// WARNING: Removing unreachable block (ram,0x00018033da2d)
// WARNING: Removing unreachable block (ram,0x00018033da31)
// WARNING: Removing unreachable block (ram,0x00018033da48)
// WARNING: Removing unreachable block (ram,0x00018033da4a)
// WARNING: Removing unreachable block (ram,0x00018033da57)
// WARNING: Removing unreachable block (ram,0x00018033da60)
// WARNING: Removing unreachable block (ram,0x00018033da6f)
// WARNING: Removing unreachable block (ram,0x00018033da7b)
// WARNING: Removing unreachable block (ram,0x00018033da7f)
// WARNING: Removing unreachable block (ram,0x00018033d9f1)



// 函数: void FUN_18033d6a8(void)
void FUN_18033d6a8(void)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  uint *puVar8;
  int64_t unaff_RSI;
  uint *unaff_RDI;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  uint *in_R9;
  int64_t lVar12;
  bool bVar13;
  
  do {
    puVar8 = in_R9;
    if (unaff_RSI < 1) break;
    lVar3 = (int64_t)in_R9 - (int64_t)unaff_RDI >> 2;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    uVar6 = *unaff_RDI;
    uVar1 = unaff_RDI[lVar3 >> 1];
    uVar2 = in_R9[-1];
    uVar10 = uVar6;
    if (uVar6 < uVar1) {
      uVar10 = uVar1;
      uVar1 = uVar6;
    }
    puVar4 = in_R9;
    puVar8 = unaff_RDI;
    if ((uVar2 <= uVar10) && (uVar10 = uVar1, uVar1 < uVar2)) {
      uVar10 = uVar2;
    }
    while( true ) {
      while (uVar6 < uVar10) {
        uVar6 = puVar8[1];
        puVar8 = puVar8 + 1;
      }
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
      while (uVar10 < uVar1) {
        puVar4 = puVar4 + -1;
        uVar1 = *puVar4;
      }
      if (puVar4 <= puVar8) break;
      uVar1 = *puVar8;
      *puVar8 = *puVar4;
      *puVar4 = uVar1;
      uVar6 = puVar8[1];
      puVar8 = puVar8 + 1;
    }
    unaff_RSI = unaff_RSI + -1;
    FUN_18033d680(puVar8,in_R9,unaff_RSI);
    in_R9 = puVar8;
  } while (0x70 < (int64_t)((int64_t)puVar8 - (int64_t)unaff_RDI & 0xfffffffffffffffcU));
  if (unaff_RSI != 0) {
    return;
  }
  lVar3 = (int64_t)puVar8 - (int64_t)unaff_RDI >> 2;
  if (1 < lVar3) {
    lVar12 = (lVar3 + -2 >> 1) + 1;
    lVar9 = lVar12 * 2 + 2;
    do {
      uVar1 = unaff_RDI[lVar12 + -1];
      lVar12 = lVar12 + -1;
      lVar9 = lVar9 + -2;
      lVar11 = lVar12;
      lVar5 = lVar9;
      while (lVar5 < lVar3) {
        lVar7 = lVar5 + -1;
        if (unaff_RDI[lVar5 + -1] <= unaff_RDI[lVar5]) {
          lVar7 = lVar5;
        }
        unaff_RDI[lVar11] = unaff_RDI[lVar7];
        lVar11 = lVar7;
        lVar5 = lVar7 * 2 + 2;
      }
      if (lVar5 == lVar3) {
        unaff_RDI[lVar11] = unaff_RDI[lVar5 + -1];
        lVar11 = lVar5 + -1;
      }
      while (lVar12 < lVar11) {
        lVar5 = lVar11 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar5]) break;
        unaff_RDI[lVar11] = unaff_RDI[lVar5];
        lVar11 = lVar5;
      }
      unaff_RDI[lVar11] = uVar1;
    } while (lVar12 != 0);
  }
  if (1 < lVar3) {
    puVar8 = puVar8 + -1;
    do {
      uVar1 = *puVar8;
      lVar3 = lVar3 + -1;
      lVar12 = 2;
      *puVar8 = *unaff_RDI;
      bVar13 = lVar3 == 2;
      lVar9 = 0;
      lVar11 = 0;
      if (2 < lVar3) {
        do {
          lVar9 = lVar12 + -1;
          if (unaff_RDI[lVar12 + -1] <= unaff_RDI[lVar12]) {
            lVar9 = lVar12;
          }
          lVar12 = lVar9 * 2 + 2;
          unaff_RDI[lVar11] = unaff_RDI[lVar9];
          bVar13 = lVar12 == lVar3;
          lVar11 = lVar9;
        } while (lVar12 < lVar3);
      }
      if (bVar13) {
        unaff_RDI[lVar9] = unaff_RDI[lVar12 + -1];
        lVar9 = lVar12 + -1;
      }
      while (0 < lVar9) {
        lVar3 = lVar9 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar3]) break;
        unaff_RDI[lVar9] = unaff_RDI[lVar3];
        lVar9 = lVar3;
      }
      puVar8 = puVar8 + -1;
      unaff_RDI[lVar9] = uVar1;
      lVar3 = (4 - (int64_t)unaff_RDI) + (int64_t)puVar8 >> 2;
    } while (1 < lVar3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033da00)
// WARNING: Removing unreachable block (ram,0x00018033da0a)
// WARNING: Removing unreachable block (ram,0x00018033da1a)
// WARNING: Removing unreachable block (ram,0x00018033da20)
// WARNING: Removing unreachable block (ram,0x00018033da2d)
// WARNING: Removing unreachable block (ram,0x00018033da31)
// WARNING: Removing unreachable block (ram,0x00018033da48)
// WARNING: Removing unreachable block (ram,0x00018033da4a)
// WARNING: Removing unreachable block (ram,0x00018033da57)
// WARNING: Removing unreachable block (ram,0x00018033da60)
// WARNING: Removing unreachable block (ram,0x00018033da6f)
// WARNING: Removing unreachable block (ram,0x00018033da7b)
// WARNING: Removing unreachable block (ram,0x00018033da7f)
// WARNING: Removing unreachable block (ram,0x00018033d9f1)



