#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part196.c - 18 个函数

// 函数: void FUN_180179f00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180179f00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180179f00(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180179f70(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180179f70(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180179f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180179f90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180179f90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180179f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180179fc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180179fc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180179f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180179ff0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180179ff0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180179f00(param_1 + 1,param_1[3],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &UNK_180a09578;
  return;
}





// 函数: void FUN_18017a030(ulonglong *param_1)
void FUN_18017a030(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18017a060(longlong param_1)
void FUN_18017a060(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



uint64_t *
FUN_18017a0a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &UNK_180a095b0;
  *param_1 = &UNK_180a095d0;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_18017a0f0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a095d0;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}





// 函数: void FUN_18017a130(uint64_t *param_1)
void FUN_18017a130(uint64_t *param_1)

{
  *param_1 = &UNK_180a095b0;
  *param_1 = &UNK_180a095d0;
  return;
}



uint64_t * FUN_18017a160(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a095f0;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}





// 函数: void FUN_18017a1a0(uint64_t *param_1)
void FUN_18017a1a0(uint64_t *param_1)

{
  *param_1 = &UNK_180a095f0;
  return;
}





// 函数: void FUN_18017a1c0(void)
void FUN_18017a1c0(void)

{
  FUN_18004b730();
  _Mtx_destroy_in_situ();
  return;
}



uint64_t * FUN_18017a200(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a09640;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}





// 函数: void FUN_18017a240(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18017a240(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18017b400(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18017a270(longlong *param_1)
void FUN_18017a270(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18017a9c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18017a290(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18017a290(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18017b400(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017a2c0(uint64_t *param_1,longlong *param_2)
void FUN_18017a2c0(uint64_t *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint uVar11;
  bool bVar12;
  int **ppiVar13;
  int **ppiVar14;
  uint uVar15;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int *piStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  code *pcStack_78;
  code *pcStack_70;
  int *apiStack_68 [2];
  code *pcStack_58;
  void *puStack_50;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  uVar10 = 1;
  puVar4 = (uint64_t *)param_1[8];
  puVar9 = param_1 + 6;
  if ((uint64_t *)param_1[8] == (uint64_t *)0x0) {
LAB_18017a342:
    puVar4 = (uint64_t *)param_1[2];
    puVar9 = param_1;
    if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
      do {
        if ((longlong *)puVar4[4] < param_2) {
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          puVar5 = (uint64_t *)puVar4[1];
          puVar9 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar9 != param_1) && ((longlong *)puVar9[4] <= param_2)) goto LAB_18017a372;
    }
    bVar12 = true;
  }
  else {
    do {
      if ((longlong *)puVar4[4] < param_2) {
        puVar5 = (uint64_t *)*puVar4;
      }
      else {
        puVar5 = (uint64_t *)puVar4[1];
        puVar9 = puVar4;
      }
      puVar4 = puVar5;
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar9 == param_1 + 6) || (param_2 < (longlong *)puVar9[4])) goto LAB_18017a342;
LAB_18017a372:
    bVar12 = false;
  }
  uVar15 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (!bVar12) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x10);
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
  plVar7 = (longlong *)FUN_18007f2f0(uVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar3 = (longlong *)param_2[0x42];
  param_2[0x42] = (longlong)plVar7;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar7 = (longlong *)param_2[0x42];
  uVar11 = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar11 = uVar15;
  }
  pcStack_58 = (code *)&UNK_1800830c0;
  puStack_50 = &UNK_1800830b0;
  pcStack_78 = (code *)&UNK_180083130;
  pcStack_70 = FUN_180083100;
  uStack_a0 = SUB84(plVar7,0);
  uStack_9c = (int32_t)((ulonglong)plVar7 >> 0x20);
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  ppiVar14 = apiStack_68;
  ppiVar13 = &piStack_88;
  apiStack_68[0] = piVar2;
  piStack_88 = piVar2;
  (**(code **)(**(longlong **)(param_2[0x15] + 0x88) + 0x70))
            (*(longlong **)(param_2[0x15] + 0x88),&system_data_c740,param_2 + 0x17,0,ppiVar13,ppiVar14)
  ;
  if (pcStack_78 != (code *)0x0) {
    (*pcStack_78)(&piStack_88,0,0);
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(apiStack_68,0,0);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  uVar11 = uVar11 | 2;
  lVar8 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(param_1 + 5));
  puVar1 = (ulonglong *)(lVar8 + 0x20);
  *puVar1 = (ulonglong)param_2;
  *(longlong **)(lVar8 + 0x28) = plVar7;
  bVar12 = true;
  puVar4 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar9 = (uint64_t *)param_1[2];
    do {
      puVar4 = puVar9;
      bVar12 = *puVar1 < (ulonglong)puVar4[4];
      if (bVar12) {
        puVar9 = (uint64_t *)puVar4[1];
      }
      else {
        puVar9 = (uint64_t *)*puVar4;
      }
    } while (puVar9 != (uint64_t *)0x0);
  }
  puVar9 = puVar4;
  if (bVar12) {
    if (puVar4 == (uint64_t *)param_1[1]) goto LAB_18017a58d;
    puVar9 = (uint64_t *)func_0x00018066b9a0(puVar4);
  }
  if (*puVar1 <= (ulonglong)puVar9[4]) {
    if (*(longlong **)(lVar8 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar8);
  }
LAB_18017a58d:
  if ((puVar4 == param_1) || (*puVar1 < (ulonglong)puVar4[4])) {
    uVar10 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar8,puVar4,param_1,uVar10,ppiVar13,ppiVar14,uVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017a600(longlong param_1,longlong *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_18017a600(longlong param_1,longlong *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t *puStackX_18;
  longlong *plStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  
  plStack_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 3;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 3;
  puStackX_18 = &uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 3;
  plVar2 = (longlong *)*param_2;
  plStackX_10 = param_2;
  if (plVar2 != (longlong *)0x0) {
    plStackX_8 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStackX_8 = plStack_a8;
  if (plStack_a8 != (longlong *)0x0) {
    lVar10 = *plStack_a8;
    plStack_a8 = plVar2;
    (**(code **)(lVar10 + 0x38))();
    plVar2 = plStack_a8;
  }
  plStack_a8 = plVar2;
  if (&uStack_a0 != param_3) {
    FUN_18017b480(&uStack_a0,*param_3,param_3[1]);
  }
  FUN_18017b240(&uStack_80,param_4);
  FUN_180150240(&uStack_60,param_5);
  uVar8 = *(ulonglong *)(param_1 + 0x68);
  lVar10 = 1;
  if (uVar8 < *(ulonglong *)(param_1 + 0x70)) {
    *(ulonglong *)(param_1 + 0x68) = uVar8 + 0x68;
    FUN_18017b070(uVar8,&plStack_a8);
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x60);
    lVar3 = (longlong)(uVar8 - lVar9) / 0x68;
    if ((lVar3 == 0) || (lVar10 = lVar3 * 2, lVar3 = 0, lVar10 != 0)) {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x68,*(int8_t *)(param_1 + 0x78));
      uVar8 = *(ulonglong *)(param_1 + 0x68);
      lVar9 = *(longlong *)(param_1 + 0x60);
    }
    FUN_18017b6e0(&plStackX_8,lVar9,uVar8,lVar3);
    plVar2 = plStackX_8;
    FUN_18017b070(plStackX_8,&plStack_a8);
    plStackX_8 = plVar2 + 0xd;
    lVar9 = *(longlong *)(param_1 + 0x68);
    lVar7 = *(longlong *)(param_1 + 0x60);
    if (lVar7 != lVar9) {
      do {
        FUN_18017a9c0(lVar7);
        lVar7 = lVar7 + 0x68;
      } while (lVar7 != lVar9);
      lVar7 = *(longlong *)(param_1 + 0x60);
    }
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar7);
    }
    *(longlong *)(param_1 + 0x60) = lVar3;
    *(longlong **)(param_1 + 0x68) = plStackX_8;
    *(longlong *)(param_1 + 0x70) = lVar10 * 0x68 + lVar3;
  }
  puVar1 = (uint64_t *)(param_1 + 0x30);
  plVar4 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_1 + 0x58));
  plVar2 = (longlong *)*plStackX_10;
  plVar4[4] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  bVar11 = true;
  puVar6 = puVar1;
  if (*(uint64_t **)(param_1 + 0x40) != (uint64_t *)0x0) {
    puVar5 = *(uint64_t **)(param_1 + 0x40);
    do {
      puVar6 = puVar5;
      bVar11 = (ulonglong)plVar4[4] < (ulonglong)puVar6[4];
      if (bVar11) {
        puVar5 = (uint64_t *)puVar6[1];
      }
      else {
        puVar5 = (uint64_t *)*puVar6;
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  puVar5 = puVar6;
  plStackX_8 = plVar4;
  if (bVar11) {
    if (puVar6 == *(uint64_t **)(param_1 + 0x38)) goto LAB_18017a85e;
    puVar5 = (uint64_t *)func_0x00018066b9a0(puVar6);
  }
  if ((ulonglong)plVar4[4] <= (ulonglong)puVar5[4]) {
    if ((longlong *)plVar4[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar4[4] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar4);
  }
LAB_18017a85e:
  if ((puVar6 == puVar1) || (lVar10 = 1, (ulonglong)plVar4[4] < (ulonglong)puVar6[4])) {
    lVar10 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(plVar4,puVar6,puVar1,lVar10);
}





// 函数: void FUN_18017a9c0(longlong *param_1)
void FUN_18017a9c0(longlong *param_1)

{
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180057830();
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017aa30(longlong param_1)
void FUN_18017aa30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  int32_t uStack_118;
  longlong *plStack_110;
  int16_t uStack_108;
  char cStack_106;
  longlong **pplStack_f8;
  int32_t uStack_f0;
  int32_t uStack_ec;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  uint uStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  uint uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  uint uStack_88;
  uint64_t uStack_78;
  longlong **pplStack_70;
  longlong **pplStack_68;
  longlong **pplStack_60;
  longlong *plStack_58;
  
  uStack_78 = 0xfffffffffffffffe;
  while (uVar4 = _DAT_180c82868, *(int *)(param_1 + 0x80) != 0) {
    lVar5 = FUN_18005e890(_DAT_180c82868);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_18005e890(uVar4);
      (**(code **)(*plVar6 + 0x20))(plVar6,0);
    }
  }
  uVar11 = 0;
  lVar5 = *(longlong *)(param_1 + 0x60);
  if ((*(longlong *)(param_1 + 0x68) - lVar5) / 0x68 != 0) {
    pplStack_70 = &plStack_e0;
    pplStack_68 = &plStack_c0;
    pplStack_60 = &plStack_a0;
    uVar12 = uVar11;
    do {
      plVar6 = (longlong *)0x0;
      plStack_e8 = *(longlong **)(uVar11 + lVar5);
      if (plStack_e8 != (longlong *)0x0) {
        (**(code **)(*plStack_e8 + 0x28))();
      }
      lVar8 = *(longlong *)(uVar11 + 0x10 + lVar5) - *(longlong *)(uVar11 + 8 + lVar5) >> 3;
      uStack_c8 = *(uint *)(uVar11 + 0x20 + lVar5);
      if (lVar8 != 0) {
        plVar6 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,uStack_c8 & 0xff);
      }
      plStack_d0 = plVar6 + lVar8;
      plVar7 = *(longlong **)(uVar11 + 0x10 + lVar5);
      plStack_e0 = plVar6;
      plStack_d8 = plVar6;
      for (plVar9 = *(longlong **)(uVar11 + 8 + lVar5); plVar9 != plVar7; plVar9 = plVar9 + 1) {
        plVar10 = (longlong *)*plVar9;
        *plVar6 = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))();
        }
        plVar6 = plVar6 + 1;
      }
      lVar8 = *(longlong *)(uVar11 + 0x30 + lVar5) - *(longlong *)(uVar11 + 0x28 + lVar5) >> 6;
      uStack_a8 = *(uint *)(uVar11 + 0x40 + lVar5);
      plStack_d8 = plVar6;
      if (lVar8 == 0) {
        plStack_c0 = (longlong *)0x0;
      }
      else {
        plStack_c0 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 << 6,uStack_a8 & 0xff);
      }
      plVar6 = (longlong *)0x0;
      plStack_b0 = plStack_c0 + lVar8 * 8;
      lVar8 = *(longlong *)(uVar11 + 0x30 + lVar5);
      lVar2 = *(longlong *)(uVar11 + 0x28 + lVar5);
      plStack_b8 = plStack_c0;
      if (lVar2 != lVar8) {
                    // WARNING: Subroutine does not return
        memmove(plStack_c0,lVar2,lVar8 - lVar2);
      }
      lVar8 = *(longlong *)(uVar11 + 0x50 + lVar5) - *(longlong *)(uVar11 + 0x48 + lVar5) >> 4;
      uStack_88 = *(uint *)(uVar11 + 0x60 + lVar5);
      plVar7 = plVar6;
      if (lVar8 != 0) {
        plVar7 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 << 4,uStack_88 & 0xff);
      }
      plVar9 = plStack_e8;
      plStack_90 = plVar7 + lVar8 * 2;
      lVar8 = *(longlong *)(uVar11 + 0x50 + lVar5);
      lVar5 = *(longlong *)(uVar11 + 0x48 + lVar5);
      plStack_a0 = plVar7;
      plStack_98 = plVar7;
      if (lVar5 != lVar8) {
                    // WARNING: Subroutine does not return
        memmove(plVar7,lVar5,lVar8 - lVar5);
      }
      plStack_58 = plStack_e8;
      if (plStack_e8 != (longlong *)0x0) {
        (**(code **)(*plStack_e8 + 0x28))(plStack_e8);
      }
      plStack_138 = (longlong *)0x0;
      plStack_130 = (longlong *)0x0;
      pplStack_f8 = &plStack_128;
      plStack_110 = (longlong *)0x0;
      plStack_120 = (longlong *)0x0;
      plStack_128._0_1_ = 0;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      plVar7 = plStack_138;
      plStack_138 = plVar9;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x38))();
      }
      plStack_120 = plVar9;
      uStack_118 = 0;
      FUN_18007f4c0(&plStack_128);
      plVar7 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x28))(plStack_110);
      }
      plVar10 = plStack_130;
      plStack_130 = plVar7;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x38))();
      }
      uStack_108 = 0;
      cStack_106 = '\0';
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      plVar7 = plVar6;
      plVar10 = plVar6;
      plVar14 = plVar6;
      if ((longlong)plStack_d8 - (longlong)plStack_e0 >> 3 != 0) {
        do {
          plVar1 = (longlong *)((longlong)plVar7 + (longlong)plStack_a0);
          pplStack_f8 = (longlong **)*plVar1;
          uStack_f0 = (int32_t)plVar1[1];
          uStack_ec = *(int32_t *)((longlong)plVar1 + 0xc);
          FUN_180235ca0(&plStack_138,*(uint64_t *)((longlong)plVar10 + (longlong)plStack_e0),
                        plStack_c0 + (longlong)plVar6 * 8,0xff,&pplStack_f8,1,0,0,1);
          uVar13 = (int)plVar14 + 1;
          plVar6 = (longlong *)(longlong)(int)uVar13;
          plVar7 = plVar7 + 2;
          plVar10 = plVar10 + 1;
          plVar14 = (longlong *)(ulonglong)uVar13;
        } while (plVar6 < (longlong *)((longlong)plStack_d8 - (longlong)plStack_e0 >> 3));
      }
      FUN_18007ea10(plVar9,1);
      if ((plStack_138 != (longlong *)0x0) && (plStack_130 != (longlong *)0x0)) {
        if (cStack_106 != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(&plStack_128);
        if ((char)uStack_108 != '\0') {
          FUN_180079520(plStack_138);
        }
        if (uStack_108._1_1_ != '\0') {
          FUN_180079520(plStack_138);
        }
        plVar6 = plStack_130;
        plStack_130 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x38))();
        }
      }
      pplStack_f8 = &plStack_128;
      FUN_18007f6a0(&plStack_128);
      if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      if (plStack_130 != (longlong *)0x0) {
        (**(code **)(*plStack_130 + 0x38))();
      }
      if (plStack_138 != (longlong *)0x0) {
        (**(code **)(*plStack_138 + 0x38))();
      }
      pplStack_f8 = &plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pplStack_f8 = &plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pplStack_f8 = &plStack_e0;
      FUN_180057830(&plStack_e0);
      if (plStack_e8 != (longlong *)0x0) {
        (**(code **)(*plStack_e8 + 0x38))();
      }
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
      uVar11 = uVar11 + 0x68;
      lVar5 = *(longlong *)(param_1 + 0x60);
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((*(longlong *)(param_1 + 0x68) - lVar5) / 0x68));
  }
  for (lVar5 = *(longlong *)(param_1 + 8); lVar5 != param_1; lVar5 = func_0x00018066bd70(lVar5)) {
    plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x20) + 0x210);
    *(uint64_t *)(*(longlong *)(lVar5 + 0x20) + 0x210) = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
  }
  puVar3 = *(uint64_t **)(param_1 + 0x10);
  if (puVar3 == (uint64_t *)0x0) {
    *(longlong *)param_1 = param_1;
    *(longlong *)(param_1 + 8) = param_1;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(int8_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    lVar5 = param_1 + 0x30;
    puVar3 = *(uint64_t **)(param_1 + 0x40);
    if (puVar3 == (uint64_t *)0x0) {
      *(longlong *)lVar5 = lVar5;
      *(longlong *)(param_1 + 0x38) = lVar5;
      *(uint64_t *)(param_1 + 0x40) = 0;
      *(int8_t *)(param_1 + 0x48) = 0;
      *(uint64_t *)(param_1 + 0x50) = 0;
      lVar5 = *(longlong *)(param_1 + 0x68);
      lVar8 = *(longlong *)(param_1 + 0x60);
      if (lVar8 == lVar5) {
        *(longlong *)(param_1 + 0x68) = lVar8;
      }
      else {
        do {
          FUN_18017a9c0(lVar8);
          lVar8 = lVar8 + 0x68;
        } while (lVar8 != lVar5);
        *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x60);
      }
      return;
    }
    FUN_18017b400(lVar5,*puVar3);
    if ((longlong *)puVar3[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[4] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  FUN_1800b9270(param_1,*puVar3);
  if ((longlong *)puVar3[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar3[5] + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18017b070(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  plVar8 = (longlong *)*param_2;
  *param_1 = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  lVar6 = param_2[2] - param_2[1] >> 3;
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) = uVar1;
  lVar5 = 0;
  lVar4 = lVar5;
  if (lVar6 != 0) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,uVar1 & 0xff,param_4,uVar9);
  }
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = lVar4 + lVar6 * 8;
  plVar8 = (longlong *)param_1[1];
  plVar2 = (longlong *)param_2[2];
  for (plVar7 = (longlong *)param_2[1]; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    plVar3 = (longlong *)*plVar7;
    *plVar8 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
    plVar8 = plVar8 + 1;
  }
  param_1[2] = (longlong)plVar8;
  lVar6 = param_2[6] - param_2[5] >> 6;
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)(param_1 + 8) = uVar1;
  lVar4 = lVar5;
  if (lVar6 != 0) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar6 << 6,uVar1 & 0xff,param_4,uVar9);
  }
  param_1[5] = lVar4;
  param_1[6] = lVar4;
  param_1[7] = lVar6 * 0x40 + lVar4;
  lVar4 = param_1[5];
  lVar6 = param_2[5];
  if (lVar6 != param_2[6]) {
                    // WARNING: Subroutine does not return
    memmove(lVar4,lVar6,param_2[6] - lVar6);
  }
  param_1[6] = lVar4;
  lVar4 = param_2[10] - param_2[9] >> 4;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1;
  if (lVar4 != 0) {
    lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar4 << 4,uVar1 & 0xff,param_4,uVar9);
  }
  param_1[9] = lVar5;
  param_1[10] = lVar5;
  param_1[0xb] = lVar4 * 0x10 + lVar5;
  lVar4 = param_1[9];
  lVar5 = param_2[9];
  if (lVar5 != param_2[10]) {
                    // WARNING: Subroutine does not return
    memmove(lVar4,lVar5,param_2[10] - lVar5);
  }
  param_1[10] = lVar4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18017b240(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar7 = lVar3 - lVar2;
    uVar5 = lVar7 >> 6;
    if ((ulonglong)(param_1[2] - lVar1 >> 6) < uVar5) {
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar5 << 6,(char)param_1[3]);
      }
      if (lVar2 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar7);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = lVar4;
      lVar4 = uVar5 * 0x40 + lVar4;
      param_1[2] = lVar4;
    }
    else {
      lVar4 = param_1[1];
      uVar6 = lVar4 - lVar1 >> 6;
      if (uVar5 <= uVar6) {
        if (lVar2 == lVar3) {
          param_1[1] = lVar1;
          return param_1;
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar7);
      }
      lVar7 = uVar6 * 0x40 + lVar2;
      if (lVar2 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2);
      }
      if (lVar7 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar7,lVar3 - lVar7);
      }
    }
    param_1[1] = lVar4;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b259(longlong param_1,longlong *param_2)
void FUN_18017b259(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong *unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar6 = lVar2 - lVar1;
  uVar4 = lVar6 >> 6;
  if ((ulonglong)(in_RAX - param_1 >> 6) < uVar4) {
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar4 << 6,(char)unaff_RBX[3]);
    }
    if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar1,lVar6);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar3;
    lVar3 = uVar4 * 0x40 + lVar3;
    unaff_RBX[2] = lVar3;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar5 = lVar3 - param_1 >> 6;
    if (uVar4 <= uVar5) {
      if (lVar1 == lVar2) {
        unaff_RBX[1] = param_1;
        return;
      }
                    // WARNING: Subroutine does not return
      memmove(param_1,lVar1,lVar6);
    }
    lVar6 = uVar5 * 0x40 + lVar1;
    if (lVar1 != lVar6) {
                    // WARNING: Subroutine does not return
      memmove(param_1,lVar1);
    }
    if (lVar6 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar6,lVar2 - lVar6);
    }
  }
  unaff_RBX[1] = lVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



