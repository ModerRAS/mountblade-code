#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part049.c - 16 个函数

// 函数: void FUN_1805aa090(uint64_t param_1,longlong param_2)
void FUN_1805aa090(uint64_t param_1,longlong param_2)

{
  void *puVar1;
  int32_t uVar2;
  uint uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  void *puVar7;
  void *puStack_40;
  int32_t *puStack_38;
  uint uStack_30;
  uint64_t uStack_28;
  
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puStack_38 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x23,0x13);
  *(int8_t *)puStack_38 = 0;
  uVar2 = FUN_18064e990(puStack_38);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
  *puStack_38 = 0x73736f50;
  puStack_38[1] = 0x656c6269;
  puStack_38[2] = 0x61707320;
  puStack_38[3] = 0x6f206e77;
  puStack_38[4] = 0x65742072;
  puStack_38[5] = 0x6f70656c;
  puStack_38[6] = 0x70207472;
  puStack_38[7] = 0x6c626f72;
  *(int16_t *)(puStack_38 + 8) = 0x6d65;
  *(int8_t *)((longlong)puStack_38 + 0x22) = 0;
  uStack_30 = 0x22;
  puVar1 = *(void **)(*(longlong *)(system_system_config + 0x18) + 0x4e0);
  puVar7 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar7 = puVar1;
  }
  FUN_180628040(&puStack_40,&unknown_var_2736_ptr,puVar7);
  iVar6 = uStack_30 + 0x2a;
  if (iVar6 != 0) {
    uVar3 = uStack_30 + 0x2b;
    if (puStack_38 == (int32_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_38 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar3,0x13);
      *(int8_t *)puStack_38 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_28) goto LAB_1805aa1de;
      puStack_38 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_38,uVar3,0x10,0x13);
    }
    uVar2 = FUN_18064e990(puStack_38);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
  }
LAB_1805aa1de:
  puVar4 = (uint64_t *)((ulonglong)uStack_30 + (longlong)puStack_38);
  *puVar4 = 0x6e616d206f6f5420;
  puVar4[1] = 0x6369737968702079;
  *(int32_t *)(puVar4 + 2) = 0x6f632073;
  *(int32_t *)((longlong)puVar4 + 0x14) = 0x6361746e;
  *(int32_t *)(puVar4 + 3) = 0x62207374;
  *(int32_t *)((longlong)puVar4 + 0x1c) = 0x65777465;
  puVar4[4] = 0x746e656761206e65;
  *(int16_t *)(puVar4 + 5) = 0x2e73;
  *(int8_t *)((longlong)puVar4 + 0x2a) = 0;
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (puStack_38 != (int32_t *)0x0) {
    puVar5 = puStack_38;
  }
  uStack_30 = iVar6;
  FUN_180627340(&unknown_var_2792_ptr,puVar5,(double)*(float *)(param_2 + 0x1c),
                (double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x24));
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (puStack_38 != (int32_t *)0x0) {
    puVar5 = puStack_38;
  }
  FUN_180626f80(&unknown_var_2704_ptr,puVar5);
  puStack_40 = &unknown_var_3456_ptr;
  if (puStack_38 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805aa2c0(longlong param_1)
void FUN_1805aa2c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0x200);
  FUN_1800e8140(plVar1,0x80);
  lVar3 = *plVar1;
  lVar7 = lVar3;
  if (*(char *)(param_1 + 0x224) != '\0') {
    lVar7 = param_1;
  }
  lVar7 = lVar7 + 0x200;
  lVar6 = lVar3;
  if (*(char *)(param_1 + 0x224) != '\0') {
    lVar6 = param_1;
  }
  lVar8 = lVar7 - lVar6;
  uVar5 = lVar8 >> 3;
  if ((ulonglong)(*(longlong *)(param_1 + 0x210) - lVar3 >> 3) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar5 * 8,*(int8_t *)(param_1 + 0x218));
    }
    if (lVar6 != lVar7) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar6,lVar8);
    }
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar7 = lVar3 + uVar5 * 8;
    *plVar1 = lVar3;
    *(longlong *)(param_1 + 0x210) = lVar7;
    *(longlong *)(param_1 + 0x208) = lVar7;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x208);
    uVar4 = lVar2 - lVar3 >> 3;
    if (uVar4 < uVar5) {
      lVar8 = lVar6 + uVar4 * 8;
      if (lVar6 != lVar8) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar6);
      }
      if (lVar8 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar8,lVar7 - lVar8);
      }
      *(longlong *)(param_1 + 0x208) = lVar2;
    }
    else {
      if (lVar6 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar6,lVar8);
      }
      *(longlong *)(param_1 + 0x208) = lVar3;
    }
  }
  *(int8_t *)(param_1 + 0x224) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805aa330(void)
void FUN_1805aa330(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,unaff_RBP * 8,(char)unaff_RBX[3]);
  }
  if (unaff_RSI != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_RBP * 8;
  *unaff_RBX = lVar2;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  *(int8_t *)(unaff_R15 + 0x224) = 0;
  return;
}






// 函数: void FUN_1805aa391(longlong param_1)
void FUN_1805aa391(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 3;
  if (uVar3 < unaff_RBP) {
    lVar1 = unaff_RSI + uVar3 * 8;
    if (unaff_RSI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RDI - lVar1);
    }
    *(longlong *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RSI != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RBX + 8) = param_1;
  }
  *(int8_t *)(unaff_R15 + 0x224) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805aa420(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  uint64_t *puVar11;
  
  puVar1 = (ulonglong *)(param_1 + 0x200);
  puVar9 = (uint64_t *)0x0;
  *puVar1 = 0;
  *(uint64_t *)(param_1 + 0x208) = 0;
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(int32_t *)(param_1 + 0x218) = 3;
  *(int32_t *)(param_1 + 0x220) = 0;
  if (*(char *)(param_1 + 0x224) == '\0') {
    *(ulonglong *)(param_1 + 0x208) = *puVar1;
    *(int8_t *)(param_1 + 0x224) = 1;
  }
  *(int32_t *)(param_1 + 0x220) = 0;
  *(int8_t *)(param_1 + 0x224) = *(int8_t *)(param_2 + 0x224);
  if (*(char *)(param_2 + 0x224) == '\0') {
    lVar10 = (longlong)(int)(*(longlong *)(param_2 + 0x208) - *(longlong *)(param_2 + 0x200) >> 3);
    FUN_1800e8140(puVar1,lVar10,param_3,param_4,0xfffffffffffffffe);
    puVar3 = puVar9;
    if (0 < lVar10) {
      do {
        puVar6 = (uint64_t *)(*(longlong *)(param_2 + 0x200) + (longlong)puVar3 * 8);
        puVar11 = *(uint64_t **)(param_1 + 0x208);
        if (puVar11 < *(uint64_t **)(param_1 + 0x210)) {
          *(uint64_t **)(param_1 + 0x208) = puVar11 + 1;
          *puVar11 = *puVar6;
        }
        else {
          puVar8 = (uint64_t *)*puVar1;
          lVar4 = (longlong)puVar11 - (longlong)puVar8 >> 3;
          if (lVar4 == 0) {
            lVar4 = 1;
LAB_1805aa5a3:
            puVar5 = (uint64_t *)
                     FUN_18062b420(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(param_1 + 0x218));
            puVar11 = *(uint64_t **)(param_1 + 0x208);
            puVar8 = (uint64_t *)*puVar1;
          }
          else {
            lVar4 = lVar4 * 2;
            puVar5 = puVar9;
            if (lVar4 != 0) goto LAB_1805aa5a3;
          }
          if (puVar8 != puVar11) {
                    // WARNING: Subroutine does not return
            memmove(puVar5,puVar8,(longlong)puVar11 - (longlong)puVar8);
          }
          *puVar5 = *puVar6;
          if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar1 = (ulonglong)puVar5;
          *(uint64_t **)(param_1 + 0x208) = puVar5 + 1;
          *(uint64_t **)(param_1 + 0x210) = puVar5 + lVar4;
        }
        puVar3 = (uint64_t *)((longlong)puVar3 + 1);
      } while ((longlong)puVar3 < lVar10);
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x220);
    *(uint *)(param_1 + 0x220) = uVar2;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      do {
        puVar3 = (uint64_t *)((longlong)puVar9 + param_2);
        if (*(char *)(param_1 + 0x224) == '\0') {
          puVar6 = (uint64_t *)(*puVar1 + (longlong)puVar9);
        }
        else {
          puVar6 = (uint64_t *)((param_1 - param_2) + (longlong)puVar3);
        }
        if (*(char *)(param_2 + 0x224) == '\0') {
          puVar3 = (uint64_t *)(*(longlong *)(param_2 + 0x200) + (longlong)puVar9);
        }
        *puVar6 = *puVar3;
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805aa630(longlong *param_1,ulonglong param_2)
void FUN_1805aa630(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puStackX_8;
  uint64_t *puStackX_10;
  
  lVar7 = param_1[1];
  if ((ulonglong)((param_1[2] - lVar7) / 0x228) < param_2) {
    lVar4 = *param_1;
    lVar1 = (lVar7 - lVar4) / 0x228;
    uVar5 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar5 = 1;
    }
    if (uVar5 < lVar1 + param_2) {
      uVar5 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar5 != 0) {
      lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar5 * 0x228,(char)param_1[3]);
      lVar7 = param_1[1];
      lVar4 = *param_1;
    }
    FUN_1805aaaf0(&puStackX_8,lVar4,lVar7,lVar1);
    puVar2 = puStackX_8;
    if (param_2 != 0) {
      puVar3 = puStackX_8 + 0x41;
      uVar6 = param_2;
      do {
        puStackX_8 = puVar3 + -0x41;
        puStackX_10 = puVar3 + -1;
        *puStackX_10 = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(int32_t *)(puVar3 + 2) = 3;
        *(int8_t *)((longlong)puVar3 + 0x1c) = 1;
        *(int32_t *)(puVar3 + 3) = 0;
        puVar3 = puVar3 + 0x45;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar7 = param_1[1];
    lVar4 = *param_1;
    if (lVar4 != lVar7) {
      do {
        FUN_1805070c0(lVar4);
        lVar4 = lVar4 + 0x228;
      } while (lVar4 != lVar7);
      lVar4 = *param_1;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_1 = lVar1;
    param_1[1] = (longlong)(puVar2 + param_2 * 0x45);
    param_1[2] = uVar5 * 0x228 + lVar1;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (uint64_t *)(lVar7 + 0x208);
      uVar5 = param_2;
      do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 3;
        *(int8_t *)((longlong)puVar2 + 0x1c) = 1;
        *(int32_t *)(puVar2 + 3) = 0;
        puVar2 = puVar2 + 0x45;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      lVar7 = param_1[1];
    }
    param_1[1] = param_2 * 0x228 + lVar7;
  }
  return;
}






// 函数: void FUN_1805aa810(int param_1,int param_2,longlong *param_3)
void FUN_1805aa810(int param_1,int param_2,longlong *param_3)

{
  uint64_t *puVar1;
  
  if (param_1 < param_2) {
    puVar1 = (uint64_t *)*param_3;
    do {
      FUN_1805a7b90(*puVar1,param_1);
      FUN_1805a7a00(*puVar1,param_1,*(int32_t *)puVar1[1],*(uint64_t *)puVar1[2],puVar1[3],
                    *(uint64_t *)puVar1[4]);
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805aa880(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0b740;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
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






// 函数: void FUN_1805aa960(uint param_1,int param_2,longlong *param_3)
void FUN_1805aa960(uint param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((int)param_1 < param_2) {
    param_3 = (longlong *)*param_3;
    uVar3 = (ulonglong)param_1;
    do {
      lVar1 = *param_3;
      lVar4 = (ulonglong)(uint)((int)uVar3 + (int)(uVar3 >> 6) * -0x40) * 100;
      FUN_1805a8580(lVar1,*(longlong *)(lVar1 + 0xb90 + (uVar3 >> 6) * 8) + lVar4,lVar4,
                    *(uint64_t *)param_3[2],*(int8_t *)(lVar1 + 0x1488),param_3[3],param_3[4],
                    *(uint64_t *)param_3[5]);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < param_2);
  }
  return;
}






// 函数: void FUN_1805aa97c(void)
void FUN_1805aa97c(void)

{
  longlong lVar1;
  uint unaff_ESI;
  longlong lVar2;
  longlong *unaff_R14;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  uint64_t uStack0000000000000038;
  int in_stack_00000058;
  
  do {
    lVar1 = *unaff_R14;
    lStack0000000000000030 = unaff_R14[4];
    lStack0000000000000028 = unaff_R14[3];
    uStack0000000000000038 = *(uint64_t *)unaff_R14[5];
    lVar2 = (ulonglong)(unaff_ESI + (unaff_ESI >> 6) * -0x40) * 100;
    FUN_1805a8580(lVar1,*(longlong *)(lVar1 + 0xb90 + (ulonglong)(unaff_ESI >> 6) * 8) + lVar2,lVar2
                  ,*(uint64_t *)unaff_R14[2],*(int8_t *)(lVar1 + 0x1488));
    unaff_ESI = unaff_ESI + 1;
  } while ((int)unaff_ESI < in_stack_00000058);
  return;
}






// 函数: void FUN_1805aaa08(void)
void FUN_1805aaa08(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805aaa10(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0b780;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (longlong)puVar3;
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

ulonglong * FUN_1805aaaf0(ulonglong *param_1,char *param_2,char *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  char *pcVar2;
  uint64_t *puVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    pcVar14 = param_2 + 0x224;
    do {
      puVar1 = (ulonglong *)(param_4 + 0x200);
      *puVar1 = 0;
      *(uint64_t *)(param_4 + 0x208) = 0;
      *(uint64_t *)(param_4 + 0x210) = 0;
      *(int32_t *)(param_4 + 0x218) = 3;
      *(int32_t *)(param_4 + 0x220) = 0;
      pcVar2 = (char *)(param_4 + 0x224);
      if (*pcVar2 == '\0') {
        *(ulonglong *)(param_4 + 0x208) = *puVar1;
        *pcVar2 = '\x01';
      }
      *(int32_t *)(param_4 + 0x220) = 0;
      *pcVar2 = *pcVar14;
      if (*pcVar14 == '\0') {
        lVar9 = (longlong)
                (int)(*(longlong *)(pcVar14 + -0x1c) - *(longlong *)(pcVar14 + -0x24) >> 3);
        FUN_1800e8140(puVar1,lVar9);
        lVar13 = 0;
        if (0 < lVar9) {
          do {
            puVar3 = (uint64_t *)(*(longlong *)(pcVar14 + -0x24) + lVar13 * 8);
            puVar11 = *(uint64_t **)(param_4 + 0x208);
            if (puVar11 < *(uint64_t **)(param_4 + 0x210)) {
              *(uint64_t **)(param_4 + 0x208) = puVar11 + 1;
              *puVar11 = *puVar3;
            }
            else {
              puVar10 = (uint64_t *)*puVar1;
              lVar7 = (longlong)puVar11 - (longlong)puVar10 >> 3;
              if (lVar7 == 0) {
                lVar7 = 1;
LAB_1805aac7b:
                puVar8 = (uint64_t *)
                         FUN_18062b420(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(param_4 + 0x218));
                puVar11 = *(uint64_t **)(param_4 + 0x208);
                puVar10 = (uint64_t *)*puVar1;
              }
              else {
                lVar7 = lVar7 * 2;
                if (lVar7 != 0) goto LAB_1805aac7b;
                puVar8 = (uint64_t *)0x0;
              }
              if (puVar10 != puVar11) {
                    // WARNING: Subroutine does not return
                memmove(puVar8,puVar10,(longlong)puVar11 - (longlong)puVar10);
              }
              *puVar8 = *puVar3;
              if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *puVar1 = (ulonglong)puVar8;
              *(uint64_t **)(param_4 + 0x208) = puVar8 + 1;
              *(uint64_t **)(param_4 + 0x210) = puVar8 + lVar7;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < lVar9);
        }
      }
      else {
        uVar4 = *(uint *)(pcVar14 + -4);
        *(uint *)(param_4 + 0x220) = uVar4;
        if (0 < (int)uVar4) {
          lVar9 = 0;
          uVar12 = (ulonglong)uVar4;
          do {
            uVar6 = param_4;
            if (*pcVar2 == '\0') {
              uVar6 = *puVar1;
            }
            pcVar5 = pcVar14 + -0x224;
            if (*pcVar14 == '\0') {
              pcVar5 = *(char **)(pcVar14 + -0x24);
            }
            *(uint64_t *)(uVar6 + lVar9) = *(uint64_t *)(pcVar5 + lVar9);
            lVar9 = lVar9 + 8;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      *param_1 = *param_1 + 0x228;
      param_4 = *param_1;
      pcVar2 = pcVar14 + 4;
      pcVar14 = pcVar14 + 0x228;
    } while (pcVar2 != param_3);
  }
  return param_1;
}






// 函数: void FUN_1805aad40(longlong param_1,float param_2,char param_3,float param_4)
void FUN_1805aad40(longlong param_1,float param_2,char param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != '\0') {
    fVar3 = 0.0;
    fVar1 = *(float *)(param_1 + 0x138);
    if (fVar1 * param_2 < 0.0) {
      fVar2 = *(float *)(param_1 + 0x34) - fVar1 * (1.0 / param_4);
      if (fVar2 <= 3.1415927) {
        if (fVar2 < -3.1415927) {
          fVar2 = fVar2 + 6.2831855;
        }
      }
      else {
        fVar2 = fVar2 + -6.2831855;
      }
      if (ABS(param_2 * param_4) <= ABS(fVar1)) {
        fVar3 = fVar1 + param_2 * param_4;
      }
      *(float *)(param_1 + 0x138) = fVar3;
      fVar2 = fVar2 + fVar3 * (1.0 / param_4);
      if (fVar2 <= 3.1415927) {
        if (fVar2 < -3.1415927) {
          fVar2 = fVar2 + 6.2831855;
        }
      }
      else {
        fVar2 = fVar2 + -6.2831855;
      }
      *(float *)(param_1 + 0x34) = fVar2;
    }
    return;
  }
  *(float *)(param_1 + 0x164) = param_2 + *(float *)(param_1 + 0x164);
  return;
}






// 函数: void FUN_1805aad53(longlong param_1,uint64_t param_2,float param_3)
void FUN_1805aad53(longlong param_1,uint64_t param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float in_XMM4_Da;
  float fVar3;
  
  fVar3 = 0.0;
  fVar1 = *(float *)(param_1 + 0x138);
  if (fVar1 * in_XMM4_Da < 0.0) {
    fVar2 = *(float *)(param_1 + 0x34) - fVar1 * (1.0 / param_3);
    if (fVar2 <= 3.1415927) {
      if (fVar2 < -3.1415927) {
        fVar2 = fVar2 + 6.2831855;
      }
    }
    else {
      fVar2 = fVar2 + -6.2831855;
    }
    if (ABS(in_XMM4_Da * param_3) <= ABS(fVar1)) {
      fVar3 = fVar1 + in_XMM4_Da * param_3;
    }
    *(float *)(param_1 + 0x138) = fVar3;
    fVar2 = fVar2 + fVar3 * (1.0 / param_3);
    if (fVar2 <= 3.1415927) {
      if (fVar2 < -3.1415927) {
        fVar2 = fVar2 + 6.2831855;
      }
    }
    else {
      fVar2 = fVar2 + -6.2831855;
    }
    *(float *)(param_1 + 0x34) = fVar2;
  }
  return;
}






// 函数: void FUN_1805aad7b(float param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1805aad7b(float param_1,uint64_t param_2,float param_3,float param_4)

{
  longlong in_RCX;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  
  param_4 = param_4 - param_1 * (1.0 / param_3);
  if (param_4 <= 3.1415927) {
    if (param_4 < -3.1415927) {
      param_4 = param_4 + 6.2831855;
    }
  }
  else {
    param_4 = param_4 + -6.2831855;
  }
  if (ABS(in_XMM4_Da * param_3) <= ABS(unaff_XMM6_Da)) {
    in_XMM5_Da = unaff_XMM6_Da + in_XMM4_Da * param_3;
  }
  *(float *)(in_RCX + 0x138) = in_XMM5_Da;
  param_4 = param_4 + in_XMM5_Da * (1.0 / param_3);
  if (param_4 <= 3.1415927) {
    if (param_4 < -3.1415927) {
      param_4 = param_4 + 6.2831855;
    }
  }
  else {
    param_4 = param_4 + -6.2831855;
  }
  *(float *)(in_RCX + 0x34) = param_4;
  return;
}






// 函数: void FUN_1805aada6(float param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1805aada6(float param_1,uint64_t param_2,float param_3,float param_4)

{
  longlong in_RCX;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  param_4 = param_4 - param_1 * (1.0 / param_3);
  if (param_4 <= 3.1415927) {
    if (param_4 < unaff_XMM9_Da) {
      param_4 = param_4 + unaff_XMM8_Da;
    }
  }
  else {
    param_4 = param_4 + unaff_XMM7_Da;
  }
  if (ABS(in_XMM4_Da * param_3) <= ABS(unaff_XMM6_Da)) {
    in_XMM5_Da = unaff_XMM6_Da + in_XMM4_Da * param_3;
  }
  *(float *)(in_RCX + 0x138) = in_XMM5_Da;
  param_4 = param_4 + in_XMM5_Da * (1.0 / param_3);
  if (param_4 <= 3.1415927) {
    if (param_4 < unaff_XMM9_Da) {
      param_4 = param_4 + unaff_XMM8_Da;
    }
  }
  else {
    param_4 = param_4 + unaff_XMM7_Da;
  }
  *(float *)(in_RCX + 0x34) = param_4;
  return;
}






// 函数: void FUN_1805aae2e(longlong param_1,uint64_t param_2,uint64_t param_3,float param_4)
void FUN_1805aae2e(longlong param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  float unaff_XMM7_Da;
  
  *(float *)(param_1 + 0x34) = param_4 + unaff_XMM7_Da;
  return;
}






// 函数: void FUN_1805aae55(void)
void FUN_1805aae55(void)

{
  return;
}






// 函数: void FUN_1805aae5f(longlong param_1)
void FUN_1805aae5f(longlong param_1)

{
  float in_XMM4_Da;
  
  *(float *)(param_1 + 0x164) = in_XMM4_Da + *(float *)(param_1 + 0x164);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




