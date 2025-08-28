#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part267.c - 12 个函数

// 函数: void FUN_18022ec40(longlong *param_1,longlong param_2,longlong param_3)
void FUN_18022ec40(longlong *param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  uVar3 = (param_3 - param_2) / 0x58;
  if ((ulonglong)((param_1[2] - *param_1) / 0x58) < uVar3) {
    if (uVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar3 * 0x58,(char)param_1[3]);
    }
    FUN_18022efb0(param_2,param_3,lVar4);
    puVar1 = (uint64_t *)param_1[1];
    puVar6 = (uint64_t *)*param_1;
    if (puVar6 != puVar1) {
      do {
        (**(code **)*puVar6)(puVar6,0);
        puVar6 = puVar6 + 0xb;
      } while (puVar6 != puVar1);
      puVar6 = (uint64_t *)*param_1;
    }
    if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    *param_1 = lVar4;
    lVar4 = uVar3 * 0x58 + lVar4;
    param_1[2] = lVar4;
    param_1[1] = lVar4;
  }
  else {
    uVar2 = (param_1[1] - *param_1) / 0x58;
    if (uVar2 < uVar3) {
      lVar4 = uVar2 * 0x58 + param_2;
      FUN_18022ef00(param_2,lVar4);
      lVar4 = FUN_18022efb0(lVar4,param_3,param_1[1]);
      param_1[1] = lVar4;
    }
    else {
      puVar5 = (uint64_t *)FUN_18022ef00(param_2,param_3);
      puVar1 = (uint64_t *)param_1[1];
      for (puVar6 = puVar5; puVar6 != puVar1; puVar6 = puVar6 + 0xb) {
        (**(code **)*puVar6)(puVar6,0);
      }
      param_1[1] = (longlong)puVar5;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022eca5(void)
void FUN_18022eca5(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RBP * 0x58,(char)unaff_RDI[3]);
  }
  FUN_18022efb0();
  puVar1 = (uint64_t *)unaff_RDI[1];
  puVar3 = (uint64_t *)*unaff_RDI;
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 0xb;
    } while (puVar3 != puVar1);
    puVar3 = (uint64_t *)*unaff_RDI;
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *unaff_RDI = lVar2;
  lVar2 = unaff_RBP * 0x58 + lVar2;
  unaff_RDI[2] = lVar2;
  unaff_RDI[1] = lVar2;
  return;
}





// 函数: void FUN_18022ed22(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_18022ed22(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  
  lVar4 = SUB168(SEXT816(in_R10) * SEXT816(*(longlong *)(unaff_RDI + 8) - param_3),8);
  uVar5 = (lVar4 >> 4) - (lVar4 >> 0x3f);
  if (uVar5 < unaff_RBP) {
    FUN_18022ef00();
    uVar3 = FUN_18022efb0(uVar5 * 0x58 + unaff_RSI);
    *(uint64_t *)(unaff_RDI + 8) = uVar3;
  }
  else {
    puVar2 = (uint64_t *)FUN_18022ef00();
    puVar1 = *(uint64_t **)(unaff_RDI + 8);
    for (puVar6 = puVar2; puVar6 != puVar1; puVar6 = puVar6 + 0xb) {
      (**(code **)*puVar6)(puVar6,0);
    }
    *(uint64_t **)(unaff_RDI + 8) = puVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022edb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_18022edb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  bool bVar10;
  
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(param_1 + 5),param_4,0xfffffffffffffffe)
  ;
  puVar1 = (int32_t *)(lVar7 + 0x20);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *puVar1 = *param_4;
  *(int32_t *)(lVar7 + 0x24) = uVar2;
  *(int32_t *)(lVar7 + 0x28) = uVar3;
  *(int32_t *)(lVar7 + 0x2c) = uVar4;
  *(uint64_t *)(lVar7 + 0x30) = *(uint64_t *)(param_4 + 4);
  uVar9 = 0;
  *(uint64_t *)(param_4 + 4) = 0;
  bVar10 = true;
  puVar8 = (uint64_t *)param_1[2];
  puVar5 = param_1;
  while (puVar8 != (uint64_t *)0x0) {
    iVar6 = memcmp(puVar1,puVar8 + 4,0x10);
    bVar10 = iVar6 < 0;
    puVar5 = puVar8;
    if (bVar10) {
      puVar8 = (uint64_t *)puVar8[1];
    }
    else {
      puVar8 = (uint64_t *)*puVar8;
    }
  }
  puVar8 = puVar5;
  if (bVar10) {
    if (puVar5 == (uint64_t *)param_1[1]) goto LAB_18022ee7d;
    puVar8 = (uint64_t *)func_0x00018066b9a0(puVar5);
  }
  iVar6 = memcmp(puVar8 + 4,puVar1,0x10);
  if (-1 < iVar6) {
    if (*(longlong **)(lVar7 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar7);
  }
LAB_18022ee7d:
  if ((puVar5 != param_1) && (iVar6 = memcmp(puVar1,puVar5 + 4,0x10), -1 < iVar6)) {
    uVar9 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar5,param_1,uVar9);
}



longlong FUN_18022ef00(longlong param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *puVar4;
  
  lVar3 = (param_2 - param_1) / 0x58;
  if (0 < lVar3) {
    puVar1 = (uint64_t *)(param_1 + 8);
    lVar2 = lVar3 * 0x58;
    do {
      *(int32_t *)((param_3 - param_1) + 8 + (longlong)puVar1) = *(int32_t *)(puVar1 + 1);
      puVar4 = &DAT_18098bc73;
      if ((void *)*puVar1 != (void *)0x0) {
        puVar4 = (void *)*puVar1;
      }
      strcpy_s(*(uint64_t *)((param_3 - param_1) + (longlong)puVar1),0x40,puVar4);
      lVar3 = lVar3 + -1;
      puVar1 = puVar1 + 0xb;
    } while (0 < lVar3);
    return lVar2 + param_3;
  }
  return param_3;
}



longlong FUN_18022ef2c(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RDI;
  void *puVar3;
  
  puVar1 = (uint64_t *)(param_1 + 8);
  lVar2 = unaff_RDI * 0x58;
  do {
    *(int32_t *)((param_3 - param_1) + 8 + (longlong)puVar1) = *(int32_t *)(puVar1 + 1);
    puVar3 = &DAT_18098bc73;
    if ((void *)*puVar1 != (void *)0x0) {
      puVar3 = (void *)*puVar1;
    }
    strcpy_s(*(uint64_t *)((param_3 - param_1) + (longlong)puVar1),0x40,puVar3);
    unaff_RDI = unaff_RDI + -1;
    puVar1 = puVar1 + 0xb;
  } while (0 < unaff_RDI);
  return lVar2 + param_3;
}



uint64_t FUN_18022ef9b(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  return param_3;
}



uint64_t * FUN_18022efb0(longlong param_1,longlong param_2,uint64_t *param_3,uint64_t param_4)

{
  void *puVar1;
  void *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    param_1 = param_1 - (longlong)param_3;
    do {
      *param_3 = &UNK_18098bcb0;
      param_3[1] = 0;
      *(int32_t *)(param_3 + 2) = 0;
      *param_3 = &UNK_1809fcc58;
      param_3[1] = param_3 + 3;
      *(int32_t *)(param_3 + 2) = 0;
      *(int8_t *)(param_3 + 3) = 0;
      *(int32_t *)(param_3 + 2) = *(int32_t *)(param_1 + 0x10 + (longlong)param_3);
      puVar1 = *(void **)(param_1 + 8 + (longlong)param_3);
      puVar2 = &DAT_18098bc73;
      if (puVar1 != (void *)0x0) {
        puVar2 = puVar1;
      }
      strcpy_s(param_3[1],0x40,puVar2,param_4,uVar3);
      param_3 = param_3 + 0xb;
    } while (param_1 + (longlong)param_3 != param_2);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022f080(longlong param_1)
void FUN_18022f080(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  int32_t uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int8_t auStack_98 [32];
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  ulonglong *puStack_60;
  int32_t uStack_58;
  ulonglong auStack_50 [4];
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  bVar1 = false;
  uStack_78 = 0;
  *(int8_t *)(param_1 + 0x1d8) = 1;
  lVar5 = *(longlong *)(param_1 + 0x1e0);
  puVar4 = puStack_60;
  if (lVar5 != 0) {
    puStack_68 = &UNK_180a3c3e0;
    auStack_50[0] = 0;
    puStack_60 = (ulonglong *)0x0;
    uStack_58 = 0;
    puVar4 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_60 = puVar4;
    uVar3 = FUN_18064e990(puVar4);
    auStack_50[0] = CONCAT44(auStack_50[0]._4_4_,uVar3);
    *(int32_t *)puVar4 = 0x5f657375;
    *(int32_t *)((longlong)puVar4 + 4) = 0x74726976;
    *(int32_t *)(puVar4 + 1) = 0x5f6c6175;
    *(int32_t *)((longlong)puVar4 + 0xc) = 0x74786574;
    *(int32_t *)(puVar4 + 2) = 0x6e697275;
    *(int16_t *)((longlong)puVar4 + 0x14) = 0x67;
    uStack_58 = 0x15;
    bVar1 = true;
    uStack_78 = 1;
    lVar5 = FUN_180240430(lVar5,&puStack_68,0);
    if (lVar5 != 0) {
      bVar2 = true;
      goto LAB_18022f178;
    }
  }
  bVar2 = false;
LAB_18022f178:
  if (bVar1) {
    uStack_78 = 0;
    puStack_68 = &UNK_180a3c3e0;
    if (puVar4 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    puStack_60 = (ulonglong *)0x0;
    auStack_50[0] = auStack_50[0] & 0xffffffff00000000;
    puStack_68 = &UNK_18098bcb0;
  }
  if (bVar2) {
    puStack_68 = &UNK_18098bc80;
    puStack_60 = auStack_50;
    auStack_50[0] = auStack_50[0] & 0xffffffffffffff00;
    uStack_58 = 0x15;
    strcpy_s(auStack_50,0x20,&DAT_180a0e020);
    uVar6 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
    *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) & ~uVar6;
    FUN_18022dd60(param_1);
    puStack_68 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_98);
}



longlong * FUN_18022f240(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  puVar2 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((ulonglong)puVar2[4] < param_2) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar3 != param_1) && ((ulonglong)puVar3[4] <= param_2)) {
      return (longlong *)puVar3[5];
    }
  }
  plVar1 = *(longlong **)(param_2 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return plVar1;
}





// 函数: void FUN_18022f2e0(longlong *param_1,longlong *param_2,int32_t param_3)
void FUN_18022f2e0(longlong *param_1,longlong *param_2,int32_t param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[3] = (longlong)param_2;
  *(int32_t *)(param_1 + 4) = param_3;
  FUN_18007f4c0();
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[1];
  param_1[1] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int16_t *)(param_1 + 6) = 0;
  *(int8_t *)((longlong)param_1 + 0x32) = 0;
  return;
}





// 函数: void FUN_18022f390(uint64_t *param_1)
void FUN_18022f390(uint64_t *param_1)

{
  longlong *plVar1;
  
  if (param_1[1] != 0) {
    if (*(char *)((longlong)param_1 + 0x32) != '\0') {
      FUN_180075b70(*param_1);
    }
    FUN_18007f6a0(param_1 + 2);
    if (*(char *)(param_1 + 6) != '\0') {
      FUN_180079520(*param_1);
    }
    if (*(char *)((longlong)param_1 + 0x31) != '\0') {
      FUN_180079520(*param_1);
    }
    plVar1 = (longlong *)param_1[1];
    param_1[1] = 0;
    if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018022f3fd. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18022f410(longlong *param_1)
void FUN_18022f410(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_18022f390();
  }
  FUN_18007f6a0(param_1 + 2);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}





// 函数: void FUN_18022f490(uint64_t param_1,longlong param_2)
void FUN_18022f490(uint64_t param_1,longlong param_2)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *(float *)(param_2 + 0x34);
  pfVar1 = (float *)(param_2 + 0x14);
  fVar6 = *(float *)(param_2 + 0x38);
  fVar8 = *(float *)(param_2 + 0x3c);
  fVar7 = *pfVar1;
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar5 = (fVar7 * fVar8 - fVar3 * fVar10) * *(float *)(param_2 + 0x28) +
          (fVar10 * fVar6 - fVar9 * fVar8) * *(float *)(param_2 + 0x24) +
          (fVar3 * fVar9 - fVar7 * fVar6) * *(float *)(param_2 + 0x2c);
  cVar2 = fVar5 < 0.0;
  fVar4 = fVar3 * fVar7 + fVar9 * fVar6 + fVar8 * fVar10;
  fVar7 = fVar7 - fVar3 * fVar4;
  fVar10 = fVar10 - fVar8 * fVar4;
  fVar9 = fVar9 - fVar6 * fVar4;
  *pfVar1 = fVar7;
  *(float *)(param_2 + 0x18) = fVar9;
  *(float *)(param_2 + 0x1c) = fVar10;
  *(int32_t *)(param_2 + 0x20) = 0x7f7fffff;
  fVar3 = fVar10 * fVar10;
  if (fVar7 * fVar7 + fVar9 * fVar9 + fVar3 < 1e-05) {
    fVar5 = *(float *)(param_2 + 0x38) * 0.1;
    fVar7 = *(float *)(param_2 + 0x38) * 0.7 - *(float *)(param_2 + 0x3c) * 0.2;
    fVar6 = *(float *)(param_2 + 0x3c) * 0.1 - *(float *)(param_2 + 0x34) * 0.7;
    fVar10 = *(float *)(param_2 + 0x34) * 0.2 - fVar5;
    *pfVar1 = fVar7;
    *(float *)(param_2 + 0x18) = fVar6;
    *(float *)(param_2 + 0x1c) = fVar10;
    *(int32_t *)(param_2 + 0x20) = 0x7f7fffff;
    fVar3 = fVar10 * fVar10;
    if (fVar7 * fVar7 + fVar6 * fVar6 + fVar3 < 1e-05) {
      fVar7 = *(float *)(param_2 + 0x38) * 0.35 - *(float *)(param_2 + 0x3c) * 0.17;
      fVar10 = *(float *)(param_2 + 0x34) * 0.17 - *(float *)(param_2 + 0x38) * 0.73;
      *pfVar1 = fVar7;
      *(float *)(param_2 + 0x18) =
           *(float *)(param_2 + 0x3c) * 0.73 - *(float *)(param_2 + 0x34) * 0.35;
      *(float *)(param_2 + 0x1c) = fVar10;
      *(int32_t *)(param_2 + 0x20) = 0x7f7fffff;
    }
  }
  func_0x00018023a1e0(pfVar1,fVar3,cVar2,fVar5,fVar7,fVar10);
  fVar3 = *(float *)(param_2 + 0x38);
  fVar8 = fVar3 * pfVar1[2] - *(float *)(param_2 + 0x3c) * pfVar1[1];
  fVar7 = *(float *)(param_2 + 0x34) * pfVar1[1] - *pfVar1 * fVar3;
  fVar6 = *pfVar1 * *(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x34) * pfVar1[2];
  *(float *)(param_2 + 0x24) = fVar8;
  *(float *)(param_2 + 0x28) = fVar6;
  *(float *)(param_2 + 0x2c) = fVar7;
  *(int32_t *)(param_2 + 0x30) = 0x7f7fffff;
  if (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 < 1e-05) {
    fVar6 = fVar3 * 0.4 - *(float *)(param_2 + 0x3c) * 0.8;
    fVar8 = *(float *)(param_2 + 0x3c) * 0.2 - *(float *)(param_2 + 0x34) * 0.4;
    fVar10 = *(float *)(param_2 + 0x34) * 0.8 - fVar3 * 0.2;
    *pfVar1 = fVar6;
    pfVar1[1] = fVar8;
    pfVar1[2] = fVar10;
    pfVar1[3] = 3.4028235e+38;
    fVar8 = fVar8 * fVar8;
    fVar7 = fVar10 * fVar10;
    fVar9 = fVar6 * fVar6 + fVar8 + fVar7;
    if (fVar9 < 1e-05) {
      fVar6 = *(float *)(param_2 + 0x3c);
      fVar4 = *(float *)(param_2 + 0x34);
      fVar8 = *(float *)(param_2 + 0x38) * 0.39 - fVar6 * 0.67;
      fVar10 = fVar4 * 0.67 - *(float *)(param_2 + 0x38) * 0.76;
      *pfVar1 = fVar8;
      pfVar1[1] = fVar6 * 0.76 - fVar4 * 0.39;
      pfVar1[2] = fVar10;
      pfVar1[3] = 3.4028235e+38;
      fVar6 = fVar8;
    }
    func_0x00018023a1e0(fVar8,fVar7,fVar9,fVar3 * 0.2,fVar6,fVar10);
    fVar3 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar8 = pfVar1[2];
    *(float *)(param_2 + 0x24) =
         *(float *)(param_2 + 0x38) * pfVar1[2] - *(float *)(param_2 + 0x3c) * pfVar1[1];
    *(float *)(param_2 + 0x28) =
         fVar3 * *(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x34) * fVar8;
    *(float *)(param_2 + 0x2c) =
         *(float *)(param_2 + 0x34) * fVar6 - fVar3 * *(float *)(param_2 + 0x38);
    *(int32_t *)(param_2 + 0x30) = 0x7f7fffff;
  }
  if (cVar2 != '\0') {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) ^ 0x80000000;
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ 0x80000000;
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) ^ 0x80000000;
    *(int32_t *)(param_2 + 0x30) = 0x7f7fffff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022f9b0(longlong *param_1,longlong *param_2,int param_3,int param_4,float param_5)
void FUN_18022f9b0(longlong *param_1,longlong *param_2,int param_3,int param_4,float param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  longlong *aplStackX_8 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  uint64_t uVar18;
  longlong **pplVar19;
  longlong **pplVar20;
  longlong *plStack_e8;
  longlong **pplStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int *piStack_c8;
  longlong *plStack_c0;
  longlong **pplStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int *piStack_a0;
  longlong *aplStack_98 [2];
  code *pcStack_88;
  code *pcStack_80;
  uint64_t uStack_78;
  
  uStack_78 = 0xfffffffffffffffe;
  aiStackX_18[0] = param_3;
  aiStackX_20[0] = param_4;
  FUN_180234690();
  uVar7 = *(uint *)(param_1[1] + 0x10);
  uVar8 = *(uint *)(param_1[1] + 0x60);
  if ((int)uVar7 < 0xc9) {
    uVar14 = 0;
    if (0.001 <= param_5) {
      if (param_5 <= 0.999) {
        uVar11 = uVar14;
        if (uVar7 != 0) {
          do {
            lVar12 = (longlong)(int)uVar11;
            lVar9 = *(longlong *)(*param_2 + 8 + (longlong)aiStackX_20[0] * 0x50);
            fVar17 = 1.0 - param_5;
            lVar10 = *(longlong *)(*param_2 + 8 + (longlong)aiStackX_18[0] * 0x50);
            fVar4 = *(float *)(lVar9 + 4 + lVar12 * 0x10);
            fVar5 = *(float *)(lVar10 + 4 + lVar12 * 0x10);
            fVar6 = *(float *)(lVar9 + 8 + lVar12 * 0x10);
            fVar15 = *(float *)(lVar10 + 8 + lVar12 * 0x10);
            pfVar3 = (float *)(*(longlong *)(param_1[1] + 0x40) + lVar12 * 0x10);
            *pfVar3 = param_5 * *(float *)(lVar10 + lVar12 * 0x10) +
                      fVar17 * *(float *)(lVar9 + lVar12 * 0x10);
            pfVar3[1] = fVar17 * fVar4 + param_5 * fVar5;
            pfVar3[2] = fVar17 * fVar6 + param_5 * fVar15;
            pfVar3[3] = 3.4028235e+38;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
        if (uVar8 != 0) {
          do {
            lVar13 = (longlong)(int)uVar14;
            lVar9 = *(longlong *)(*param_2 + 0x30 + (longlong)aiStackX_20[0] * 0x50);
            fVar17 = 1.0 - param_5;
            lVar10 = *(longlong *)(*param_2 + 0x30 + (longlong)aiStackX_18[0] * 0x50);
            fVar4 = *(float *)(lVar9 + 4 + lVar13 * 0x10);
            fVar5 = *(float *)(lVar10 + 4 + lVar13 * 0x10);
            fVar6 = *(float *)(lVar9 + 8 + lVar13 * 0x10);
            fVar15 = *(float *)(lVar10 + 8 + lVar13 * 0x10);
            lVar12 = lVar13 * 0x5c;
            pfVar3 = (float *)(*(longlong *)(param_1[1] + 0x68) + 0x34 + lVar12);
            *pfVar3 = param_5 * *(float *)(lVar10 + lVar13 * 0x10) +
                      fVar17 * *(float *)(lVar9 + lVar13 * 0x10);
            pfVar3[1] = fVar17 * fVar4 + param_5 * fVar5;
            pfVar3[2] = fVar17 * fVar6 + param_5 * fVar15;
            pfVar3[3] = 3.4028235e+38;
            lVar9 = *(longlong *)(param_1[1] + 0x68);
            fVar4 = *(float *)(lVar9 + 0x38 + lVar12);
            fVar5 = *(float *)(lVar9 + 0x34 + lVar12);
            fVar6 = *(float *)(lVar9 + 0x3c + lVar12);
            fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
            auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            fVar17 = auVar16._0_4_;
            fVar15 = fVar17 * 0.5 * (3.0 - fVar15 * fVar17 * fVar17);
            *(float *)(lVar9 + 0x34 + lVar12) = fVar5 * fVar15;
            *(float *)(lVar9 + 0x38 + lVar12) = fVar4 * fVar15;
            *(float *)(lVar9 + 0x3c + lVar12) = fVar6 * fVar15;
            FUN_18022f490(lVar9,lVar12 + *(longlong *)(param_1[1] + 0x68));
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar8);
        }
      }
      else {
        uVar11 = uVar14;
        if (uVar7 != 0) {
          do {
            puVar1 = (uint64_t *)
                     (*(longlong *)(*param_2 + 8 + (longlong)aiStackX_18[0] * 0x50) +
                     (longlong)(int)uVar11 * 0x10);
            uVar18 = puVar1[1];
            puVar2 = (uint64_t *)(*(longlong *)(param_1[1] + 0x40) + (longlong)(int)uVar11 * 0x10)
            ;
            *puVar2 = *puVar1;
            puVar2[1] = uVar18;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
        if (uVar8 != 0) {
          do {
            puVar1 = (uint64_t *)
                     (*(longlong *)(*param_2 + 0x30 + (longlong)aiStackX_18[0] * 0x50) +
                     (longlong)(int)uVar14 * 0x10);
            uVar18 = puVar1[1];
            lVar10 = (longlong)(int)uVar14 * 0x5c;
            puVar2 = (uint64_t *)(*(longlong *)(param_1[1] + 0x68) + 0x34 + lVar10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar18;
            lVar9 = *(longlong *)(param_1[1] + 0x68);
            fVar4 = *(float *)(lVar9 + 0x38 + lVar10);
            fVar5 = *(float *)(lVar9 + 0x34 + lVar10);
            fVar6 = *(float *)(lVar9 + 0x3c + lVar10);
            fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
            auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            fVar17 = auVar16._0_4_;
            fVar15 = fVar17 * 0.5 * (3.0 - fVar15 * fVar17 * fVar17);
            *(float *)(lVar9 + 0x34 + lVar10) = fVar15 * fVar5;
            *(float *)(lVar9 + 0x38 + lVar10) = fVar15 * fVar4;
            *(float *)(lVar9 + 0x3c + lVar10) = fVar15 * fVar6;
            FUN_18022f490(lVar9,lVar10 + *(longlong *)(param_1[1] + 0x68));
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar8);
        }
      }
    }
    else {
      uVar11 = uVar14;
      if (uVar7 != 0) {
        do {
          puVar1 = (uint64_t *)
                   (*(longlong *)(*param_2 + 8 + (longlong)aiStackX_20[0] * 0x50) +
                   (longlong)(int)uVar11 * 0x10);
          uVar18 = puVar1[1];
          puVar2 = (uint64_t *)(*(longlong *)(param_1[1] + 0x40) + (longlong)(int)uVar11 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar18;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar7);
      }
      if (uVar8 != 0) {
        do {
          puVar1 = (uint64_t *)
                   (*(longlong *)(*param_2 + 0x30 + (longlong)aiStackX_20[0] * 0x50) +
                   (longlong)(int)uVar14 * 0x10);
          uVar18 = puVar1[1];
          lVar10 = (longlong)(int)uVar14 * 0x5c;
          puVar2 = (uint64_t *)(*(longlong *)(param_1[1] + 0x68) + 0x34 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar18;
          lVar9 = *(longlong *)(param_1[1] + 0x68);
          fVar4 = *(float *)(lVar9 + 0x38 + lVar10);
          fVar5 = *(float *)(lVar9 + 0x34 + lVar10);
          fVar6 = *(float *)(lVar9 + 0x3c + lVar10);
          fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
          auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar17 = auVar16._0_4_;
          fVar15 = fVar17 * 0.5 * (3.0 - fVar15 * fVar17 * fVar17);
          *(float *)(lVar9 + 0x34 + lVar10) = fVar15 * fVar5;
          *(float *)(lVar9 + 0x38 + lVar10) = fVar15 * fVar4;
          *(float *)(lVar9 + 0x3c + lVar10) = fVar15 * fVar6;
          FUN_18022f490(lVar9,lVar10 + *(longlong *)(param_1[1] + 0x68));
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar8);
      }
    }
  }
  else {
    pplVar20 = aplStack_98;
    pplStack_e0 = aplStackX_8;
    uStack_d8 = (code *)aiStackX_20;
    uStack_d0 = &param_5;
    piStack_c8 = aiStackX_18;
    pcStack_88 = FUN_180239720;
    pcStack_80 = FUN_180239610;
    aplStackX_8[0] = param_2;
    plStack_e8 = param_1;
    aplStack_98[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc);
    *aplStack_98[0] = (longlong)plStack_e8;
    aplStack_98[0][1] = (longlong)pplStack_e0;
    *(int32_t *)(aplStack_98[0] + 2) = (int32_t)uStack_d8;
    *(int32_t *)((longlong)aplStack_98[0] + 0x14) = uStack_d8._4_4_;
    *(int32_t *)(aplStack_98[0] + 3) = (int32_t)uStack_d0;
    *(int32_t *)((longlong)aplStack_98[0] + 0x1c) = uStack_d0._4_4_;
    aplStack_98[0][4] = (longlong)piStack_c8;
    pplVar19 = aplStack_98;
    uVar18 = 0xffffffffffffffff;
    FUN_18015b810((int)piStack_c8,0,uVar7,0x10,0xffffffffffffffff,pplVar19,pplVar20);
    pplStack_b8 = aplStackX_8;
    uStack_b0 = aiStackX_20;
    uStack_a8 = &param_5;
    piStack_a0 = aiStackX_18;
    uStack_d8 = FUN_180239530;
    uStack_d0 = (int32_t *)&UNK_180239520;
    plStack_c0 = param_1;
    plStack_e8 = (longlong *)
                 FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc,uVar18,pplVar19,&plStack_e8);
    *plStack_e8 = (longlong)plStack_c0;
    plStack_e8[1] = (longlong)pplStack_b8;
    *(int32_t *)(plStack_e8 + 2) = (int32_t)uStack_b0;
    *(int32_t *)((longlong)plStack_e8 + 0x14) = uStack_b0._4_4_;
    *(int32_t *)(plStack_e8 + 3) = (int32_t)uStack_a8;
    *(int32_t *)((longlong)plStack_e8 + 0x1c) = uStack_a8._4_4_;
    plStack_e8[4] = (longlong)piStack_a0;
    FUN_18015b810((int)piStack_a0,0,uVar8,0x10,0xffffffffffffffff,&plStack_e8);
  }
  *(int8_t *)(param_1 + 6) = 1;
  return;
}





// 函数: uint8_t FUN_1802092f0;
uint8_t FUN_1802092f0;
uint8_t UNK_180a2e6e8;


// 函数: uint8_t FUN_180209450;
uint8_t FUN_180209450;
uint8_t UNK_180a2e718;
uint8_t UNK_180a2e6b8;
uint8_t UNK_180a2e708;
uint8_t UNK_180a2e6a8;
uint8_t UNK_180a2e6d8;
uint8_t UNK_180a2e6c8;
uint8_t UNK_180a2e798;
uint8_t UNK_180a36858;
uint8_t UNK_180a2e788;
uint8_t UNK_180a2e7b8;
uint8_t UNK_180a2e728;
uint8_t UNK_180a2e750;
uint8_t UNK_180a2e75c;
uint8_t UNK_180a2e768;
uint8_t UNK_180a2e7a8;
uint8_t UNK_180a2e808;
uint8_t UNK_180a2e810;
uint8_t UNK_180a2e81c;
uint8_t UNK_180a2e828;
uint8_t UNK_180a2f608;
uint8_t UNK_180a2e7c8;
uint8_t UNK_180a2e7d8;
uint8_t UNK_180a2e7f8;
uint8_t UNK_180a2e7e8;
uint8_t UNK_180a2e8d0;
uint8_t UNK_180a2e830;
uint8_t UNK_180a2e850;
uint8_t UNK_180a2e870;
uint8_t UNK_180a2e890;
uint8_t UNK_180a2e8b0;
uint8_t UNK_180a2e8e0;
uint8_t UNK_180a2e900;
uint8_t UNK_180a2e990;
uint8_t UNK_180a2ea08;
uint8_t UNK_180a2e9e8;
uint8_t UNK_180a2ea30;
uint8_t UNK_180a2ea58;
uint8_t UNK_180a2eb28;
uint8_t UNK_180a2eb20;
uint8_t UNK_180a2eb70;
uint8_t UNK_180a2e958;
uint8_t UNK_180a2ea78;
uint8_t UNK_180a2ea98;
uint8_t UNK_180a2eb60;
uint8_t UNK_180a2f500;
uint8_t UNK_180a2eae0;
uint8_t UNK_180a2eaf8;
uint8_t UNK_180a2eb10;
uint8_t UNK_180a2f300;
int8_t UNK_180d48d24;
uint8_t UNK_1804c0f30;
uint8_t UNK_1804c0f40;
uint8_t UNK_180a2ebc8;
uint8_t UNK_180a2eb80;
uint8_t UNK_180a2ebd8;
uint8_t UNK_180a2ebe8;
uint8_t UNK_180a2f000;
uint8_t UNK_180a2ebb8;
uint8_t UNK_180a2ec00;
uint8_t UNK_180a2f100;
uint8_t UNK_180a2f400;
uint8_t UNK_180a2ed00;
uint8_t UNK_180a2f200;
uint8_t UNK_180a2eb90;
uint8_t UNK_180a2ee00;
uint8_t UNK_180a2ef00;
uint8_t UNK_180a2f6c8;
uint8_t UNK_180a2f6d8;
uint8_t UNK_180a2f720;
uint8_t UNK_180a2f730;
uint8_t UNK_180a2f760;
uint8_t UNK_180a2f630;
uint8_t UNK_180a2f640;
uint8_t UNK_180a2f658;
uint8_t UNK_180a2f670;
uint8_t UNK_180a2f680;
uint8_t UNK_180a2f6a0;
uint8_t UNK_180a2f6b0;
uint8_t UNK_180a12ce8;
uint8_t UNK_180a2f750;
uint8_t UNK_180a2f6f0;
uint8_t UNK_180a2f788;
uint8_t UNK_180a06403;
uint8_t UNK_180a2f7a0;
uint8_t UNK_180a2f7a8;
uint8_t UNK_180a2f7d0;
uint8_t UNK_180a2f948;
uint8_t DAT_180a2f960;
uint8_t DAT_180a2f970;
uint8_t UNK_180a2f980;
uint8_t UNK_180a2f990;
uint8_t UNK_180a2f9b0;
uint8_t UNK_180a2f9e8;
uint8_t UNK_180a0d4c8;
uint8_t UNK_180a0d4d8;
uint8_t UNK_180a2f938;


