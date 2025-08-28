#include "TaleWorlds.Native.Split.h"

// 03_rendering_part089.c - 11 个函数

// 函数: void FUN_18031bc40(longlong param_1)
void FUN_18031bc40(longlong param_1)

{
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int32_t uStack_c;
  
  uStack_38 = *(uint64_t *)(param_1 + 0x74);
  uStack_30 = *(uint64_t *)(param_1 + 0x7c);
  uStack_48 = *(uint64_t *)(param_1 + 100);
  uStack_40 = *(uint64_t *)(param_1 + 0x6c);
  uStack_c = *(int32_t *)(param_1 + 0xa0);
  uStack_28 = *(uint64_t *)(param_1 + 0x84);
  uStack_20 = *(uint64_t *)(param_1 + 0x8c);
  fStack_18 = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0xe4);
  fStack_14 = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0xe8);
  fStack_10 = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xec);
  FUN_180084760(&uStack_48,param_1 + 0xa4);
  return;
}



uint64_t *
FUN_18031bcc0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &UNK_180a1acc0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031bd10(longlong *param_1,ulonglong param_2)
void FUN_18031bd10(longlong *param_1,ulonglong param_2)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  int32_t *puVar10;
  
  lVar9 = *param_1;
  if ((ulonglong)(param_1[2] - lVar9 >> 5) < param_2) {
    if (param_2 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,param_2 << 5,(char)param_1[3]);
      lVar9 = *param_1;
    }
    lVar8 = param_1[1] - lVar9 >> 5;
    puVar10 = puVar7;
    if (0 < lVar8) {
      do {
        puVar1 = (int32_t *)((lVar9 - (longlong)puVar7) + (longlong)puVar10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        lVar8 = lVar8 + -1;
        *puVar10 = *puVar1;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar2 = (uint64_t *)((lVar9 - (longlong)puVar7) + 0x10 + (longlong)puVar10);
        uVar6 = puVar2[1];
        *(uint64_t *)(puVar10 + 4) = *puVar2;
        *(uint64_t *)(puVar10 + 6) = uVar6;
        puVar10 = puVar10 + 8;
      } while (0 < lVar8);
      lVar9 = *param_1;
    }
    if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = (longlong)puVar7;
    param_1[1] = (longlong)puVar10;
    param_1[2] = (longlong)(puVar7 + param_2 * 8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031bd37(longlong param_1,longlong param_2)
void FUN_18031bd37(longlong param_1,longlong param_2)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (param_2 == 0) {
    puVar7 = (int32_t *)0x0;
  }
  else {
    puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,param_2 << 5,(char)unaff_RDI[3]);
    param_1 = *unaff_RDI;
  }
  lVar8 = unaff_RDI[1] - param_1 >> 5;
  puVar9 = puVar7;
  if (0 < lVar8) {
    do {
      puVar1 = (int32_t *)((param_1 - (longlong)puVar7) + (longlong)puVar9);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar8 = lVar8 + -1;
      *puVar9 = *puVar1;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar2 = (uint64_t *)((param_1 - (longlong)puVar7) + 0x10 + (longlong)puVar9);
      uVar6 = puVar2[1];
      *(uint64_t *)(puVar9 + 4) = *puVar2;
      *(uint64_t *)(puVar9 + 6) = uVar6;
      puVar9 = puVar9 + 8;
    } while (0 < lVar8);
    param_1 = *unaff_RDI;
  }
  if (param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = (longlong)puVar7;
  unaff_RDI[1] = (longlong)puVar9;
  unaff_RDI[2] = (longlong)(puVar7 + unaff_RSI * 8);
  return;
}





// 函数: void FUN_18031bdd4(void)
void FUN_18031bdd4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031bde0(uint64_t param_1,longlong *param_2,int param_3)
void FUN_18031bde0(uint64_t param_1,longlong *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a998;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 0x60;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,3);
  FUN_18031bf10(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18031bf10(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a1acc0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a1acc0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031c090(longlong *param_1)
void FUN_18031c090(longlong *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t extraout_XMM0_Qa;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uVar4 = 0;
  lVar3 = *param_1;
  uVar6 = uVar4;
  if (*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x10) >> 3 != 0) {
    do {
      if (*(int *)(*(longlong *)(uVar4 + *(longlong *)(lVar3 + 0x10)) + 0x4c) == 0x18) {
        puStack_40 = &UNK_180a3c3e0;
        uStack_28 = 0;
        puStack_38 = (uint64_t *)0x0;
        uStack_30 = 0;
        puStack_38 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(int8_t *)puStack_38 = 0;
        uVar1 = FUN_18064e990(puStack_38);
        uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
        *puStack_38 = 0x745f70616d766e65;
        *(int32_t *)(puStack_38 + 1) = 0x75747865;
        *(int16_t *)((longlong)puStack_38 + 0xc) = 0x6572;
        *(int8_t *)((longlong)puStack_38 + 0xe) = 0;
        uStack_30 = 0xe;
        FUN_180628040(&puStack_40,&UNK_180a1ac48,uVar6);
        uVar2 = FUN_18023a940(*(uint64_t *)
                               (*(longlong *)(uVar4 + *(longlong *)(*param_1 + 0x10)) + 0x100));
        FUN_180225ee0(extraout_XMM0_Qa,&puStack_40,4,uVar2);
        puStack_40 = &UNK_180a3c3e0;
        if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lVar3 = *param_1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x10) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031c260(uint64_t *param_1)
void FUN_18031c260(uint64_t *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0x80;
  iVar4 = -1;
  do {
    iVar3 = iVar4;
    uVar1 = uVar1 >> 1;
    iVar4 = iVar3 + 1;
  } while (uVar1 != 0);
  uVar1 = iVar3 + 2;
  iVar4 = 0;
  do {
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        FUN_18029e450(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),param_1[1],uVar2,iVar4,uVar1,*param_1
                      ,uVar2,iVar4,uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return;
}



longlong * FUN_18031c300(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  
  if (param_3 == 3) {
    return (longlong *)0x180c052a0;
  }
  if (param_3 == 4) {
    return param_1;
  }
  if (param_3 == 0) {
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[1] + 0x38))();
    }
    param_2 = (longlong *)*param_1;
  }
  else {
    if (param_3 == 1) {
      plVar1 = (longlong *)*param_2;
      *param_1 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      plVar1 = (longlong *)param_2[1];
      param_1[1] = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      return (longlong *)0x0;
    }
    if (param_3 != 2) {
      return (longlong *)0x0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x38))();
    }
    param_2 = (longlong *)*param_2;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))();
  }
  return (longlong *)0x0;
}





// 函数: void FUN_18031c410(uint64_t param_1,int32_t param_2,float *param_3,float *param_4,
void FUN_18031c410(uint64_t param_1,int32_t param_2,float *param_3,float *param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  switch(param_2) {
  default:
    fVar2 = 1.0;
    fVar1 = 0.0;
    break;
  case 1:
    fVar2 = -1.0;
    fVar1 = 0.0;
    break;
  case 2:
    fVar2 = 0.0;
    fVar1 = 1.0;
    break;
  case 3:
    fVar2 = 0.0;
    fVar1 = -1.0;
    break;
  case 4:
    fVar2 = 0.0;
    fVar1 = 0.0;
    fVar4 = 1.0;
    fVar5 = 1.0;
    fVar6 = 0.0;
    goto code_r0x00018031c488;
  case 5:
    fVar2 = 0.0;
    fVar1 = 0.0;
    fVar4 = -1.0;
    fVar5 = -1.0;
    fVar6 = 0.0;
    goto code_r0x00018031c488;
  }
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 1.0;
code_r0x00018031c488:
  *param_3 = fVar2;
  param_3[1] = fVar1;
  param_3[2] = fVar4;
  param_3[3] = 3.4028235e+38;
  fVar2 = *param_3;
  *param_4 = 0.0;
  param_4[1] = fVar5;
  param_4[2] = fVar6;
  param_4[3] = 3.4028235e+38;
  fVar6 = param_4[2] * param_3[1] - param_4[1] * param_3[2];
  fVar5 = fVar2 * param_4[1] - *param_4 * param_3[1];
  fVar4 = *param_4 * param_3[2] - fVar2 * param_4[2];
  *param_5 = fVar6;
  param_5[1] = fVar4;
  param_5[2] = fVar5;
  param_5[3] = 3.4028235e+38;
  fVar2 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  auVar3 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar1 = auVar3._0_4_;
  fVar2 = fVar1 * 0.5 * (3.0 - fVar2 * fVar1 * fVar1);
  *param_5 = fVar6 * fVar2;
  param_5[1] = fVar4 * fVar2;
  param_5[2] = fVar5 * fVar2;
  return;
}



uint64_t *
FUN_18031c5c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a1af58;
  puVar1 = param_1 + 2;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = 0;
  *(int8_t *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 3;
  *(int32_t *)((longlong)param_1 + 100) = 0x20;
  *(int32_t *)(param_1 + 0xd) = 0x20;
  param_1[0xe] = 0;
  *(int32_t *)((longlong)param_1 + 0x7c) = 200;
  *(int32_t *)(param_1 + 0x10) = 4;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(int32_t *)(param_1 + 0x42) = 0x3fc00000;
  *(int32_t *)((longlong)param_1 + 0x214) = 0x40200000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x11] = param_2;
  plVar3 = (longlong *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x45];
  param_1[0x45] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x3a];
  param_1[0x3a] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x3b];
  param_1[0x3b] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xc) = 0;
  *(int32_t *)((longlong)param_1 + 0x6c) = 0x3f000000;
  *(int32_t *)((longlong)param_1 + 0x2a4) = 0x42480000;
  *(int32_t *)((longlong)param_1 + 0x244) = 0;
  *(int32_t *)(param_1 + 0x49) = 0;
  *(int32_t *)((longlong)param_1 + 0x24c) = 0;
  *(int32_t *)(param_1 + 0x4a) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x254) = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  *(int32_t *)((longlong)param_1 + 0x25c) = 0;
  *(int32_t *)(param_1 + 0x4c) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x264) = 0;
  *(int32_t *)(param_1 + 0x4d) = 0;
  *(int32_t *)((longlong)param_1 + 0x26c) = 0;
  *(int32_t *)(param_1 + 0x4e) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x274) = 0;
  *(int32_t *)(param_1 + 0x4f) = 0;
  *(int32_t *)((longlong)param_1 + 0x27c) = 0;
  *(int32_t *)(param_1 + 0x50) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x284) = 0;
  *(int32_t *)(param_1 + 0x51) = 0;
  *(int32_t *)((longlong)param_1 + 0x28c) = 0;
  *(int32_t *)(param_1 + 0x52) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x294) = 0;
  *(int32_t *)(param_1 + 0x53) = 0;
  *(int32_t *)((longlong)param_1 + 0x29c) = 0;
  *(int32_t *)(param_1 + 0x54) = 0x7f7fffff;
  plVar2 = (longlong *)param_1[0x46];
  param_1[0x46] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,0,param_3,param_4,plVar3,plVar2);
  }
  param_1[0x79] = 0;
  *(int8_t *)(param_1 + 0x3c) = 0;
  plVar3 = (longlong *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xf) = 4;
  return param_1;
}



uint64_t FUN_18031c7e0(uint64_t param_1,ulonglong param_2)

{
  FUN_18031c820();
  if ((param_2 & 1) != 0) {
    free(param_1,0x3d0);
  }
  return param_1;
}





// 函数: void FUN_18031c820(uint64_t *param_1)
void FUN_18031c820(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &UNK_180a1af58;
  FUN_18031dfa0();
  plVar1 = (longlong *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar2 = param_1[0x79];
  if (lVar2 != 0) {
    FUN_18045fb80(lVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  param_1[0x79] = 0;
  if ((longlong *)param_1[0x46] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x46] + 0x38))();
  }
  if ((longlong *)param_1[0x45] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x45] + 0x38))();
  }
  if ((longlong *)param_1[0x3b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3b] + 0x38))();
  }
  if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3a] + 0x38))();
  }
  if ((longlong *)param_1[0x39] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x39] + 0x38))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  FUN_1800ff020();
  FUN_180179f00(param_1 + 2,param_1[4]);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031c950(void *param_1,uint64_t param_2,void *param_3)
void FUN_18031c950(void *param_1,uint64_t param_2,void *param_3)

{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  void **ppuStack_130;
  void ***pppuStack_128;
  void **ppuStack_120;
  uint64_t uStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int8_t uStack_f0;
  uint8_t uStack_ef;
  void *puStack_e8;
  void *puStack_e0;
  void *puStack_d8;
  void *puStack_d0;
  void *puStack_c8;
  void *puStack_c0;
  void *puStack_b8;
  void *puStack_b0;
  void *puStack_a8;
  void *puStack_a0;
  void *puStack_98;
  void *puStack_90;
  void *puStack_88;
  void *puStack_80;
  void *puStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  void *puStack_68;
  void *puStack_60;
  void *puStack_58;
  void *puStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  ulonglong uStack_28;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  ppuStack_138 = &puStack_108;
  puStack_108 = &UNK_1809fcc28;
  puStack_100 = &uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_70 = 0x22;
  puStack_68 = param_1;
  puStack_60 = param_3;
  ppuVar2 = (void **)FUN_18062b1e0(_DAT_180c8ed18,0x1a0,8,3);
  ppuStack_138 = ppuVar2;
  FUN_180049830(ppuVar2);
  *ppuVar2 = &UNK_180a1aec8;
  ppuStack_130 = ppuVar2 + 0x18;
  *ppuStack_130 = &UNK_18098bcb0;
  ppuVar2[0x19] = (void *)0x0;
  *(int32_t *)(ppuVar2 + 0x1a) = 0;
  *ppuStack_130 = &UNK_1809fcc28;
  ppuVar2[0x19] = (void *)(ppuVar2 + 0x1b);
  *(int32_t *)(ppuVar2 + 0x1a) = 0;
  *(int8_t *)(ppuVar2 + 0x1b) = 0;
  *ppuStack_130 = puStack_108;
  ppuVar2[0x19] = puStack_100;
  ppuVar2[0x1a] = (void *)CONCAT44(uStack_f4,uStack_f8);
  ppuVar2[0x1b] = (void *)CONCAT71(uStack_ef,uStack_f0);
  ppuVar2[0x1c] = puStack_e8;
  ppuVar2[0x1d] = puStack_e0;
  ppuVar2[0x1e] = puStack_d8;
  ppuVar2[0x1f] = puStack_d0;
  ppuVar2[0x20] = puStack_c8;
  ppuVar2[0x21] = puStack_c0;
  ppuVar2[0x22] = puStack_b8;
  ppuVar2[0x23] = puStack_b0;
  ppuVar2[0x24] = puStack_a8;
  ppuVar2[0x25] = puStack_a0;
  ppuVar2[0x26] = puStack_98;
  ppuVar2[0x27] = puStack_90;
  ppuVar2[0x28] = puStack_88;
  ppuVar2[0x29] = puStack_80;
  ppuVar2[0x2a] = puStack_78;
  ppuVar2[0x2b] = (void *)CONCAT44(uStack_6c,uStack_70);
  ppuVar2[0x2c] = puStack_68;
  ppuVar2[0x2d] = puStack_60;
  ppuVar2[0x2e] = puStack_58;
  ppuVar2[0x2f] = puStack_50;
  *(int32_t *)(ppuVar2 + 0x30) = uStack_48;
  *(int32_t *)((longlong)ppuVar2 + 0x184) = uStack_44;
  *(int32_t *)(ppuVar2 + 0x31) = uStack_40;
  *(int32_t *)((longlong)ppuVar2 + 0x18c) = uStack_3c;
  *(int32_t *)(ppuVar2 + 0x32) = uStack_38;
  *(int32_t *)((longlong)ppuVar2 + 0x194) = uStack_34;
  *(int32_t *)(ppuVar2 + 0x33) = uStack_30;
  *(int32_t *)((longlong)ppuVar2 + 0x19c) = uStack_2c;
  *(int32_t *)(ppuVar2 + 0x2b) = uStack_70;
  pppuStack_128 = (void ***)ppuStack_130;
  ppuStack_120 = ppuVar2;
  (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  uVar1 = _DAT_180c82868;
  pppuStack_128 = &ppuStack_130;
  ppuStack_130 = ppuVar2;
  (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  FUN_18005e370(uVar1,&ppuStack_130);
  uVar1 = _DAT_180c82868;
  pppuStack_128 = &ppuStack_138;
  ppuStack_138 = ppuVar2;
  (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  FUN_18005e6a0(uVar1,&ppuStack_138,0);
  (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  ppuStack_120 = &puStack_108;
  puStack_108 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031ccb0(longlong *param_1)
void FUN_18031ccb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t *apuStack_18 [2];
  
  (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1cd8) + 0x198))
            (*(longlong **)(_DAT_180c86938 + 0x1cd8),*param_1,param_1[1]);
  lVar1 = *param_1;
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  plVar3 = *(longlong **)(lVar2 + 0x8400);
  iVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,*(uint64_t *)(lVar1 + 0x10),0,1,0,apuStack_18);
  if (iVar9 < 0) {
    FUN_180220810(iVar9,&UNK_180a17358);
  }
  lVar1 = param_1[2];
  uVar8 = apuStack_18[0][1];
  *(uint64_t *)(lVar1 + 0x244) = *apuStack_18[0];
  *(uint64_t *)(lVar1 + 0x24c) = uVar8;
  lVar1 = param_1[2];
  uVar8 = apuStack_18[0][3];
  *(uint64_t *)(lVar1 + 0x254) = apuStack_18[0][2];
  *(uint64_t *)(lVar1 + 0x25c) = uVar8;
  lVar1 = param_1[2];
  uVar8 = apuStack_18[0][5];
  *(uint64_t *)(lVar1 + 0x264) = apuStack_18[0][4];
  *(uint64_t *)(lVar1 + 0x26c) = uVar8;
  lVar1 = param_1[2];
  uVar8 = apuStack_18[0][7];
  *(uint64_t *)(lVar1 + 0x274) = apuStack_18[0][6];
  *(uint64_t *)(lVar1 + 0x27c) = uVar8;
  lVar1 = param_1[2];
  uVar5 = *(int32_t *)((longlong)apuStack_18[0] + 0x44);
  uVar6 = *(int32_t *)(apuStack_18[0] + 9);
  uVar7 = *(int32_t *)((longlong)apuStack_18[0] + 0x4c);
  *(int32_t *)(lVar1 + 0x284) = *(int32_t *)(apuStack_18[0] + 8);
  *(int32_t *)(lVar1 + 0x288) = uVar5;
  *(int32_t *)(lVar1 + 0x28c) = uVar6;
  *(int32_t *)(lVar1 + 0x290) = uVar7;
  lVar1 = param_1[2];
  uVar5 = *(int32_t *)((longlong)apuStack_18[0] + 0x54);
  uVar6 = *(int32_t *)(apuStack_18[0] + 0xb);
  uVar7 = *(int32_t *)((longlong)apuStack_18[0] + 0x5c);
  *(int32_t *)(lVar1 + 0x294) = *(int32_t *)(apuStack_18[0] + 10);
  *(int32_t *)(lVar1 + 0x298) = uVar5;
  *(int32_t *)(lVar1 + 0x29c) = uVar6;
  *(int32_t *)(lVar1 + 0x2a0) = uVar7;
  lVar1 = *param_1;
  plVar3 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  pcVar4 = *(code **)(*plVar3 + 0x78);
  *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  (*pcVar4)(plVar3,*(uint64_t *)(lVar1 + 0x10),0);
  lVar1 = param_1[3];
  *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + 1;
  if (*(int *)(lVar1 + 0x4c) == 0x18) {
    *(int32_t *)(lVar1 + 0x5c) = 0xffffffff;
  }
  if (param_1 != (longlong *)0x0) {
    apuStack_18[0] = (uint64_t *)0xfffffffffffffffe;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x38))();
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[1] + 0x38))();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



