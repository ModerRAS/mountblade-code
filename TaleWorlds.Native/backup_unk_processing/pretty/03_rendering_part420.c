#include "TaleWorlds.Native.Split.h"

// 03_rendering_part420.c - 11 个函数

// 函数: void FUN_18049947f(longlong *param_1,longlong *param_2)
void FUN_18049947f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  short sVar8;
  longlong in_RAX;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint64_t *unaff_RSI;
  ulonglong uVar14;
  
  lVar12 = *param_1;
  uVar9 = in_RAX >> 2;
  *(short *)(param_1 + 2) = (short)uVar9;
  if ((short)uVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((uVar9 & 0xffff) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_18062b420(_DAT_180c8ed18,(uVar9 & 0xffff) << 4,4);
      uVar9 = (ulonglong)*(ushort *)(param_1 + 2);
    }
    uVar14 = 0;
    sVar8 = (short)uVar9;
    *param_1 = lVar10;
    uVar11 = uVar14;
    if ((uVar9 & 0xffff) != 0) {
      uVar11 = FUN_18062b420(_DAT_180c8ed18,(uVar9 & 0xffff) * 4,4);
      sVar8 = (short)param_1[2];
    }
    param_1[1] = uVar11;
    uVar9 = uVar14;
    uVar11 = uVar14;
    if (sVar8 != 0) {
      do {
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        iVar4 = *(int *)(uVar9 + *param_2);
        puVar3 = (int32_t *)(lVar12 + (longlong)iVar4 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar2 = (int32_t *)(uVar11 + *param_1);
        *puVar2 = *puVar3;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(int32_t *)(uVar9 + param_1[1]) =
             *(int32_t *)((longlong)unaff_RSI + (longlong)iVar4 * 4);
        uVar9 = uVar9 + 4;
        uVar11 = uVar11 + 0x10;
      } while ((int)uVar13 < (int)(uint)*(ushort *)(param_1 + 2));
    }
  }
  if (lVar12 == 0) {
    if (unaff_RSI == (uint64_t *)0x0) {
      return;
    }
    uVar9 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
    if (uVar9 != 0) {
      lVar12 = uVar9 + 0x80 + ((longlong)unaff_RSI - uVar9 >> 0x10) * 0x50;
      lVar12 = lVar12 - (ulonglong)*(uint *)(lVar12 + 4);
      if ((*(void ***)(uVar9 + 0x70) == &ExceptionList) && (*(char *)(lVar12 + 0xe) == '\0')) {
        *unaff_RSI = *(uint64_t *)(lVar12 + 0x20);
        *(uint64_t **)(lVar12 + 0x20) = unaff_RSI;
        piVar1 = (int *)(lVar12 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar9,CONCAT71(0xff000000,*(void ***)(uVar9 + 0x70) == &ExceptionList));
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar12);
}





// 函数: void FUN_18049957a(void)
void FUN_18049957a(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18049958c(void)
void FUN_18049958c(void)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)unaff_RSI - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *unaff_RSI = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = unaff_RSI;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList));
    }
  }
  return;
}





// 函数: void FUN_1804995f0(longlong param_1)
void FUN_1804995f0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar3 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_1800ff020();
        puVar2[4] = &UNK_18098bcb0;
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180499720(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar3 = func_0x000180499a90(param_1,*(uint64_t *)(*(longlong *)(param_1 + 8) + uVar2 * 8),
                              param_4);
  if (lVar3 == 0) {
    FUN_18066c220(param_1 + 0x20,&param_5,*(int32_t *)(param_1 + 0x10),
                  *(int32_t *)(param_1 + 0x18),1);
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0xa0,*(int8_t *)(param_1 + 0x2c));
    FUN_180627ae0(lVar3,param_4);
                    // WARNING: Subroutine does not return
    memset(lVar3 + 0x20,0,0x78);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = lVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t *
FUN_1804999e0(int8_t *param_1,int8_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 2;
  uVar1 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 4,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *(longlong *)(param_1 + 8) = lVar2;
  *(longlong *)(param_1 + 0x10) = lVar2;
  *(longlong *)(param_1 + 0x18) = lVar2 + lVar3 * 4;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != *(longlong *)(param_2 + 0x10)) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,*(longlong *)(param_2 + 0x10) - lVar2);
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180499b00(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180499b00(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong lVar10;
  
  puVar9 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar10 = ((longlong)puVar9 - (longlong)puVar5) / 0x28;
  puVar4 = (int8_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_180499b83;
  }
  puVar4 = (int8_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x28,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar9 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_180499b83:
  puVar7 = puVar4;
  if (puVar5 != puVar9) {
    lVar8 = (longlong)puVar4 - (longlong)puVar5;
    puVar5 = puVar5 + 8;
    do {
      *puVar7 = *(int8_t *)(puVar5 + -8);
      puVar6 = (uint64_t *)((longlong)puVar5 + lVar8 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar8 + -0x10 + (longlong)puVar5) = 0;
      *(uint64_t *)(lVar8 + -8 + (longlong)puVar5) = 0;
      *(int32_t *)(lVar8 + (longlong)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar8 + -0x10 + (longlong)puVar5);
      *(uint64_t *)(lVar8 + -0x10 + (longlong)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar8 + -8 + (longlong)puVar5);
      *(uint64_t *)(lVar8 + -8 + (longlong)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar8 + (longlong)puVar5);
      *(int32_t *)(lVar8 + (longlong)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 0x28;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 10;
    } while (puVar1 != puVar9);
  }
  FUN_1804999e0(puVar7,param_2);
  lVar8 = *param_1;
  if (lVar8 != param_1[1]) {
    do {
      if (*(longlong *)(lVar8 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != param_1[1]);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar7 + 0x28);
    param_1[2] = (longlong)(puVar4 + lVar10 * 0x28);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180499ca0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_180499ca0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_3 - param_2;
  uVar3 = lVar5 / 0x28;
  lVar4 = *param_1;
  if (uVar3 <= (ulonglong)((param_1[2] - lVar4) / 0x28)) {
    uVar2 = (param_1[1] - lVar4) / 0x28;
    if (uVar2 < uVar3) {
      lVar1 = param_2 + uVar2 * 0x28;
      FUN_18049a1a0(param_2,lVar1,lVar4,lVar5,0xfffffffffffffffe);
      lVar4 = FUN_18049a030(lVar1,param_3,param_1[1]);
      param_1[1] = lVar4;
      return;
    }
    lVar5 = FUN_18049a1a0(param_2,param_3,lVar4,lVar5,0xfffffffffffffffe);
    lVar4 = lVar5;
    while( true ) {
      if (lVar4 == param_1[1]) {
        param_1[1] = lVar5;
        return;
      }
      if (*(longlong *)(lVar4 + 8) != 0) break;
      lVar4 = lVar4 + 0x28;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar3 * 0x28,(char)param_1[3]);
  }
  FUN_18049a030(param_2,param_3,lVar4);
  lVar5 = *param_1;
  if (lVar5 != param_1[1]) {
    do {
      if (*(longlong *)(lVar5 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != param_1[1]);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *param_1 = lVar4;
  lVar4 = lVar4 + uVar3 * 0x28;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  return;
}





// 函数: void FUN_180499e70(int param_1,int param_2,longlong *param_3)
void FUN_180499e70(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = (uint64_t *)*param_3;
  uVar3 = (ulonglong)param_1;
  uVar4 = uVar3;
  for (; (longlong)uVar3 < (longlong)param_2; uVar3 = uVar3 + 1) {
    lVar1 = *(longlong *)(*(longlong *)*puVar2 + 8) + (longlong)(int)uVar4 * 0x48;
    FUN_18049ac50(lVar1);
    FUN_180498590(*(uint64_t *)(*(longlong *)puVar2[1] + uVar3 * 8),lVar1,*(longlong *)puVar2[1],
                  *(int32_t *)puVar2[2],*(int32_t *)puVar2[3]);
    FUN_18049ac50(lVar1);
    FUN_180497f40(*(uint64_t *)puVar2[5],lVar1 + 0x12);
    uVar4 = (ulonglong)((int)uVar4 + 1);
  }
  return;
}





// 函数: void FUN_180499e9a(void)
void FUN_180499e9a(void)

{
  longlong lVar1;
  int unaff_EBP;
  longlong unaff_RSI;
  uint64_t *unaff_RDI;
  longlong unaff_R14;
  
  do {
    lVar1 = *(longlong *)(*(longlong *)*unaff_RDI + 8) + (longlong)unaff_EBP * 0x48;
    FUN_18049ac50(lVar1);
    FUN_180498590(*(uint64_t *)(*(longlong *)unaff_RDI[1] + unaff_RSI * 8),lVar1,
                  *(longlong *)unaff_RDI[1],*(int32_t *)unaff_RDI[2],*(int32_t *)unaff_RDI[3])
    ;
    FUN_18049ac50(lVar1);
    FUN_180497f40(*(uint64_t *)unaff_RDI[5],lVar1 + 0x12);
    unaff_EBP = unaff_EBP + 1;
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI < unaff_R14);
  return;
}





// 函数: void FUN_180499f2c(void)
void FUN_180499f2c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180499f50(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c08ce0;
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
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,system_allocation_flags,0xfffffffffffffffe);
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

int8_t *
FUN_18049a030(longlong *param_1,longlong *param_2,int8_t *param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    plVar4 = param_1 + 2;
    do {
      *param_3 = (char)plVar4[-2];
      plVar5 = (longlong *)(lVar6 + -8 + (longlong)plVar4);
      lVar3 = *plVar4 - plVar4[-1] >> 2;
      uVar1 = *(uint *)(plVar4 + 2);
      *(uint *)(lVar6 + 0x10 + (longlong)plVar4) = uVar1;
      if (lVar3 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 4,uVar1 & 0xff,param_4,uVar7);
      }
      *plVar5 = lVar2;
      *(longlong *)(lVar6 + (longlong)plVar4) = lVar2;
      *(longlong *)(lVar6 + 8 + (longlong)plVar4) = lVar2 + lVar3 * 4;
      lVar3 = *plVar5;
      lVar2 = plVar4[-1];
      if (lVar2 != *plVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar2,*plVar4 - lVar2);
      }
      *(longlong *)(lVar6 + (longlong)plVar4) = lVar3;
      param_3 = param_3 + 0x28;
      plVar5 = plVar4 + 3;
      plVar4 = plVar4 + 5;
    } while (plVar5 != param_2);
  }
  return param_3;
}





// 函数: void FUN_18049a120(uint64_t *param_1)
void FUN_18049a120(uint64_t *param_1)

{
  FUN_1800ff020();
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t * FUN_18049a1a0(longlong param_1,longlong param_2,int8_t *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  lVar8 = (param_2 - param_1) / 0x28;
  if (0 < lVar8) {
    plVar9 = (longlong *)(param_3 + 0x10);
    plVar11 = (longlong *)(param_1 + 8);
    do {
      plVar1 = plVar9 + -1;
      *param_3 = (char)plVar11[-1];
      if (plVar1 != plVar11) {
        lVar3 = plVar11[1];
        lVar4 = *plVar11;
        lVar6 = *plVar1;
        uVar10 = lVar3 - lVar4 >> 2;
        if ((ulonglong)(plVar9[1] - lVar6 >> 2) < uVar10) {
          if (uVar10 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = FUN_18062b420(_DAT_180c8ed18,uVar10 * 4,(char)plVar9[2]);
          }
          if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar4);
          }
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lVar3 = lVar6 + uVar10 * 4;
          *plVar1 = lVar6;
          *plVar9 = lVar3;
          plVar9[1] = lVar3;
        }
        else {
          lVar5 = *plVar9;
          uVar7 = lVar5 - lVar6 >> 2;
          if (uVar7 < uVar10) {
            lVar2 = uVar7 * 4 + lVar4;
            if (lVar4 != lVar2) {
                    // WARNING: Subroutine does not return
              memmove(lVar6,lVar4);
            }
            if (lVar2 != lVar3) {
                    // WARNING: Subroutine does not return
              memmove(lVar5,lVar2,lVar3 - lVar2);
            }
            *plVar9 = lVar5;
          }
          else {
            if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
              memmove(lVar6,lVar4);
            }
            *plVar9 = lVar6;
          }
        }
      }
      lVar8 = lVar8 + -1;
      param_3 = param_3 + 0x28;
      plVar11 = plVar11 + 5;
      plVar9 = plVar9 + 5;
    } while (0 < lVar8);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t * FUN_18049a1d8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint64_t unaff_RBX;
  longlong *plVar8;
  uint64_t unaff_RBP;
  ulonglong uVar9;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  int8_t *unaff_R13;
  uint64_t unaff_R14;
  longlong *plVar10;
  uint64_t unaff_R15;
  longlong in_stack_00000060;
  longlong lStack0000000000000068;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  plVar8 = (longlong *)(param_3 + 0x10);
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  plVar10 = (longlong *)(param_1 + 8);
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  do {
    plVar1 = plVar8 + -1;
    *unaff_R13 = (char)plVar10[-1];
    if (plVar1 != plVar10) {
      lVar3 = plVar10[1];
      lVar4 = *plVar10;
      lVar6 = *plVar1;
      lStack0000000000000068 = lVar3 - lVar4;
      uVar9 = lStack0000000000000068 >> 2;
      if ((ulonglong)(plVar8[1] - lVar6 >> 2) < uVar9) {
        if (uVar9 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 4,(char)plVar8[2]);
        }
        if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar4);
        }
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lVar3 = lVar6 + uVar9 * 4;
        *plVar1 = lVar6;
        *plVar8 = lVar3;
        plVar8[1] = lVar3;
        param_2 = in_stack_00000060;
      }
      else {
        lVar5 = *plVar8;
        uVar7 = lVar5 - lVar6 >> 2;
        if (uVar7 < uVar9) {
          lVar2 = uVar7 * 4 + lVar4;
          if (lVar4 != lVar2) {
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar4);
          }
          if (lVar2 != lVar3) {
                    // WARNING: Subroutine does not return
            memmove(lVar5,lVar2,lVar3 - lVar2);
          }
          *plVar8 = lVar5;
          param_2 = in_stack_00000060;
        }
        else {
          if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar4);
          }
          *plVar8 = lVar6;
        }
      }
    }
    param_2 = param_2 + -1;
    unaff_R13 = unaff_R13 + 0x28;
    plVar10 = plVar10 + 5;
    plVar8 = plVar8 + 5;
    in_stack_00000060 = param_2;
    if (param_2 < 1) {
      return unaff_R13;
    }
  } while( true );
}





// 函数: void FUN_18049a349(void)
void FUN_18049a349(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



