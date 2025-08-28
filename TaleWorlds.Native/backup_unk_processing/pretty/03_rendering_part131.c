#include "TaleWorlds.Native.Split.h"

// 03_rendering_part131.c - 12 个函数

// 函数: void FUN_1803461b0(longlong *param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
void FUN_1803461b0(longlong *param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
                  char param_5)

{
  int32_t *puVar1;
  uint64_t uVar2;
  longlong lVar3;
  int iVar4;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Db;
  int32_t extraout_XMM0_Db_00;
  int32_t extraout_XMM0_Db_01;
  int32_t extraout_XMM0_Db_02;
  int32_t extraout_XMM0_Dc;
  int32_t extraout_XMM0_Dc_00;
  int32_t extraout_XMM0_Dc_01;
  int32_t extraout_XMM0_Dd;
  int32_t extraout_XMM0_Dd_00;
  int32_t extraout_XMM0_Dd_01;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  void *puStack_30;
  longlong lStack_28;
  
  iVar4 = (int)param_4;
  if (iVar4 == 0) {
    uVar2 = FUN_180627910(&puStack_30,param_3 + 0x20,param_3,param_4,0xfffffffffffffffe);
    lVar3 = FUN_1803466a0(param_1,param_2);
    FUN_180627be0(*(uint64_t *)(lVar3 + 0x20),uVar2);
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    }
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (iVar4 == 1) {
      lVar3 = FUN_1803466a0((int)*(uint64_t *)(param_3 + 0xa0));
      **(uint64_t **)(lVar3 + 0x20) = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    }
    else if (iVar4 == 2) {
      lVar3 = FUN_1803466a0(param_3[0xa2]);
      **(int32_t **)(lVar3 + 0x20) = extraout_XMM0_Da_00;
    }
    else if (iVar4 == 3) {
      iVar4 = param_3[0xa3];
      lVar3 = FUN_1803466a0();
      *(bool *)*(uint64_t *)(lVar3 + 0x20) = iVar4 != 0;
    }
    else if (iVar4 == 4) {
      uVar5 = param_3[0xa4];
      lVar3 = FUN_1803466a0();
      **(int32_t **)(lVar3 + 0x20) = uVar5;
    }
    else if (iVar4 == 5) {
      lVar3 = FUN_1803466a0(param_3[0x14]);
      puVar1 = *(int32_t **)(lVar3 + 0x20);
      *puVar1 = extraout_XMM0_Da_01;
      puVar1[1] = extraout_XMM0_Db_00;
      puVar1[2] = extraout_XMM0_Dc;
      puVar1[3] = extraout_XMM0_Dd;
    }
    else if (iVar4 == 0xc) {
      lVar3 = FUN_1803466a0(param_3[0x10]);
      puVar1 = *(int32_t **)(lVar3 + 0x20);
      *puVar1 = extraout_XMM0_Da_02;
      puVar1[1] = extraout_XMM0_Db_01;
      puVar1[2] = extraout_XMM0_Dc_00;
      puVar1[3] = extraout_XMM0_Dd_00;
    }
    else if (iVar4 == 6) {
      uVar2 = *(uint64_t *)(param_3 + 0x18);
      lVar3 = FUN_1803466a0();
      **(uint64_t **)(lVar3 + 0x20) = uVar2;
    }
    else if (iVar4 == 7) {
      uVar2 = *(uint64_t *)(param_3 + 0x1a);
      lVar3 = FUN_1803466a0();
      **(uint64_t **)(lVar3 + 0x20) = uVar2;
    }
    else if (iVar4 == 8) {
      uVar2 = *(uint64_t *)(param_3 + 0x1c);
      lVar3 = FUN_1803466a0();
      **(uint64_t **)(lVar3 + 0x20) = uVar2;
    }
    else if (iVar4 == 10) {
      uVar2 = *(uint64_t *)(param_3 + 0x1e);
      lVar3 = FUN_1803466a0();
      **(uint64_t **)(lVar3 + 0x20) = uVar2;
    }
    else {
      if (iVar4 != 0xd) {
        if (iVar4 != 9) {
          return;
        }
        uVar2 = FUN_180627910(&puStack_30,param_3 + 0x60,param_3,param_4,0xfffffffffffffffe);
        FUN_180346640(param_1,param_2,uVar2,param_5);
        puStack_30 = &UNK_180a3c3e0;
        if (lStack_28 == 0) {
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar5 = param_3[4];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      uVar9 = param_3[8];
      uVar10 = param_3[9];
      uVar11 = param_3[10];
      uVar12 = param_3[0xb];
      uVar13 = param_3[0xc];
      uVar14 = param_3[0xd];
      uVar15 = param_3[0xe];
      uVar16 = param_3[0xf];
      lVar3 = FUN_1803466a0(*param_3);
      puVar1 = *(int32_t **)(lVar3 + 0x20);
      *puVar1 = extraout_XMM0_Da_03;
      puVar1[1] = extraout_XMM0_Db_02;
      puVar1[2] = extraout_XMM0_Dc_01;
      puVar1[3] = extraout_XMM0_Dd_01;
      puVar1[4] = uVar5;
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      puVar1[8] = uVar9;
      puVar1[9] = uVar10;
      puVar1[10] = uVar11;
      puVar1[0xb] = uVar12;
      puVar1[0xc] = uVar13;
      puVar1[0xd] = uVar14;
      puVar1[0xe] = uVar15;
      puVar1[0xf] = uVar16;
    }
    if (param_5 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001803463b3. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*param_1 + 0xb0))(param_1,param_2);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180346430(uint64_t *param_1,longlong param_2)
void FUN_180346430(uint64_t *param_1,longlong param_2)

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
  lVar5 = ((longlong)puVar7 - (longlong)puVar4) / 0x30;
  puVar2 = (uint64_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_1803464ba;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar5 * 0x30,*(int8_t *)(param_1 + 3),puVar4,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_1803464ba:
  puVar3 = puVar2;
  if (puVar4 != puVar7) {
    lVar6 = (longlong)puVar2 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar3 = &UNK_18098bcb0;
      *(uint64_t *)(lVar6 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *puVar3 = &UNK_180a3c3e0;
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
      *(uint64_t *)(lVar6 + 0x18 + (longlong)puVar4) = puVar4[3];
      *(int32_t *)(lVar6 + 0x20 + (longlong)puVar4) = *(int32_t *)(puVar4 + 4);
      puVar3 = puVar3 + 6;
      puVar1 = puVar4 + 5;
      puVar4 = puVar4 + 6;
    } while (puVar1 != puVar7);
  }
  *puVar3 = &UNK_18098bcb0;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &UNK_180a3c3e0;
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
  puVar3[4] = *(uint64_t *)(param_2 + 0x20);
  *(int32_t *)(puVar3 + 5) = *(int32_t *)(param_2 + 0x28);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &UNK_180a3c3e0;
      if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 3) = 0;
      *puVar4 = &UNK_18098bcb0;
      puVar4 = puVar4 + 6;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar3 + 6;
    param_1[2] = puVar2 + lVar5 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}





// 函数: void FUN_180346640(longlong *param_1,uint64_t param_2,uint64_t param_3,char param_4)
void FUN_180346640(longlong *param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1803466a0();
  FUN_180627be0(*(uint64_t *)(lVar1 + 0x20),param_3);
  if (param_4 != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  }
  return;
}



longlong FUN_1803466a0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar7;
  
  lVar10 = *(longlong *)(param_1 + 0x50);
  lVar8 = *(longlong *)(param_1 + 0x58) - lVar10;
  uVar5 = 0;
  lVar9 = lVar8 >> 0x3f;
  if (lVar8 / 0x30 + lVar9 != lVar9) {
    uVar7 = uVar5;
    do {
      iVar3 = *(int *)(uVar5 + 0x10 + lVar10);
      if ((iVar3 == *(int *)(param_2 + 0x10)) && (iVar3 != 0)) {
        pcVar4 = *(char **)(uVar5 + 8 + lVar10);
        lVar9 = *(longlong *)(param_2 + 8) - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar9];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        bVar11 = cVar1 == cVar2;
      }
      else {
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_180346795;
        bVar11 = false;
      }
      if (bVar11) {
LAB_180346795:
        return (longlong)(int)uVar7 * 0x30 + lVar10;
      }
      lVar10 = *(longlong *)(param_1 + 0x50);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 0x30;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)((*(longlong *)(param_1 + 0x58) - lVar10) / 0x30));
  }
  return 0;
}



uint64_t * FUN_1803467b0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &UNK_180a1cdc0;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}





// 函数: void FUN_180346820(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180346820(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802f5b10(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180346840(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180346840(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802f5b10(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180346870(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180346870(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802f5b10(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



uint64_t * FUN_1803468a0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a1d0b0;
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180346910(uint64_t *param_1)
void FUN_180346910(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  void *puStack_80;
  uint64_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a1d0b0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(int32_t *)(puVar2 + 0x14) = 3;
  puVar2[0xf] = 0x4024000000000000;
  puVar2[0xe] = 0x3fe0000000000000;
  *(int8_t *)((longlong)puVar2 + 0x81) = 0;
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (uint64_t *)0x0;
  uStack_70 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_78 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puVar2 = 0x6f6d4120646e6542;
  *(int32_t *)(puVar2 + 1) = 0x746e75;
  uStack_70 = 0xb;
  FUN_1803460a0(param_1,&puStack_80,param_1 + 0xf,1,uVar3);
  puStack_80 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180346ad0(longlong param_1)
void FUN_180346ad0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x81) != '\0') &&
     ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x2e8) & 1) != 0)) {
    FUN_180348d90();
    *(int8_t *)(param_1 + 0x81) = 0;
  }
  return;
}





// 函数: void FUN_180346b10(longlong param_1)
void FUN_180346b10(longlong param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_180348d90();
    *(int8_t *)(param_1 + 0x80) = 0;
  }
  return;
}





// 函数: void FUN_180346b50(uint64_t param_1,longlong param_2)
void FUN_180346b50(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int32_t uVar9;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  void *puStack_c8;
  int8_t *puStack_c0;
  uint uStack_b8;
  ulonglong uStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  uint uStack_98;
  ulonglong uStack_90;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  uStack_68 = 0xfffffffffffffffe;
  plVar5 = *(longlong **)(param_2 + 0x1c0);
  plVar8 = *(longlong **)(param_2 + 0x1c8);
  if (plVar5 != plVar8) {
    do {
      plVar1 = (longlong *)*plVar5;
      plStackX_10 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      FUN_180346b50(param_1,plVar1);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar8);
    plVar8 = *(longlong **)(param_2 + 0x1c8);
  }
  plVar5 = *(longlong **)(param_2 + 0x1c0);
  do {
    if (plVar5 == plVar8) {
      return;
    }
    plVar1 = (longlong *)*plVar5;
    plStackX_20 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    lVar3 = plVar1[0x22];
    if (lVar3 != 0) {
      puStack_c8 = &UNK_180a3c3e0;
      uStack_b0 = 0;
      puStack_c0 = (int8_t *)0x0;
      uStack_b8 = 0;
      uVar9 = FUN_1806277c0(&puStack_c8,*(int32_t *)(lVar3 + 0x20));
      if (0 < *(int *)(lVar3 + 0x20)) {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
          puVar4 = *(void **)(lVar3 + 0x18);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_c0,puVar4,(longlong)(*(int *)(lVar3 + 0x20) + 1));
      }
      if ((*(longlong *)(lVar3 + 0x18) != 0) && (uStack_b8 = 0, puStack_c0 != (int8_t *)0x0)) {
        *puStack_c0 = 0;
      }
      while ((0 < (int)uStack_b8 &&
             (lVar3 = strstr(puStack_c0,&system_data_ff10), uVar9 = extraout_XMM0_Da, lVar3 != 0))) {
        iVar7 = 6;
        iVar2 = (int)lVar3 - (int)puStack_c0;
        if (uStack_b8 < iVar2 + 6U) {
          iVar7 = uStack_b8 - iVar2;
        }
        uVar6 = iVar2 + iVar7;
        if (uVar6 < uStack_b8) {
          lVar3 = (longlong)(int)uVar6;
          do {
            puStack_c0[lVar3 - iVar7] = puStack_c0[lVar3];
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 1;
          } while (uVar6 < uStack_b8);
        }
        uStack_b8 = uStack_b8 - iVar7;
        puStack_c0[uStack_b8] = 0;
      }
      FUN_1800b3430(uVar9,&plStackX_10,&puStack_c8,1);
      FUN_180085020(plVar1 + 0xe,&uStack_58);
      uStack_78 = uStack_58;
      uStack_74 = uStack_54;
      uStack_70 = uStack_50;
      uStack_6c = uStack_4c;
      FUN_18014cb90(uStack_58,plStackX_10,&uStack_78,1);
      if (plStackX_10 != (longlong *)0x0) {
        (**(code **)(*plStackX_10 + 0x38))();
      }
      puStack_c8 = &UNK_180a3c3e0;
      if (puStack_c0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_c0 = (int8_t *)0x0;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      puStack_c8 = &UNK_18098bcb0;
    }
    lVar3 = plVar1[2];
    if (lVar3 != 0) {
      puStack_a8 = &UNK_180a3c3e0;
      uStack_90 = 0;
      puStack_a0 = (int8_t *)0x0;
      uStack_98 = 0;
      uVar9 = FUN_1806277c0(&puStack_a8,*(int32_t *)(lVar3 + 0x20));
      if (0 < *(int *)(lVar3 + 0x20)) {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
          puVar4 = *(void **)(lVar3 + 0x18);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_a0,puVar4,(longlong)(*(int *)(lVar3 + 0x20) + 1));
      }
      if ((*(longlong *)(lVar3 + 0x18) != 0) && (uStack_98 = 0, puStack_a0 != (int8_t *)0x0)) {
        *puStack_a0 = 0;
      }
      while ((0 < (int)uStack_98 &&
             (lVar3 = strstr(puStack_a0,&system_data_ff10), uVar9 = extraout_XMM0_Da_00, lVar3 != 0)))
      {
        iVar7 = 6;
        iVar2 = (int)lVar3 - (int)puStack_a0;
        if (uStack_98 < iVar2 + 6U) {
          iVar7 = uStack_98 - iVar2;
        }
        uVar6 = iVar2 + iVar7;
        if (uVar6 < uStack_98) {
          lVar3 = (longlong)(int)uVar6;
          do {
            puStack_a0[lVar3 - iVar7] = puStack_a0[lVar3];
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 1;
          } while (uVar6 < uStack_98);
        }
        uStack_98 = uStack_98 - iVar7;
        puStack_a0[uStack_98] = 0;
      }
      FUN_1800b3430(uVar9,&plStackX_18,&puStack_a8,1);
      FUN_180085020(plVar1 + 0xe,&uStack_48);
      uStack_78 = uStack_48;
      uStack_74 = uStack_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      FUN_18014cb90(uStack_48,plStackX_18,&uStack_78,0);
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      puStack_a8 = &UNK_180a3c3e0;
      if (puStack_a0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_a0 = (int8_t *)0x0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      puStack_a8 = &UNK_18098bcb0;
    }
    (**(code **)(*plVar1 + 0x38))(plVar1);
    plVar5 = plVar5 + 1;
  } while( true );
}





// 函数: void FUN_180346f00(longlong param_1)
void FUN_180346f00(longlong param_1)

{
  longlong lVar1;
  void *puVar2;
  longlong alStackX_8 [4];
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  uStack_30 = 0x180346f12;
  FUN_180346b50(param_1,*(uint64_t *)(param_1 + 0x18));
  uStack_30 = 0x180346f17;
  FUN_18014ccf0();
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x2e8) & 1) == 0) {
    *(int8_t *)(param_1 + 0x81) = 1;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  alStackX_8[0] = 0;
  uStack_18 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_180348e60(param_1,lVar1,alStackX_8,&uStack_48);
  if (alStackX_8[0] != 0) {
    uStack_58 = 0x7f7fffff;
    uStack_54 = 0x7f7fffff;
    uStack_50 = 0x7f7fffff;
    uStack_4c = 0x7f7fffff;
    uStack_68 = 0xff7fffff;
    uStack_64 = 0xff7fffff;
    uStack_60 = 0xff7fffff;
    uStack_5c = 0x7f7fffff;
    FUN_180347ca0(param_1,lVar1,&uStack_48,&uStack_58,&uStack_68);
    return;
  }
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 0x290);
  }
  FUN_180627020(&UNK_180a1cf60,puVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180346f40(uint64_t param_1)
void FUN_180346f40(uint64_t param_1)

{
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void **appuStack_160 [2];
  uint64_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *apuStack_88 [11];
  int32_t uStack_30;
  ulonglong uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xb;
  strcpy_s(auStack_130,0x40,&system_data_cf50);
  FUN_1800b8300(apuStack_88,&puStack_148);
  uStack_30 = 1;
  uStack_168 = 1;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x11;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&system_data_cf38);
  FUN_1800b8300(apuStack_88,&puStack_e8);
  uStack_30 = 1;
  uStack_168 = 2;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_188);
}



float * FUN_180347100(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  
  fVar25 = param_3[5];
  pfVar1 = *(float **)(param_1 + 0x88);
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar23 = *(longlong *)(param_1 + 0x90) - (longlong)pfVar1;
  fVar3 = *(float *)(lVar2 + 0x90);
  fVar4 = *(float *)(lVar2 + 0x94);
  fVar5 = *(float *)(lVar2 + 0x98);
  fVar6 = *(float *)(lVar2 + 0x9c);
  fVar7 = *(float *)(lVar2 + 0xa0);
  fVar8 = *(float *)(lVar2 + 0xa4);
  fVar9 = *(float *)(lVar2 + 0xa8);
  fVar10 = *(float *)(lVar2 + 0xac);
  fVar11 = *(float *)(lVar2 + 0x70);
  fVar12 = *(float *)(lVar2 + 0x74);
  fVar13 = *(float *)(lVar2 + 0x78);
  fVar14 = *(float *)(lVar2 + 0x7c);
  fVar15 = *(float *)(lVar2 + 0x80);
  fVar16 = *(float *)(lVar2 + 0x84);
  fVar17 = *(float *)(lVar2 + 0x88);
  fVar18 = *(float *)(lVar2 + 0x8c);
  fVar30 = *param_3;
  fVar31 = param_3[1];
  fVar38 = param_3[2];
  fVar35 = param_3[4];
  fVar29 = fVar31 * fVar12 + fVar30 * fVar11 + fVar38 * fVar13;
  fVar34 = fVar31 * fVar16 + fVar30 * fVar15 + fVar38 * fVar17;
  fVar37 = fVar31 * fVar4 + fVar30 * fVar3 + fVar38 * fVar5;
  fVar30 = param_3[6];
  fVar31 = param_3[8];
  fVar38 = param_3[9];
  fVar40 = fVar25 * fVar12 + fVar35 * fVar11 + fVar30 * fVar13;
  fVar44 = fVar25 * fVar16 + fVar35 * fVar15 + fVar30 * fVar17;
  fVar47 = fVar25 * fVar4 + fVar35 * fVar3 + fVar30 * fVar5;
  fVar25 = param_3[10];
  fVar41 = param_3[0xd] - fVar8;
  fVar30 = fVar38 * fVar12 + fVar31 * fVar11 + fVar25 * fVar13;
  fVar35 = fVar38 * fVar16 + fVar31 * fVar15 + fVar25 * fVar17;
  fVar38 = fVar38 * fVar4 + fVar31 * fVar3 + fVar25 * fVar5;
  fVar25 = param_3[0xc] - fVar7;
  fVar31 = param_3[0xe] - fVar9;
  lVar2 = lVar23 >> 0x3f;
  fVar42 = fVar41 * fVar12 + fVar25 * fVar11 + fVar31 * fVar13;
  fVar45 = fVar41 * fVar16 + fVar25 * fVar15 + fVar31 * fVar17;
  fVar25 = fVar41 * fVar4 + fVar25 * fVar3 + fVar31 * fVar5;
  if (lVar23 / 0x180 + lVar2 == lVar2) {
    uVar22 = *(uint64_t *)(param_3 + 2);
    *(uint64_t *)param_2 = *(uint64_t *)param_3;
    *(uint64_t *)(param_2 + 2) = uVar22;
    uVar22 = *(uint64_t *)(param_3 + 6);
    *(uint64_t *)(param_2 + 4) = *(uint64_t *)(param_3 + 4);
    *(uint64_t *)(param_2 + 6) = uVar22;
    uVar22 = *(uint64_t *)(param_3 + 10);
    *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_3 + 8);
    *(uint64_t *)(param_2 + 10) = uVar22;
    uVar22 = *(uint64_t *)(param_3 + 0xe);
    *(uint64_t *)(param_2 + 0xc) = *(uint64_t *)(param_3 + 0xc);
    *(uint64_t *)(param_2 + 0xe) = uVar22;
  }
  else {
    fVar31 = pfVar1[0x20];
    fVar41 = (pfVar1[0x24] - fVar31) * pfVar1[0x2d] + fVar31;
    if (fVar41 <= fVar42) {
      fVar31 = pfVar1[0x14];
      fVar24 = pfVar1[0x15];
      fVar28 = pfVar1[0x16];
      fVar26 = pfVar1[0x10];
      fVar27 = pfVar1[0x11];
      fVar33 = pfVar1[0x12];
      fVar52 = pfVar1[0x18];
      fVar19 = pfVar1[0x19];
      fVar20 = pfVar1[0x1a];
      fVar53 = (fVar42 - fVar41) / (pfVar1[0x24] - fVar41);
      fVar49 = fVar34 * fVar31 + fVar29 * fVar26 + fVar37 * fVar52;
      fVar50 = fVar34 * fVar24 + fVar29 * fVar27 + fVar37 * fVar19;
      fVar51 = fVar34 * fVar28 + fVar29 * fVar33 + fVar37 * fVar20;
      fVar43 = fVar44 * fVar31 + fVar40 * fVar26 + fVar47 * fVar52;
      fVar46 = fVar44 * fVar24 + fVar40 * fVar27 + fVar47 * fVar19;
      fVar48 = fVar44 * fVar28 + fVar40 * fVar33 + fVar47 * fVar20;
      fVar32 = fVar35 * fVar31 + fVar30 * fVar26 + fVar38 * fVar52;
      fVar36 = fVar35 * fVar24 + fVar30 * fVar27 + fVar38 * fVar19;
      fVar39 = fVar35 * fVar28 + fVar30 * fVar33 + fVar38 * fVar20;
      fVar26 = fVar45 * fVar31 + fVar42 * fVar26 + fVar25 * fVar52;
      fVar27 = fVar45 * fVar24 + fVar42 * fVar27 + fVar25 * fVar19;
      fVar28 = fVar45 * fVar28 + fVar42 * fVar33 + fVar25 * fVar20;
      fVar31 = pfVar1[0x1c];
      fVar41 = pfVar1[0x1d];
      fVar24 = pfVar1[0x1e];
    }
    else {
      fVar24 = pfVar1[4];
      fVar28 = pfVar1[5];
      fVar33 = pfVar1[6];
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar52 = pfVar1[2];
      fVar19 = pfVar1[8];
      fVar20 = pfVar1[9];
      fVar21 = pfVar1[10];
      fVar49 = fVar34 * fVar24 + fVar29 * fVar26 + fVar37 * fVar19;
      fVar50 = fVar34 * fVar28 + fVar29 * fVar27 + fVar37 * fVar20;
      fVar51 = fVar34 * fVar33 + fVar29 * fVar52 + fVar37 * fVar21;
      fVar53 = (fVar41 - fVar42) / (fVar41 - fVar31);
      fVar43 = fVar44 * fVar24 + fVar40 * fVar26 + fVar47 * fVar19;
      fVar46 = fVar44 * fVar28 + fVar40 * fVar27 + fVar47 * fVar20;
      fVar48 = fVar44 * fVar33 + fVar40 * fVar52 + fVar47 * fVar21;
      fVar32 = fVar35 * fVar24 + fVar30 * fVar26 + fVar38 * fVar19;
      fVar36 = fVar35 * fVar28 + fVar30 * fVar27 + fVar38 * fVar20;
      fVar39 = fVar35 * fVar33 + fVar30 * fVar52 + fVar38 * fVar21;
      fVar26 = fVar45 * fVar24 + fVar42 * fVar26 + fVar25 * fVar19;
      fVar27 = fVar45 * fVar28 + fVar42 * fVar27 + fVar25 * fVar20;
      fVar28 = fVar45 * fVar33 + fVar42 * fVar52 + fVar25 * fVar21;
      fVar31 = pfVar1[0xc];
      fVar41 = pfVar1[0xd];
      fVar24 = pfVar1[0xe];
    }
    fVar33 = 1.0 - fVar53;
    fVar37 = fVar51 * fVar53 + fVar37 * fVar33;
    fVar52 = fVar43 * fVar53 + fVar40 * fVar33;
    fVar40 = fVar49 * fVar53 + fVar29 * fVar33;
    fVar26 = fVar33 * fVar42 + (fVar26 + fVar31) * fVar53;
    fVar41 = (fVar27 + fVar41) * fVar53 + fVar45 * fVar33;
    fVar31 = fVar50 * fVar53 + fVar34 * fVar33;
    fVar42 = (fVar28 + fVar24) * fVar53 + fVar25 * fVar33;
    fVar25 = fVar46 * fVar53 + fVar44 * fVar33;
    fVar29 = fVar48 * fVar53 + fVar47 * fVar33;
    fVar34 = fVar32 * fVar53 + fVar30 * fVar33;
    fVar30 = fVar36 * fVar53 + fVar35 * fVar33;
    fVar38 = fVar39 * fVar53 + fVar38 * fVar33;
    *param_2 = fVar31 * fVar15 + fVar40 * fVar11 + fVar37 * fVar3;
    param_2[1] = fVar31 * fVar16 + fVar40 * fVar12 + fVar37 * fVar4;
    param_2[2] = fVar31 * fVar17 + fVar40 * fVar13 + fVar37 * fVar5;
    param_2[3] = fVar31 * fVar18 + fVar40 * fVar14 + fVar37 * fVar6;
    param_2[4] = fVar25 * fVar15 + fVar52 * fVar11 + fVar29 * fVar3;
    param_2[5] = fVar25 * fVar16 + fVar52 * fVar12 + fVar29 * fVar4;
    param_2[6] = fVar25 * fVar17 + fVar52 * fVar13 + fVar29 * fVar5;
    param_2[7] = fVar25 * fVar18 + fVar52 * fVar14 + fVar29 * fVar6;
    param_2[8] = fVar30 * fVar15 + fVar34 * fVar11 + fVar38 * fVar3;
    param_2[9] = fVar30 * fVar16 + fVar34 * fVar12 + fVar38 * fVar4;
    param_2[10] = fVar30 * fVar17 + fVar34 * fVar13 + fVar38 * fVar5;
    param_2[0xb] = fVar30 * fVar18 + fVar34 * fVar14 + fVar38 * fVar6;
    param_2[0xc] = fVar41 * fVar15 + fVar26 * fVar11 + fVar42 * fVar3 + fVar7;
    param_2[0xd] = fVar41 * fVar16 + fVar26 * fVar12 + fVar42 * fVar4 + fVar8;
    param_2[0xe] = fVar41 * fVar17 + fVar26 * fVar13 + fVar42 * fVar5 + fVar9;
    param_2[0xf] = fVar41 * fVar18 + fVar26 * fVar14 + fVar42 * fVar6 + fVar10;
  }
  return param_2;
}





