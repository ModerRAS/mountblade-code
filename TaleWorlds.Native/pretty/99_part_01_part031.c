#include "TaleWorlds.Native.Split.h"

// 99_part_01_part031.c - 3 个函数

// 函数: void FUN_1800bdfe0(void)
void FUN_1800bdfe0(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int8_t auStack_328 [32];
  longlong *aplStack_308 [2];
  void **ppuStack_2f8;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int32_t uStack_2d0;
  int32_t uStack_2cc;
  int32_t uStack_2c8;
  int32_t uStack_2c4;
  int32_t uStack_2c0;
  int8_t uStack_2bc;
  uint64_t uStack_2bb;
  int32_t uStack_2b0;
  int8_t uStack_2ac;
  longlong *plStack_2a8;
  uint64_t uStack_2a0;
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  int8_t auStack_270 [128];
  int32_t uStack_1f0;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  lVar1 = _DAT_180c86898;
  uStack_2a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_328;
  if (*(longlong *)(_DAT_180c86898 + 0xd8) == 0) {
    uStack_2d8 = 1;
    uStack_2d4 = 1;
    uStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    uStack_2c0 = 0x3f800000;
    uStack_2bb = 1;
    uStack_2bc = 0;
    uStack_2ac = 0;
    uStack_2e0 = 8;
    uStack_2dc = 8;
    uStack_2d0 = 0xc;
    uStack_2b0 = *(int32_t *)(_DAT_180c86898 + 0x468);
    puStack_c8 = &UNK_1809fcc28;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0x18;
    strcpy_s(auStack_b0,0x80,&UNK_180a03120);
    puVar2 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,aplStack_308,&puStack_c8,&uStack_2e0);
    uVar3 = *puVar2;
    *puVar2 = 0;
    plStack_2a8 = *(longlong **)(lVar1 + 0xd8);
    *(uint64_t *)(lVar1 + 0xd8) = uVar3;
    if (plStack_2a8 != (longlong *)0x0) {
      (**(code **)(*plStack_2a8 + 0x38))();
    }
    if (aplStack_308[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_308[0] + 0x38))();
    }
    puStack_c8 = &UNK_18098bcb0;
    ppuStack_2f8 = &puStack_288;
    puStack_288 = &UNK_1809fcc28;
    puStack_280 = auStack_270;
    uStack_278 = 0;
    auStack_270[0] = 0;
    uStack_1f0 = 2;
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x200,0x10,3);
                    // WARNING: Subroutine does not return
    memset(uVar3,0xff,0x200);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_328);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800be440(uint64_t param_1)

{
  uint *puVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong *plStackX_10;
  uint64_t uStack_80;
  uint64_t uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  code *pcStack_30;
  code *pcStack_28;
  
  lVar5 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0x90) == 0) {
    puVar7 = (uint64_t *)FUN_1800c1420(param_1,&plStackX_10,&UNK_180a03140,1,0xfffffffffffffffe);
    uVar2 = *puVar7;
    *puVar7 = 0;
    plVar3 = *(longlong **)(lVar5 + 0x90);
    *(uint64_t *)(lVar5 + 0x90) = uVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (plStackX_10 != (longlong *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puVar1 = (uint *)(*(longlong *)(lVar5 + 0x90) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
    uStack_80 = 0;
    uStack_78 = 0;
    pcStack_70 = (code *)0x0;
    pcStack_68 = _guard_check_icall;
    FUN_18023c450(*(uint64_t *)(lVar5 + 0x90),1,*(int32_t *)(lVar5 + 0x468),&uStack_80);
    if (pcStack_70 != (code *)0x0) {
      (*pcStack_70)(&uStack_80,0,0);
    }
  }
  if (*(int *)(*(longlong *)(lVar5 + 0x90) + 0x380) != 2) {
    uStack_60 = 0;
    uStack_58 = 0;
    pcStack_50 = (code *)0x0;
    pcStack_48 = _guard_check_icall;
    FUN_18023c450(*(uint64_t *)(lVar5 + 0x90),1,*(int32_t *)(lVar5 + 0x468),&uStack_60);
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(&uStack_60,0,0);
    }
  }
  iVar6 = _Thrd_id();
  lVar4 = *(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8);
  lVar8 = *(longlong *)(lVar5 + 0x90);
  if (iVar6 == *(int *)(lVar4 + 0x48)) {
    if (*(char *)(lVar8 + 900) == '\0') {
      uStack_40 = 0;
      uStack_38 = 0;
      pcStack_30 = (code *)0x0;
      pcStack_28 = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(lVar5 + 0x90),CONCAT71((int7)((ulonglong)lVar4 >> 8),1),
                    *(int32_t *)(lVar5 + 0x468),&uStack_40);
      if (pcStack_30 != (code *)0x0) {
        (*pcStack_30)(&uStack_40,0,0);
      }
    }
    lVar8 = *(longlong *)(lVar5 + 0x90);
  }
  return lVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800be610(uint64_t param_1)

{
  uint *puVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong *plStackX_10;
  uint64_t uStack_80;
  uint64_t uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  code *pcStack_30;
  code *pcStack_28;
  
  lVar5 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0xa8) == 0) {
    puVar7 = (uint64_t *)FUN_1800c1420(param_1,&plStackX_10,&UNK_180a03150,1,0xfffffffffffffffe);
    uVar2 = *puVar7;
    *puVar7 = 0;
    plVar3 = *(longlong **)(lVar5 + 0xa8);
    *(uint64_t *)(lVar5 + 0xa8) = uVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (plStackX_10 != (longlong *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puVar1 = (uint *)(*(longlong *)(lVar5 + 0xa8) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
    uStack_80 = 0;
    uStack_78 = 0;
    pcStack_70 = (code *)0x0;
    pcStack_68 = _guard_check_icall;
    FUN_18023c450(*(uint64_t *)(lVar5 + 0xa8),1,*(int32_t *)(lVar5 + 0x468),&uStack_80);
    if (pcStack_70 != (code *)0x0) {
      (*pcStack_70)(&uStack_80,0,0);
    }
  }
  if (*(int *)(*(longlong *)(lVar5 + 0xa8) + 0x380) != 2) {
    uStack_60 = 0;
    uStack_58 = 0;
    pcStack_50 = (code *)0x0;
    pcStack_48 = _guard_check_icall;
    FUN_18023c450(*(uint64_t *)(lVar5 + 0xa8),1,*(int32_t *)(lVar5 + 0x468),&uStack_60);
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(&uStack_60,0,0);
    }
  }
  iVar6 = _Thrd_id();
  lVar4 = *(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8);
  lVar8 = *(longlong *)(lVar5 + 0xa8);
  if (iVar6 == *(int *)(lVar4 + 0x48)) {
    if (*(char *)(lVar8 + 900) == '\0') {
      uStack_40 = 0;
      uStack_38 = 0;
      pcStack_30 = (code *)0x0;
      pcStack_28 = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(lVar5 + 0xa8),CONCAT71((int7)((ulonglong)lVar4 >> 8),1),
                    *(int32_t *)(lVar5 + 0x468),&uStack_40);
      if (pcStack_30 != (code *)0x0) {
        (*pcStack_30)(&uStack_40,0,0);
      }
    }
    lVar8 = *(longlong *)(lVar5 + 0xa8);
  }
  return lVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800be7e0(void)
void FUN_1800be7e0(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  int8_t auStack_c8 [32];
  uint64_t uStack_a8;
  int32_t uStack_a0;
  longlong *plStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  int16_t uStack_78;
  int8_t uStack_76;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  uint64_t uStack_3c;
  uint64_t uStack_34;
  int32_t uStack_2c;
  int16_t uStack_28;
  int16_t uStack_26;
  int16_t uStack_24;
  int8_t uStack_22;
  ulonglong uStack_18;
  
  lVar1 = _DAT_180c86898;
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(_DAT_180c86898 + 0xb0) == 0) {
    puStack_88 = (uint64_t *)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_76 = 3;
    uStack_22 = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_2c = 0x40004;
    uStack_34 = 0x2b;
    uStack_28 = 1;
    uStack_26 = 1;
    uStack_24 = 0x102;
    FUN_1802a1bc0(&puStack_88);
    *puStack_88 = 0xffffffffffffffff;
    puStack_88[1] = 0xffffffffffffffff;
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
    plVar3 = (longlong *)FUN_18023a2e0(uVar2,0);
    if (plVar3 != (longlong *)0x0) {
      plStack_98 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_98 = *(longlong **)(lVar1 + 0xb0);
    *(longlong **)(lVar1 + 0xb0) = plVar3;
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    plVar3 = (longlong *)(*(longlong *)(lVar1 + 0xb0) + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_180a03190);
    uStack_a0 = *(int32_t *)(lVar1 + 0x468);
    uStack_a8 = *(uint64_t *)(lVar1 + 0xb0);
    FUN_1800a5810(_DAT_180c86938,&puStack_88,0,0);
    FUN_18023ce10(*(uint64_t *)(lVar1 + 0xb0));
    if (uStack_78._1_1_ == '\0') {
      if (((char)uStack_78 == '\0') && (puStack_88 != (uint64_t *)0x0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_88 = (uint64_t *)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}



longlong * FUN_1800be9a0(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  void *puVar2;
  byte bVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  void *puVar7;
  ulonglong uVar8;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_20;
  
  uVar8 = (ulonglong)param_3;
  plVar1 = (longlong *)(param_1 + 0xf0 + uVar8 * 8);
  plStackX_10 = param_2;
  if (*plVar1 == 0) {
    switch(param_3) {
    case 0:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a031d8,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 1:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a031c0,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 2:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a03208,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 3:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a031e8,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 4:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a032c0,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 5:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a03240,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 6:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a03220,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 7:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a03288,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 8:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a03260,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 9:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a032d0,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 10:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a032a8,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    case 0xb:
      uVar4 = FUN_180095000(0x180000000,&plStackX_8,&UNK_180a032e0,1,0,0xfffffffffffffffe);
      FUN_180060b80(plVar1,uVar4);
      break;
    default:
      FUN_180626f80(&UNK_180a03340);
      goto LAB_1800bebdc;
    }
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
LAB_1800bebdc:
  lVar6 = *(longlong *)(param_1 + 0xf0 + uVar8 * 8);
  if (lVar6 == 0) {
    puVar5 = (uint64_t *)FUN_1800be9a0(param_1,&plStackX_20,0);
    uVar4 = *puVar5;
    *puVar5 = 0;
    plStackX_8 = *(longlong **)(param_1 + 0xf0 + uVar8 * 8);
    *(uint64_t *)(param_1 + 0xf0 + uVar8 * 8) = uVar4;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    FUN_180627020(&UNK_180a03300,param_3);
  }
  else {
    bVar3 = *(byte *)(lVar6 + 0x38c);
    if (bVar3 == 9) {
      bVar3 = func_0x00018022d300();
      *(byte *)(lVar6 + 0x38c) = bVar3;
    }
    if ((bVar3 != param_3) && (1 < (byte)(param_3 - 10))) {
      puVar2 = *(void **)(*(longlong *)(param_1 + 0xf0 + uVar8 * 8) + 0x18);
      puVar7 = &DAT_18098bc73;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      FUN_180627020(&UNK_180a03360,puVar7,param_3,bVar3);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0xf0 + uVar8 * 8);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800bed00(longlong *param_1,uint64_t *param_2,byte param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plStackX_8;
  uint64_t *puStackX_10;
  longlong *plStackX_20;
  
  lVar1 = _DAT_180c86898;
  uVar6 = (ulonglong)param_3;
  plVar5 = (longlong *)(_DAT_180c86898 + 0x1f0 + uVar6 * 8);
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  if (*plVar5 == 0) {
    if (param_3 < 9) {
      lVar4 = (ulonglong)*(uint *)(&UNK_1800bef74 + (ulonglong)param_3 * 4) + 0x180000000;
      switch(param_3) {
      case 0:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a033a8,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 1:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a033d8,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 2:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a033b8,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 3:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a03410,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 4:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a032c0,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 5:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a033f0,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 6:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a03458,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 7:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a03430,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
        break;
      case 8:
        uVar2 = FUN_180095000(lVar4,&plStackX_8,&UNK_180a03490,1,0,0xfffffffffffffffe);
        FUN_180060b80(plVar5,uVar2);
      }
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    else {
      FUN_180626f80(&UNK_180a03478);
    }
  }
  plVar5 = *(longlong **)(lVar1 + 0x1f0 + uVar6 * 8);
  if (plVar5 == (longlong *)0x0) {
    puVar3 = (uint64_t *)FUN_1800be9a0(lVar1,&plStackX_20,0);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStackX_8 = *(longlong **)(lVar1 + 0x1f0 + uVar6 * 8);
    *(uint64_t *)(lVar1 + 0x1f0 + uVar6 * 8) = uVar2;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    FUN_180627020(&UNK_180a034c0,param_3);
    plVar5 = *(longlong **)(lVar1 + 0x1f0 + uVar6 * 8);
  }
  *param_2 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))();
  }
  return param_2;
}



longlong * FUN_1800befa0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  longlong *plStackX_18;
  
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    puVar3 = (uint64_t *)
             FUN_180094e80(param_1,&plStackX_18,&UNK_180a03008,param_4,0,0xfffffffffffffffe);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plVar2 = *(longlong **)(param_1 + 0x2e0);
    *(uint64_t *)(param_1 + 0x2e0) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x2e0);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800bf050(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong *plStackX_8;
  longlong *plStackX_10;
  int32_t uStackX_18;
  int32_t uStackX_1c;
  uint64_t uStackX_20;
  int32_t uStack_84;
  int32_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong alStack_50 [3];
  longlong *plStack_38;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  
  lVar1 = _DAT_180c86898;
  uStack_78 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (*(longlong *)(_DAT_180c86898 + 0x2e8) == 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
    plVar3 = (longlong *)FUN_180075030(uVar2,1);
    if (plVar3 != (longlong *)0x0) {
      plStackX_8 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = *(longlong **)(lVar1 + 0x2e8);
    *(longlong **)(lVar1 + 0x2e8) = plVar3;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    FUN_180076a20(*(uint64_t *)(lVar1 + 0x2e8));
    plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x2e8) + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_180a03528);
    uVar2 = *(uint64_t *)(lVar1 + 0x2e8);
    uVar4 = FUN_1800be9a0(lVar1,&plStackX_8,0);
    FUN_180076910(uVar2,uVar4);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStack_60 = (longlong *)0x0;
    plStack_58 = (longlong *)0x0;
    plStackX_8 = alStack_50;
    plStack_38 = (longlong *)0x0;
    alStack_50[1] = 0;
    alStack_50[0]._0_1_ = 0;
    FUN_18022f2e0(&plStack_60,*(uint64_t *)(lVar1 + 0x2e8),0);
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,0xffffffff);
    uStackX_18 = 0x3f800000;
    uStackX_1c = 0x3f800000;
    uStackX_20 = 0;
    uStack_84 = 0x3f800000;
    uStack_80 = 0x3f800000;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0x7f7fffff;
    FUN_1802356b0(&plStack_60,&uStack_70,&uStack_84,&uStackX_20,&uStackX_18,&plStackX_8);
    if ((plStack_60 != (longlong *)0x0) && (plStack_58 != (longlong *)0x0)) {
      if (cStack_2e != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(alStack_50);
      if (cStack_30 != '\0') {
        FUN_180079520(plStack_60);
      }
      if (cStack_2f != '\0') {
        FUN_180079520(plStack_60);
      }
      plVar3 = plStack_58;
      plStackX_8 = plStack_58;
      plStack_58 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    plStackX_8 = alStack_50;
    FUN_18007f6a0(alStack_50);
    if (plStack_38 != (longlong *)0x0) {
      (**(code **)(*plStack_38 + 0x38))();
    }
    if (plStack_58 != (longlong *)0x0) {
      (**(code **)(*plStack_58 + 0x38))();
    }
    if (plStack_60 != (longlong *)0x0) {
      (**(code **)(*plStack_60 + 0x38))();
    }
  }
  plVar3 = *(longlong **)(lVar1 + 0x2e8);
  *param_2 = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800bf2a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong *plStackX_8;
  longlong *plStackX_10;
  int32_t uStackX_18;
  int32_t uStackX_1c;
  uint64_t uStackX_20;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong alStack_58 [3];
  longlong *plStack_40;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  
  lVar1 = _DAT_180c86898;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (*(longlong *)(_DAT_180c86898 + 0x358) == 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
    plVar3 = (longlong *)FUN_180075030(uVar2,1);
    if (plVar3 != (longlong *)0x0) {
      plStackX_8 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = *(longlong **)(lVar1 + 0x358);
    *(longlong **)(lVar1 + 0x358) = plVar3;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    FUN_180076a20(*(uint64_t *)(lVar1 + 0x358));
    plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x358) + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_180a03508);
    uVar2 = *(uint64_t *)(lVar1 + 0x358);
    uVar4 = FUN_1800be9a0(lVar1,&plStackX_8,0);
    FUN_180076910(uVar2,uVar4);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStack_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    plStackX_8 = alStack_58;
    plStack_40 = (longlong *)0x0;
    alStack_58[1] = 0;
    alStack_58[0]._0_1_ = 0;
    FUN_18022f2e0(&plStack_68,*(uint64_t *)(lVar1 + 0x358),0);
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,0xffffffff);
    uStackX_18 = 0x3f800000;
    uStackX_1c = 0x3f800000;
    uStackX_20 = 0;
    uStack_88 = 0x3f800000;
    uStack_84 = 0x3f800000;
    uStack_80 = 0;
    uStack_7c = 0x7f7fffff;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x7f7fffff;
    FUN_180235ae0(&plStack_68,&uStack_78,&uStack_88,&uStackX_20,&uStackX_18,&plStackX_8);
    if ((plStack_68 != (longlong *)0x0) && (plStack_60 != (longlong *)0x0)) {
      if (cStack_36 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(alStack_58);
      if (cStack_38 != '\0') {
        FUN_180079520(plStack_68);
      }
      if (cStack_37 != '\0') {
        FUN_180079520(plStack_68);
      }
      plVar3 = plStack_60;
      plStackX_8 = plStack_60;
      plStack_60 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    plStackX_8 = alStack_58;
    FUN_18007f6a0(alStack_58);
    if (plStack_40 != (longlong *)0x0) {
      (**(code **)(*plStack_40 + 0x38))();
    }
    if (plStack_60 != (longlong *)0x0) {
      (**(code **)(*plStack_60 + 0x38))();
    }
    if (plStack_68 != (longlong *)0x0) {
      (**(code **)(*plStack_68 + 0x38))();
    }
  }
  plVar3 = *(longlong **)(lVar1 + 0x358);
  *param_2 = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  return param_2;
}



uint64_t *
FUN_1800bf4f0(longlong param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  longlong *plStackX_18;
  longlong *plStackX_20;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int32_t uStack_1c;
  
  plVar4 = *(longlong **)(param_1 + 0x2f8);
  if (plVar4 == (longlong *)0x0) {
    puVar3 = (uint64_t *)FUN_180094e80(0,&plStackX_20,&UNK_180a03540,param_4,0,0xfffffffffffffffe)
    ;
    puVar3 = (uint64_t *)FUN_1800763c0(*puVar3,&plStackX_18);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plVar4 = *(longlong **)(param_1 + 0x2f8);
    *(uint64_t *)(param_1 + 0x2f8) = uVar1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    FUN_180075b70(*(uint64_t *)(param_1 + 0x2f8));
    lVar2 = *(longlong *)(param_1 + 0x2f8);
    fStack_20 = (*(float *)(lVar2 + 0x27c) + *(float *)(lVar2 + 0x28c)) * -0.5;
    fStack_24 = (*(float *)(lVar2 + 0x278) + *(float *)(lVar2 + 0x288)) * -0.5;
    fStack_28 = (*(float *)(lVar2 + 0x284) + *(float *)(lVar2 + 0x274)) * -0.5;
    uStack_1c = 0x7f7fffff;
    FUN_1800c12e0(lVar2,&fStack_28);
    fStack_28 = 1.0 / (*(float *)(lVar2 + 0x284) - *(float *)(lVar2 + 0x274));
    fStack_28 = fStack_28 + fStack_28;
    fStack_24 = 1.0 / (*(float *)(lVar2 + 0x288) - *(float *)(lVar2 + 0x278));
    fStack_24 = fStack_24 + fStack_24;
    fStack_20 = 1.0 / (*(float *)(lVar2 + 0x28c) - *(float *)(lVar2 + 0x27c));
    fStack_20 = fStack_20 + fStack_20;
    FUN_180094d40(*(uint64_t *)(param_1 + 0x2f8),&fStack_28);
    plVar4 = *(longlong **)(param_1 + 0x2f8);
  }
  *param_2 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800bf6c0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong *plStackX_18;
  
  lVar3 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0x350) == 0) {
    puVar4 = (uint64_t *)
             FUN_180094e80(param_1,&plStackX_18,&DAT_180a035c0,param_4,0,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(longlong **)(lVar3 + 0x350);
    *(uint64_t *)(lVar3 + 0x350) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
  }
  plVar2 = *(longlong **)(lVar3 + 0x350);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800bf780(void)
void FUN_1800bf780(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t in_R9;
  void *puStack_58;
  uint64_t *puStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  uVar1 = _DAT_180c86930;
  if (*(longlong *)(_DAT_180c86898 + 0x360) == 0) {
    puStack_58 = &UNK_180a3c3e0;
    uStack_40 = 0;
    puStack_50 = (uint64_t *)0x0;
    uStack_48 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,in_R9,0,0xfffffffffffffffe);
    *(int8_t *)puVar3 = 0;
    puStack_50 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
    *puVar3 = 0x656d5f6c61636564;
    *(int16_t *)(puVar3 + 1) = 0x6873;
    *(int8_t *)((longlong)puVar3 + 10) = 0;
    uStack_48 = 10;
    FUN_1800b6de0(uVar1,&puStack_58,1);
    puStack_58 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




