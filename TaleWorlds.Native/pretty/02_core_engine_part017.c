#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part017.c - 33 个函数

// 函数: void FUN_180057f30(longlong *param_1)
void FUN_180057f30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  
  FUN_180057110();
  lVar1 = *param_1;
  *param_1 = 0;
  lVar2 = param_1[1];
  param_1[1] = 0;
  lVar3 = param_1[2];
  param_1[2] = 0;
  lVar6 = param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  puVar4 = (uint64_t *)*param_1;
  *param_1 = lVar1;
  puVar5 = (uint64_t *)param_1[1];
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  *(int *)(param_1 + 3) = (int)lVar6;
  for (puVar7 = puVar4; puVar7 != puVar5; puVar7 = puVar7 + 4) {
    (**(code **)*puVar7)(puVar7,0);
  }
  if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  return;
}





// 函数: void FUN_180058000(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058000(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180058020(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058020(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}



uint64_t * FUN_180058080(uint64_t *param_1,uint64_t *param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar7 = (uint64_t *)param_1[2];
    puVar10 = param_1;
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar8 = (uint64_t *)puVar7[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar7 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_3 + 8);
          lVar6 = puVar7[5] - (longlong)pbVar3;
          do {
            uVar4 = (uint)pbVar3[lVar6];
            iVar5 = *pbVar3 - uVar4;
            if (*pbVar3 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          bVar2 = 0 < iVar5;
          if (iVar5 < 1) {
            puVar8 = (uint64_t *)puVar7[1];
            goto LAB_1800580f9;
          }
        }
        puVar8 = (uint64_t *)*puVar7;
      }
LAB_1800580f9:
      puVar9 = puVar7;
      if (bVar2) {
        puVar9 = puVar10;
      }
      puVar7 = puVar8;
      puVar10 = puVar9;
    } while (puVar8 != (uint64_t *)0x0);
    if (puVar9 != param_1) {
      if (*(int *)(puVar9 + 6) == 0) {
LAB_180058138:
        *param_2 = puVar9;
        return param_2;
      }
      if (*(int *)(param_3 + 0x10) != 0) {
        pbVar3 = (byte *)puVar9[5];
        lVar6 = *(longlong *)(param_3 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar6];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_180058138;
      }
    }
  }
  *param_2 = param_1;
  return param_2;
}





// 函数: void FUN_180058160(ulonglong *param_1)
void FUN_180058160(ulonglong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  param_1[1] = *param_1;
  uVar7 = *param_1;
  *param_1 = 0;
  uVar2 = param_1[1];
  param_1[1] = 0;
  uVar3 = param_1[2];
  param_1[2] = 0;
  uVar5 = param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  puVar4 = (uint64_t *)*param_1;
  *param_1 = uVar7;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *(int *)(param_1 + 3) = (int)uVar5;
  if (puVar4 == (uint64_t *)0x0) {
    return;
  }
  uVar7 = (ulonglong)puVar4 & 0xffffffffffc00000;
  if (uVar7 != 0) {
    lVar6 = uVar7 + 0x80 + ((longlong)puVar4 - uVar7 >> 0x10) * 0x50;
    lVar6 = lVar6 - (ulonglong)*(uint *)(lVar6 + 4);
    if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar6 + 0xe) == '\0')) {
      *puVar4 = *(uint64_t *)(lVar6 + 0x20);
      *(uint64_t **)(lVar6 + 0x20) = puVar4;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar7,CONCAT71(0xff000000,*(void ***)(uVar7 + 0x70) == &ExceptionList),
                          puVar4,uVar7,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180058210(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058210(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_180058210(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((longlong *)param_2[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x17] + 0x38))();
    }
    param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





// 函数: void FUN_1800582b0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800582b0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1800582b0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_180058db0(param_2 + 8);
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180058370(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058370(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180058370(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180058420(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058420(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180058420(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800584e0(uint64_t *param_1,longlong param_2)
void FUN_1800584e0(uint64_t *param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar5 = ((longlong)puVar7 - (longlong)puVar4) / 0x28;
  puVar2 = (uint64_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_18005856a;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar5 * 0x28,*(int8_t *)(param_1 + 3),puVar4,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18005856a:
  puVar3 = puVar2;
  if (puVar4 != puVar7) {
    lVar6 = (longlong)puVar2 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar3 = &system_state_ptr;
      *(uint64_t *)(lVar6 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *puVar3 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar6 + 0x10 + (longlong)puVar4) = 0;
      *(uint64_t *)(lVar6 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = *(int32_t *)(puVar4 + 1);
      *(uint64_t *)(lVar6 + (longlong)puVar4) = *puVar4;
      *(int32_t *)(lVar6 + 0x14 + (longlong)puVar4) = *(int32_t *)((longlong)puVar4 + 0x14);
      *(int32_t *)(lVar6 + 0x10 + (longlong)puVar4) = *(int32_t *)(puVar4 + 2);
      *(int32_t *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar4[2] = 0;
      *(int32_t *)(lVar6 + 0x18 + (longlong)puVar4) = *(int32_t *)(puVar4 + 3);
      puVar3 = puVar3 + 5;
      puVar1 = puVar4 + 4;
      puVar4 = puVar4 + 5;
    } while (puVar1 != puVar7);
  }
  *puVar3 = &system_state_ptr;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &system_data_buffer_ptr;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *(int32_t *)(puVar3 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar3[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((longlong)puVar3 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(puVar3 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(puVar3 + 4) = *(int32_t *)(param_2 + 0x20);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &system_data_buffer_ptr;
      if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 3) = 0;
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar3 + 5;
    param_1[2] = puVar2 + lVar5 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}





// 函数: void FUN_1800586e0(longlong param_1)
void FUN_1800586e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}





// 函数: void FUN_180058710(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058710(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180058710(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_1800587d0(uint64_t param_1,uint64_t *param_2)
void FUN_1800587d0(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*param_2);
    FUN_18005cb60(param_2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





// 函数: void FUN_1800587e2(uint64_t param_1)
void FUN_1800587e2(uint64_t param_1)

{
  uint64_t *unaff_RBX;
  
  FUN_1800587d0(param_1,*unaff_RBX);
  FUN_18005cb60();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180058826(void)
void FUN_180058826(void)

{
  return;
}





// 函数: void FUN_180058830(uint64_t param_1,longlong param_2)
void FUN_180058830(uint64_t param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_2 + 0x20) = &system_data_buffer_ptr;
  if (*(longlong *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &system_state_ptr;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800588c0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1800588c0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = param_3 - param_2 >> 5;
  if ((ulonglong)(param_1[2] - *param_1 >> 5) < uVar6) {
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 5,(char)param_1[3]);
    }
    if (param_2 != param_3) {
      lVar7 = lVar2 - param_2;
      do {
        FUN_180627ae0(lVar7 + param_2,param_2);
        param_2 = param_2 + 0x20;
      } while (param_2 != param_3);
    }
    puVar1 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar1) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar1);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    *param_1 = lVar2;
    lVar2 = uVar6 * 0x20 + lVar2;
    param_1[2] = lVar2;
    param_1[1] = lVar2;
  }
  else {
    uVar5 = param_1[1] - *param_1 >> 5;
    if (uVar5 < uVar6) {
      lVar2 = uVar5 * 0x20 + param_2;
      FUN_180059250(param_2,lVar2);
      lVar2 = FUN_180059300(lVar2,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      puVar3 = (uint64_t *)FUN_180059250(param_2,param_3);
      puVar1 = (uint64_t *)param_1[1];
      for (puVar4 = puVar3; puVar4 != puVar1; puVar4 = puVar4 + 4) {
        (**(code **)*puVar4)(puVar4,0);
      }
      param_1[1] = (longlong)puVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800588fc(longlong param_1)
void FUN_1800588fc(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong unaff_R15;
  
  if (unaff_RSI == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,unaff_RSI << 5,*(int8_t *)(param_1 + 0x18));
  }
  if (unaff_RBX != unaff_R15) {
    lVar4 = lVar2 - unaff_RBX;
    do {
      FUN_180627ae0(lVar4 + unaff_RBX,unaff_RBX);
      unaff_RBX = unaff_RBX + 0x20;
    } while (unaff_RBX != unaff_R15);
  }
  puVar1 = (uint64_t *)unaff_RDI[1];
  puVar3 = (uint64_t *)*unaff_RDI;
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
    puVar3 = (uint64_t *)*unaff_RDI;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *unaff_RDI = lVar2;
    lVar2 = unaff_RSI * 0x20 + lVar2;
    unaff_RDI[2] = lVar2;
    unaff_RDI[1] = lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}





// 函数: void FUN_18005892b(void)
void FUN_18005892b(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  uint64_t *puVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  longlong lVar3;
  longlong unaff_R15;
  
  lVar3 = unaff_R12 - unaff_RBX;
  do {
    FUN_180627ae0(lVar3 + unaff_RBX,unaff_RBX);
    unaff_RBX = unaff_RBX + 0x20;
  } while (unaff_RBX != unaff_R15);
  puVar1 = (uint64_t *)unaff_RDI[1];
  puVar2 = (uint64_t *)*unaff_RDI;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    puVar2 = (uint64_t *)*unaff_RDI;
  }
  if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  *unaff_RDI = unaff_R12;
  lVar3 = unaff_RSI * 0x20 + unaff_R12;
  unaff_RDI[2] = lVar3;
  unaff_RDI[1] = lVar3;
  return;
}





// 函数: void FUN_18005895a(void)
void FUN_18005895a(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  
  puVar2 = (uint64_t *)unaff_RDI[1];
  puVar3 = (uint64_t *)*unaff_RDI;
  if (puVar3 != puVar2) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
    puVar3 = (uint64_t *)*unaff_RDI;
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *unaff_RDI = unaff_R12;
  lVar1 = unaff_RSI * 0x20 + unaff_R12;
  unaff_RDI[2] = lVar1;
  unaff_RDI[1] = lVar1;
  return;
}





// 函数: void FUN_1800589a3(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1800589a3(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong unaff_RBX;
  uint64_t *puVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar5 = *(longlong *)(param_1 + 8) - param_3 >> 5;
  if (uVar5 < unaff_RSI) {
    FUN_180059250();
    uVar3 = FUN_180059300(uVar5 * 0x20 + unaff_RBX);
    *(uint64_t *)(unaff_RDI + 8) = uVar3;
  }
  else {
    puVar2 = (uint64_t *)FUN_180059250();
    puVar1 = *(uint64_t **)(unaff_RDI + 8);
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    *(uint64_t **)(unaff_RDI + 8) = puVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180058a20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180058a20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 == param_4) {
    return;
  }
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 3;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 3;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(system_memory_pool_ptr,uVar4 * 8,(char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
                    // WARNING: Subroutine does not return
      memmove(uVar1,lVar3,param_2 - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_3,param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 3;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -8;
    if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,uVar5 * 8);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2 - ((lVar2 + uVar5 * -8) - param_2 & 0xfffffffffffffff8),param_2);
  }
  lVar3 = param_3 + uVar4 * 8;
  if (lVar3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar3,param_4 - lVar3);
  }
  if (param_2 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + (uVar5 - uVar4) * 8,param_2,lVar2 - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(param_2 + (uVar4 - (lVar3 - param_3 >> 3)) * 8,param_3,lVar3 - param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180058a31(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180058a31(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 3;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 3;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(system_memory_pool_ptr,uVar4 * 8,(char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
                    // WARNING: Subroutine does not return
      memmove(uVar1,lVar3,param_2 - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_3,param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 3;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -8;
    if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,uVar5 * 8);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2 - ((lVar2 + uVar5 * -8) - param_2 & 0xfffffffffffffff8),param_2);
  }
  lVar3 = param_3 + uVar4 * 8;
  if (lVar3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar3,param_4 - lVar3);
  }
  if (param_2 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + (uVar5 - uVar4) * 8,param_2,lVar2 - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(param_2 + (uVar4 - (lVar3 - param_3 >> 3)) * 8,param_3,lVar3 - param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180058b3e(longlong param_1,longlong param_2)
void FUN_180058b3e(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar2;
  
  param_1 = param_1 >> 3;
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 <= (ulonglong)(param_1 + unaff_RBP)) {
    uVar2 = param_1 + unaff_RBP;
  }
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18062b420(system_memory_pool_ptr,uVar2 * 8,(char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
  }
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_2,unaff_RSI - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(uVar1);
}





// 函数: void FUN_180058bfa(void)
void FUN_180058bfa(void)

{
  return;
}





// 函数: void FUN_180058c16(void)
void FUN_180058c16(void)

{
  return;
}





// 函数: void FUN_180058c20(longlong param_1)
void FUN_180058c20(longlong param_1)

{
  FUN_1800591c0();
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}





// 函数: void FUN_180058c80(uint64_t *param_1)
void FUN_180058c80(uint64_t *param_1)

{
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x38))();
  }
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180058cc0(uint64_t *param_1)
void FUN_180058cc0(uint64_t *param_1)

{
  FUN_180058db0(param_1 + 4);
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180058d20(uint64_t *param_1)
void FUN_180058d20(uint64_t *param_1)

{
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180058d90(longlong *param_1)
void FUN_180058d90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x548) {
    FUN_1800594b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180058db0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058db0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _Mtx_destroy_in_situ();
  FUN_180058370(param_1 + 0xf0,*(uint64_t *)(param_1 + 0x100),param_3,param_4,uVar1);
  FUN_180058370(param_1 + 0xc0,*(uint64_t *)(param_1 + 0xd0));
  FUN_180058370(param_1 + 0x90,*(uint64_t *)(param_1 + 0xa0));
  FUN_1800593f0(param_1 + 0x60,*(uint64_t *)(param_1 + 0x70));
  FUN_180058710(param_1 + 0x30,*(uint64_t *)(param_1 + 0x40));
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10));
  return;
}





// 函数: void FUN_180058e60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058e60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180058e90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058e90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





