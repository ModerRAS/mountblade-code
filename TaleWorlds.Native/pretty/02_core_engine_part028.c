#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part028.c - 11 个函数

// 函数: void FUN_180073730(uint64_t param_1,uint64_t param_2)
void FUN_180073730(uint64_t param_1,uint64_t param_2)

{
  void *puVar1;
  char cVar2;
  int32_t auStackX_18 [4];
  void *puStack_30;
  longlong lStack_28;
  
  FUN_1800623b0(_DAT_180c86928,0,0x100000000,1,&UNK_1809ff938,param_2,0xfffffffffffffffe);
  if (DAT_180c82860 == '\0') {
    auStackX_18[0] = 0xff00ff00;
    FUN_180627910(&puStack_30,param_2);
    puVar1 = *(void **)*_DAT_180c8ed08;
    if (puVar1 == &UNK_18098bb88) {
      cVar2 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*_DAT_180c8ed08);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1],&puStack_30,auStackX_18);
    }
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180073830(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180073830(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  void *puVar1;
  char cVar2;
  int32_t auStackX_20 [2];
  void *puStack_30;
  longlong lStack_28;
  
  FUN_1800623b0(_DAT_180c86928,0,0x100000000,0xc,&UNK_1809ff958,param_3,0xfffffffffffffffe);
  if (DAT_180c82860 == '\0') {
    auStackX_20[0] = param_2;
    FUN_180627910(&puStack_30,param_3);
    puVar1 = *(void **)*_DAT_180c8ed08;
    if (puVar1 == &UNK_18098bb88) {
      cVar2 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*_DAT_180c8ed08);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1],&puStack_30,auStackX_20);
    }
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_180073930(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180073930(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int16_t uStack_38;
  uint64_t uStack_36;
  uint64_t uStack_2e;
  int16_t uStack_26;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_88 = &UNK_180a3c3e0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_26 = 0;
  uStack_36 = 0;
  uStack_2e = 0;
  FUN_180074090(&puStack_88,param_1,param_3,param_4,&uStack_68);
  FUN_180073ad0(&puStack_88,param_3);
  FUN_1800739f0(&puStack_88);
  return;
}





// 函数: void FUN_1800739f0(uint64_t *param_1)
void FUN_1800739f0(uint64_t *param_1)

{
  if (*(longlong *)((longlong)param_1 + 0x52) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)((longlong)param_1 + 0x52) = 0;
  if (*(longlong *)((longlong)param_1 + 0x5a) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)((longlong)param_1 + 0x5a) = 0;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  FUN_180074a80();
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





// 函数: void FUN_180073ab0(longlong *param_1)
void FUN_180073ab0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)((longlong)plVar2 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)((longlong)plVar2 + 0x12) = 0;
    if (*(longlong *)((longlong)plVar2 + 0x1a) != 0) break;
    *(uint64_t *)((longlong)plVar2 + 0x1a) = 0;
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    if (plVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar2[1] = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 0x24);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180073ad0(longlong param_1,longlong *param_2)
void FUN_180073ad0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t *puVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  FUN_180639ec0(param_2,param_1);
  lVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  piVar3 = (int *)param_2[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*param_2 - (longlong)piVar3) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar3 + (4 - *param_2));
    piVar3 = (int *)param_2[1];
  }
  *piVar3 = iVar8;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 8);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x10) * 4;
        if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
          FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
          puVar4 = (int32_t *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 0x1a);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x22) * 4;
        if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
          FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
          puVar4 = (int32_t *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x48);
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x50) * 4;
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = param_2[1] + 4;
  param_2[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x5a);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x62) * 4;
  if ((ulonglong)((*param_2 - lVar6) + param_2[2]) <= uVar9) {
    FUN_180639bf0(param_2,uVar9 + (lVar6 - *param_2));
    lVar6 = param_2[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





// 函数: void FUN_180073adc(longlong param_1)
void FUN_180073adc(longlong param_1)

{
  ushort uVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t *puVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  FUN_180639ec0();
  lVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  piVar3 = (int *)unaff_RBX[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar3 = (int *)unaff_RBX[1];
  }
  *piVar3 = iVar8;
  puVar4 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 8);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x10) * 4;
        if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
          FUN_180639bf0();
          puVar4 = (int32_t *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 0x1a);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x22) * 4;
        if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
          FUN_180639bf0();
          puVar4 = (int32_t *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x48);
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
      FUN_180639bf0();
      puVar4 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x5a);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x62) * 4;
  if ((ulonglong)((*unaff_RBX - lVar6) + unaff_RBX[2]) <= uVar9) {
    FUN_180639bf0();
    lVar6 = unaff_RBX[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





// 函数: void FUN_180073b64(uint *param_1)
void FUN_180073b64(uint *param_1)

{
  ushort uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint *puVar4;
  longlong *unaff_RBX;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_R12;
  uint unaff_R13D;
  longlong unaff_R15;
  
  uVar6 = (ulonglong)unaff_R13D;
  do {
    lVar5 = *(longlong *)(unaff_R15 + 0x20) + uVar6;
    if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      param_1 = (uint *)unaff_RBX[1];
    }
    *param_1 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (int32_t *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x10);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    puVar4 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)puVar4;
    if (*(ushort *)(lVar5 + 0x10) != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 8);
      uVar6 = (ulonglong)*(ushort *)(lVar5 + 0x10) * 4;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar6) {
        FUN_180639bf0();
        puVar4 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar4,uVar2,uVar6);
    }
    lVar5 = *(longlong *)(unaff_R15 + 0x20) + uVar6;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (int32_t *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x22);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    param_1 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)param_1;
    if (*(ushort *)(lVar5 + 0x22) != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 0x1a);
      uVar6 = (ulonglong)*(ushort *)(lVar5 + 0x22) * 4;
      if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) <= uVar6) {
        FUN_180639bf0();
        param_1 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(param_1,uVar2,uVar6);
    }
    uVar6 = uVar6 + 0x24;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (uint *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar4 = (uint *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void FUN_180073e0b(int32_t *param_1)
void FUN_180073e0b(int32_t *param_1)

{
  ushort uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  int32_t unaff_R13D;
  longlong unaff_R15;
  
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void FUN_180073e23(void)
void FUN_180073e23(void)

{
  ushort uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  int32_t unaff_R13D;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(int32_t *)unaff_RBX[1] = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void FUN_180073f90(void)
void FUN_180073f90(void)

{
  ushort uVar1;
  uint64_t uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  ulonglong uVar5;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(int32_t *)unaff_RBX[1] = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (uint *)unaff_RBX[1];
  }
  *puVar3 = (uint)uVar1;
  lVar4 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar4;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar4) + unaff_RBX[2]) <= uVar5) {
      FUN_180639bf0();
      lVar4 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar4,uVar2,uVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



