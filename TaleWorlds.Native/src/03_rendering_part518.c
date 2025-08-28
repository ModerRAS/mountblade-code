#include "TaleWorlds.Native.Split.h"

// 03_rendering_part518.c - 4 个函数

// 函数: void FUN_180547e60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547e60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 auStackX_10 [6];
  undefined8 uVar2;
  undefined4 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  uVar2 = 0xfffffffffffffffe;
  auStackX_10[0] = param_2;
  FUN_18054a180();
  puStack_20 = &UNK_18054a5b0;
  pcStack_18 = FUN_18054a540;
  apuStack_30[0] = auStackX_10;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,uVar2);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a0) + 0x48);
    (**(code **)(*plVar1 + 0x1b0))(plVar1,auStackX_10[0]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180547f00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x260);
    if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0xa8) >> 3 & 1) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((*(int *)(param_5 + 1) == 0) && (!bVar3)) && (*(int *)(param_1 + 0x154) == 0)) &&
       ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0 ||
        (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) != 2)))) {
      FUN_180548880(param_1,*(undefined1 *)(param_1 + 0x191));
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xe0);
  uVar7 = 0;
  uVar5 = *(longlong *)(param_1 + 0xe8) - lVar6 >> 3;
  uVar9 = uVar7;
  if (uVar5 != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x1a0);
      if ((lVar1 == 0) ||
         (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != *(longlong **)(uVar7 + lVar6))) {
        (**(code **)(**(longlong **)(uVar7 + lVar6) + 0x1c8))
                  (*(longlong **)(uVar7 + lVar6),param_2,param_3,param_4,param_5);
      }
      else {
        uStack_98 = *param_5;
        uStack_90 = param_5[1];
        uStack_88 = param_5[2];
        uStack_80 = param_5[3];
        uStack_78 = param_5[4];
        uStack_70 = param_5[5];
        uStack_68 = param_5[6];
        uStack_60 = param_5[7];
        uStack_58 = param_5[8];
        uStack_50 = param_5[9];
        uStack_40 = param_5[0xb];
        uVar10 = 0;
        uStack_38 = *(undefined4 *)(param_5 + 0xc);
        uStack_34 = *(undefined4 *)((longlong)param_5 + 100);
        uStack_30 = *(undefined4 *)(param_5 + 0xd);
        uStack_2c = *(undefined4 *)((longlong)param_5 + 0x6c);
        if ((*(longlong *)(lVar1 + 0x28) != 0) &&
           (lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x260), lVar6 != 0)) {
          uVar10 = *(undefined4 *)(lVar6 + 0x180);
        }
        _uStack_48 = CONCAT44((int)((ulonglong)param_5[10] >> 0x20),uVar10);
        lVar6 = plVar2[0x65];
        (**(code **)(*plVar2 + 0x1c8))(plVar2,param_2,param_3,param_4,&uStack_98);
        cVar4 = func_0x000180282950(*(undefined8 *)(lVar1 + 0x48));
        if (cVar4 != '\0') {
          FUN_18030aab0(lVar1,param_2,param_3,param_4,uStack_78 >> 0x20 & 0xff,(undefined4)uStack_78
                        ,uStack_80._4_4_,(int)lVar6,uStack_48);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0xe0);
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar5 = (ulonglong)(int)uVar8;
      uVar9 = (ulonglong)uVar8;
    } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0xe8) - lVar6 >> 3));
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



undefined8 FUN_180547fb8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 in_R10;
  uint unaff_R14D;
  undefined8 in_stack_000000f8;
  
  uVar4 = (ulonglong)unaff_R14D;
  do {
    lVar1 = *(longlong *)(unaff_RDI + 0x1a0);
    if ((lVar1 == 0) ||
       (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != *(longlong **)(uVar4 + param_2))) {
      (**(code **)(**(longlong **)(uVar4 + param_2) + 0x1c8))
                (*(longlong **)(uVar4 + param_2),in_R10);
    }
    else {
      (**(code **)(*plVar2 + 0x1c8))(plVar2,in_R10);
      cVar3 = func_0x000180282950(*(undefined8 *)(lVar1 + 0x48));
      if (cVar3 != '\0') {
        FUN_18030aab0(lVar1,in_stack_000000f8);
      }
    }
    param_2 = *(longlong *)(unaff_RDI + 0xe0);
    unaff_R14D = unaff_R14D + 1;
    uVar4 = uVar4 + 8;
    in_R10 = in_stack_000000f8;
  } while ((ulonglong)(longlong)(int)unaff_R14D <
           (ulonglong)(*(longlong *)(unaff_RDI + 0xe8) - param_2 >> 3));
  return CONCAT71((int7)(int3)(unaff_R14D >> 8),1);
}



undefined1 FUN_18054814a(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180548160(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *plStackX_8;
  undefined8 *puStackX_10;
  undefined1 uStackX_18;
  undefined7 uStackX_19;
  longlong *plStackX_20;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong **pplStack_90;
  longlong **pplStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong **pplStack_60;
  longlong **pplStack_58;
  
  uStack_80 = 0xfffffffffffffffe;
  plVar6 = (longlong *)0x0;
  puStackX_10 = param_2;
  FUN_1802759e0(*(undefined8 *)(param_1 + 0x110),&plStack_98);
  bVar8 = *(longlong *)(param_1 + 0x108) == 0;
  if (bVar8) {
    plStackX_8 = (longlong *)0x0;
    pplVar2 = &plStackX_8;
    plVar7 = plVar6;
  }
  else {
    pplVar2 = (longlong **)FUN_1802759e0(*(longlong *)(param_1 + 0x108),&uStackX_18);
    plVar7 = *pplVar2;
  }
  *pplVar2 = (longlong *)0x0;
  plStack_78 = plVar7;
  if ((bVar8) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((!bVar8) && ((longlong *)CONCAT71(uStackX_19,uStackX_18) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT71(uStackX_19,uStackX_18) + 0x38))();
  }
  bVar8 = *(longlong *)(param_1 + 0x100) == 0;
  if (bVar8) {
    plStackX_8 = (longlong *)0x0;
    pplVar2 = &plStackX_8;
    plVar5 = plVar6;
  }
  else {
    pplVar2 = (longlong **)FUN_1802759e0(*(longlong *)(param_1 + 0x100),&pplStack_90);
    plVar5 = *pplVar2;
  }
  *pplVar2 = (longlong *)0x0;
  plStack_70 = plVar5;
  if ((bVar8) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((!bVar8) && (pplStack_90 != (longlong **)0x0)) {
    (*(code *)(*pplStack_90)[7])();
  }
  bVar8 = *(longlong *)(param_1 + 0x118) == 0;
  if (bVar8) {
    plStackX_8 = (longlong *)0x0;
    pplVar2 = &plStackX_8;
  }
  else {
    pplVar2 = (longlong **)FUN_1802759e0(*(longlong *)(param_1 + 0x118),&pplStack_88);
    plVar6 = *pplVar2;
  }
  *pplVar2 = (longlong *)0x0;
  plStack_68 = plVar6;
  if ((bVar8) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((!bVar8) && (pplStack_88 != (longlong **)0x0)) {
    (*(code *)(*pplStack_88)[7])();
  }
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x1a8,8,0x12);
  plStackX_8 = (longlong *)CONCAT71(plStackX_8._1_7_,*(undefined1 *)(param_1 + 0x191));
  uStackX_18 = *(undefined1 *)(param_1 + 0x192);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  pplStack_88 = &plStackX_20;
  plStackX_20 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  pplStack_90 = &plStack_b0;
  plStack_b0 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x28))();
  }
  pplStack_60 = &plStack_a8;
  plStack_a8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  pplStack_58 = &plStack_a0;
  plStack_a0 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar4 = (longlong *)
           FUN_180546fa0(uVar3,&plStack_a0,&plStack_a8,&plStack_b0,&plStackX_20,uVar1,uStackX_18,
                         plStackX_8._0_1_);
  plStackX_8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  *param_2 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180548460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180548460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  ulonglong uStack_30;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  plStack_50 = *(longlong **)(param_1 + 0x100);
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x28))();
  }
  plStack_48 = *(longlong **)(param_1 + 0x108);
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x28))();
  }
  plStack_40 = *(longlong **)(param_1 + 0x110);
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x28))();
  }
  plStack_38 = *(longlong **)(param_1 + 0x118);
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x28))();
  }
  uVar7 = 0;
  if (((plStack_50 != (longlong *)0x0) && (param_2 != 0)) && (0 < (int)plStack_50[0xb])) {
    plVar6 = (longlong *)plStack_50[7];
    uVar1 = *(undefined1 *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_2 + 0x40);
    lVar12 = *(longlong *)(param_2 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(undefined1 *)(*(longlong *)(uVar9 + *(longlong *)(param_2 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_2 + 0x40);
        lVar12 = *(longlong *)(param_2 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_50[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_2 + 0x38));
        uVar3 = *(undefined4 *)(lVar2 + 0x1a4);
        uVar4 = *(undefined4 *)(lVar2 + 0x1a8);
        uVar5 = *(undefined4 *)(lVar2 + 0x1ac);
        *(undefined4 *)(lVar8 + 0x1a0) = *(undefined4 *)(lVar2 + 0x1a0);
        *(undefined4 *)(lVar8 + 0x1a4) = uVar3;
        *(undefined4 *)(lVar8 + 0x1a8) = uVar4;
        *(undefined4 *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 4));
    }
  }
  if (((plStack_48 != (longlong *)0x0) && (param_3 != 0)) && (0 < (int)plStack_48[0xb])) {
    plVar6 = (longlong *)plStack_48[7];
    uVar1 = *(undefined1 *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_3 + 0x40);
    lVar12 = *(longlong *)(param_3 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(undefined1 *)(*(longlong *)(uVar9 + *(longlong *)(param_3 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_3 + 0x40);
        lVar12 = *(longlong *)(param_3 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_48[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_3 + 0x38));
        uVar3 = *(undefined4 *)(lVar2 + 0x1a4);
        uVar4 = *(undefined4 *)(lVar2 + 0x1a8);
        uVar5 = *(undefined4 *)(lVar2 + 0x1ac);
        *(undefined4 *)(lVar8 + 0x1a0) = *(undefined4 *)(lVar2 + 0x1a0);
        *(undefined4 *)(lVar8 + 0x1a4) = uVar3;
        *(undefined4 *)(lVar8 + 0x1a8) = uVar4;
        *(undefined4 *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_3 + 0x40) - *(longlong *)(param_3 + 0x38) >> 4));
    }
  }
  if (((plStack_40 != (longlong *)0x0) && (param_4 != 0)) && (0 < (int)plStack_40[0xb])) {
    plVar6 = (longlong *)plStack_40[7];
    uVar1 = *(undefined1 *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_4 + 0x40);
    lVar12 = *(longlong *)(param_4 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(undefined1 *)(*(longlong *)(uVar9 + *(longlong *)(param_4 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_4 + 0x40);
        lVar12 = *(longlong *)(param_4 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_40[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_4 + 0x38));
        uVar3 = *(undefined4 *)(lVar2 + 0x1a4);
        uVar4 = *(undefined4 *)(lVar2 + 0x1a8);
        uVar5 = *(undefined4 *)(lVar2 + 0x1ac);
        *(undefined4 *)(lVar8 + 0x1a0) = *(undefined4 *)(lVar2 + 0x1a0);
        *(undefined4 *)(lVar8 + 0x1a4) = uVar3;
        *(undefined4 *)(lVar8 + 0x1a8) = uVar4;
        *(undefined4 *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_4 + 0x40) - *(longlong *)(param_4 + 0x38) >> 4));
    }
  }
  if (((plStack_38 != (longlong *)0x0) && (param_5 != 0)) && (0 < (int)plStack_38[0xb])) {
    plVar6 = (longlong *)plStack_38[7];
    uVar1 = *(undefined1 *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_5 + 0x40);
    lVar12 = *(longlong *)(param_5 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(undefined1 *)(*(longlong *)(uVar9 + *(longlong *)(param_5 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_5 + 0x40);
        lVar12 = *(longlong *)(param_5 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_38[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_5 + 0x38));
        uVar3 = *(undefined4 *)(lVar2 + 0x1a4);
        uVar4 = *(undefined4 *)(lVar2 + 0x1a8);
        uVar5 = *(undefined4 *)(lVar2 + 0x1ac);
        *(undefined4 *)(lVar8 + 0x1a0) = *(undefined4 *)(lVar2 + 0x1a0);
        *(undefined4 *)(lVar8 + 0x1a4) = uVar3;
        *(undefined4 *)(lVar8 + 0x1a8) = uVar4;
        *(undefined4 *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar11;
        uVar9 = uVar9 + 0x10;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_5 + 0x40) - *(longlong *)(param_5 + 0x38) >> 4));
    }
  }
  FUN_1808fc8a8(&plStack_50,8,4,FUN_180045af0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180548880(longlong ******param_1,undefined1 param_2)
void FUN_180548880(longlong ******param_1,undefined1 param_2)

{
  undefined1 uVar1;
  longlong ***ppplVar2;
  undefined8 uVar3;
  longlong *******ppppppplVar4;
  ulonglong uVar5;
  longlong *******ppppppplVar6;
  longlong *******ppppppplVar7;
  longlong *******ppppppplVar8;
  longlong ******pppppplStackX_8;
  longlong ******pppppplStackX_18;
  longlong ******pppppplStackX_20;
  longlong ******pppppplStack_88;
  longlong ******pppppplStack_80;
  longlong ******pppppplStack_78;
  longlong ******pppppplStack_70;
  longlong ******pppppplStack_68;
  longlong ******pppppplStack_60;
  longlong ******pppppplStack_58;
  longlong ******pppppplStack_50;
  longlong ******pppppplStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  *(undefined4 *)((longlong)param_1 + 0x154) = 1;
  ppppppplVar6 = (longlong *******)0x0;
  pppppplStack_80 = (longlong ******)0x0;
  pppppplStack_68 = (longlong ******)0x0;
  pppppplStack_70 = (longlong ******)0x0;
  pppppplStack_78 = (longlong ******)0x0;
  if ((*(char *)((longlong)param_1 + 0x192) == '\0') && (*(char *)(param_1 + 0x32) == '\0')) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    FUN_180049550(param_1 + 6,0);
    ppppppplVar4 = (longlong *******)FUN_18062b1e0(_DAT_180c8ed18,0x118,8,3);
    pppppplStackX_8 =
         (longlong ******)CONCAT71(pppppplStackX_8._1_7_,param_1[0x1b] != (longlong *****)0x0);
    pppppplStackX_18 =
         (longlong ******)
         CONCAT71(pppppplStackX_18._1_7_,*(undefined1 *)((longlong)param_1 + 0x192));
    pppppplStack_50 = (longlong ******)param_1[0x31];
    pppppplStack_88 =
         (longlong ******)CONCAT44(pppppplStack_88._4_4_,*(undefined4 *)(param_1 + 0x2f));
    pppppplStackX_20 =
         (longlong ******)
         CONCAT44(pppppplStackX_20._4_4_,*(undefined4 *)((longlong)param_1 + 0x174));
    pppppplStack_58 = (longlong ******)param_1[0x30];
    pppppplStack_48 = (longlong ******)ppppppplVar4;
    FUN_180049830(ppppppplVar4);
    *ppppppplVar4 = (longlong ******)&UNK_180a37f48;
    ppppppplVar4[0x1c] = (longlong ******)0x0;
    ppppppplVar4[0x1d] = (longlong ******)0x0;
    ppppppplVar4[0x1e] = (longlong ******)0x0;
    ppppppplVar4[0x1f] = (longlong ******)0x0;
    ppppppplVar4[0x20] = (longlong ******)0x0;
    pppppplStack_60 = param_1;
    (*(code *)(*param_1)[5])(param_1);
    pppppplStack_60 = ppppppplVar4[0x20];
    ppppppplVar4[0x20] = param_1;
    if ((longlong *******)pppppplStack_60 != (longlong *******)0x0) {
      (*(code *)(*pppppplStack_60)[7])();
    }
    ppppppplVar4[0x19] = pppppplStack_58;
    *(undefined4 *)(ppppppplVar4 + 0x1a) = pppppplStackX_20._0_4_;
    *(undefined4 *)((longlong)ppppppplVar4 + 0xd4) = pppppplStack_88._0_4_;
    ppppppplVar4[0x1b] = pppppplStack_50;
    *(undefined1 *)(ppppppplVar4 + 0x22) = param_2;
    ppppppplVar4[0x21] = param_1 + 6;
    *(undefined2 *)(ppppppplVar4 + 0x18) = 1;
    ppppppplVar4[3] = (longlong ******)0xfffffffffffffffc;
    *(undefined1 *)((longlong)ppppppplVar4 + 0x112) = pppppplStackX_8._0_1_;
    *(undefined1 *)((longlong)ppppppplVar4 + 0x111) = pppppplStackX_18._0_1_;
    FUN_180056f10(param_1 + 0x33,ppppppplVar4);
    uVar3 = _DAT_180c82868;
    pppppplStackX_18 = (longlong ******)&pppppplStackX_8;
    pppppplStackX_8 = (longlong ******)param_1[0x33];
    if ((longlong *******)pppppplStackX_8 != (longlong *******)0x0) {
      (*(code *)(*pppppplStackX_8)[5])();
    }
    FUN_18005e450(uVar3,&pppppplStackX_8);
    ppppppplVar7 = ppppppplVar6;
    ppppppplVar8 = ppppppplVar6;
    ppppppplVar4 = ppppppplVar6;
  }
  else {
    ppppppplVar4 = &pppppplStack_80;
    FUN_1804bb5b0(0x180c95de0,ppppppplVar4,&pppppplStack_68,&pppppplStack_70,&pppppplStack_78);
    ppppppplVar6 = (longlong *******)pppppplStack_80;
    uVar5 = (ulonglong)ppppppplVar4 & 0xffffffffffffff00;
    if ((param_1[0x20] != (longlong *****)0x0) &&
       (ppplVar2 = *param_1[0x20][7], ppplVar2 != (longlong ***)0x0)) {
      uVar5 = (ulonglong)*(byte *)(ppplVar2 + 0x1f);
    }
    func_0x0001802827f0(pppppplStack_80,uVar5);
    ppppppplVar8 = (longlong *******)pppppplStack_68;
    ppppppplVar7 = (longlong *******)pppppplStack_70;
    ppppppplVar4 = (longlong *******)pppppplStack_78;
    FUN_180548460(param_1,ppppppplVar6,pppppplStack_68,pppppplStack_70,pppppplStack_78);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x192);
    pppppplStack_48 = (longlong ******)&pppppplStackX_8;
    pppppplStackX_8 = (longlong ******)ppppppplVar4;
    if (ppppppplVar4 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar4)[5])(ppppppplVar4);
    }
    pppppplStack_50 = (longlong ******)&pppppplStackX_18;
    pppppplStackX_18 = (longlong ******)ppppppplVar7;
    if (ppppppplVar7 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar7)[5])(ppppppplVar7);
    }
    pppppplStack_58 = (longlong ******)&pppppplStackX_20;
    pppppplStackX_20 = (longlong ******)ppppppplVar8;
    if (ppppppplVar8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar8)[5])(ppppppplVar8);
    }
    pppppplStack_60 = (longlong ******)&pppppplStack_88;
    pppppplStack_88 = (longlong ******)ppppppplVar6;
    if (ppppppplVar6 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar6)[5])(ppppppplVar6);
    }
    FUN_180548ce0(param_1,&pppppplStack_88,&pppppplStackX_20,&pppppplStackX_18,&pppppplStackX_8,
                  param_2,uVar1);
  }
  if (ppppppplVar4 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar4)[7])(ppppppplVar4);
  }
  if (ppppppplVar7 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar7)[7])(ppppppplVar7);
  }
  if (ppppppplVar8 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar8)[7])(ppppppplVar8);
  }
  if (ppppppplVar6 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar6)[7])(ppppppplVar6);
  }
  return;
}





// 函数: void FUN_180548c10(longlong *param_1,longlong *param_2)
void FUN_180548c10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 auStackX_8 [2];
  
  if (param_1 != (longlong *)0x0) {
    lVar9 = param_1[7];
    uVar6 = 0;
    uVar8 = uVar6;
    if (param_1[8] - lVar9 >> 4 != 0) {
      do {
        lVar1 = *(longlong *)(uVar6 + param_2[7]);
        if (lVar1 != 0) {
          uVar5 = *(undefined8 *)(*(longlong *)(uVar6 + lVar9) + 0x240);
          *(undefined8 *)(lVar1 + 0x238) = *(undefined8 *)(*(longlong *)(uVar6 + lVar9) + 0x238);
          *(undefined8 *)(lVar1 + 0x240) = uVar5;
          lVar9 = *(longlong *)(uVar6 + param_1[7]);
          uVar2 = *(undefined4 *)(lVar9 + 0x24c);
          uVar3 = *(undefined4 *)(lVar9 + 0x250);
          uVar4 = *(undefined4 *)(lVar9 + 0x254);
          lVar1 = *(longlong *)(param_2[7] + uVar6);
          *(undefined4 *)(lVar1 + 0x248) = *(undefined4 *)(lVar9 + 0x248);
          *(undefined4 *)(lVar1 + 0x24c) = uVar2;
          *(undefined4 *)(lVar1 + 0x250) = uVar3;
          *(undefined4 *)(lVar1 + 0x254) = uVar4;
        }
        lVar9 = param_1[7];
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 0x10;
        uVar8 = (ulonglong)uVar7;
      } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[8] - lVar9 >> 4));
    }
    (**(code **)(*param_1 + 0x1e0))(param_1,0);
    auStackX_8[0] = (undefined4)param_1[0x42];
    (**(code **)(*param_2 + 0x128))(param_2,auStackX_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



