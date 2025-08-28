#include "TaleWorlds.Native.Split.h"

// 03_rendering_part334.c - 34 个函数

// 函数: void FUN_180443820(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180443820(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x60d10);
    (**(code **)(*param_1 + 0x28))();
    iVar6 = 0;
    puVar4 = (undefined8 *)*plVar1;
    uVar5 = *(longlong *)(lVar2 + 0x60d18) - (longlong)puVar4 >> 3;
    if (uVar5 != 0) {
      do {
        if ((longlong *)*puVar4 == param_1) goto LAB_18044388e;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar5);
    }
    iVar6 = -1;
LAB_18044388e:
    (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar6 != -1) {
      *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) & 0xefffffff;
      if ((int)param_1[0x57] == -1) {
        FUN_1803982f0(lVar2 + 0x607e0,param_1);
        if (param_1[0x2d] == 0) {
          FUN_180398640(lVar2 + 0x607e0,param_1);
        }
      }
      lVar3 = *plVar1;
      FUN_180080810(lVar3 + (longlong)iVar6 * 8,
                    lVar3 + ((*(longlong *)(lVar2 + 0x60d18) - lVar3 >> 3) + -1) * 8,lVar3,param_4,
                    uVar7);
      FUN_1800b8630(plVar1,(*(longlong *)(lVar2 + 0x60d18) - *plVar1 >> 3) + -1);
    }
  }
  return;
}





// 函数: void FUN_180443930(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
void FUN_180443930(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_1 != 0) {
    FUN_1802f4040(param_1,&uStack_48,param_2,0);
    if (param_5 != '\0') {
      *param_3 = uStack_48;
      param_3[1] = uStack_40;
      *param_4 = uStack_38;
      param_4[1] = uStack_30;
      return;
    }
    FUN_18063a7b0(&uStack_48,param_1 + 0x70,param_3,param_4);
  }
  return;
}





// 函数: void FUN_1804439b0(longlong param_1,undefined4 param_2)
void FUN_1804439b0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  *(char *)(param_1 + 0x2e6) = (char)param_2;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1804439b0(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + uVar1),param_2);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}





// 函数: void FUN_1804439e4(void)
void FUN_1804439e4(void)

{
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_1804439b0(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x1c0) + uVar1),unaff_EBP);
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}





// 函数: void FUN_180443a27(void)
void FUN_180443a27(void)

{
  return;
}



longlong * FUN_180443a40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



undefined8 * FUN_180443aa0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443b00(void)
void FUN_180443b00(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_278 [96];
  undefined8 uStack_218;
  int aiStack_1d0 [2];
  undefined1 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined4 uStack_190;
  undefined1 auStack_18c [4];
  longlong *plStack_188;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 auStack_138 [7];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined auStack_b0 [128];
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  puVar2 = (undefined8 *)*_DAT_180c8a9e0;
  if (puVar2 != (undefined8 *)0x0) {
    *_DAT_180c8a9e0 = 0;
    uStack_30 = 0x180443b24;
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = _DAT_180c8a9e0;
  uStack_218 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  lVar5 = (longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 +
          *(longlong *)(_DAT_180c86938 + 0x1d20);
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(undefined4 *)(lVar5 + 0x20);
  puVar6 = *(undefined **)(lVar5 + 0x18);
  puVar7 = &DAT_18098bc73;
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
  }
  strcpy_s(auStack_b0,0x80,puVar7);
  puVar6 = &DAT_18098bc73;
  if (puStack_c0 != (undefined *)0x0) {
    puVar6 = puStack_c0;
  }
  lVar5 = strstr(puVar6,&UNK_180a0a7b8);
  if (lVar5 != 0) {
    uStack_168 = 0;
    uStack_160 = 0xf;
    auStack_178[0] = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_198 = auStack_138;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0xf;
    uStack_e8 = 0;
    lVar5 = -1;
    do {
      pcVar1 = &UNK_1809fd0f9 + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    FUN_1800671b0(auStack_178,&DAT_1809fd0f8);
    uStack_140 = 1;
    puStack_198 = (undefined8 *)0x100000000;
    uStack_190 = 2;
    FUN_180189600(&uStack_158,&puStack_198,auStack_18c);
    puStack_198 = (undefined8 *)&UNK_180186550;
    plStack_188 = plVar3;
    FUN_180188620(auStack_138,&puStack_198);
    uStack_1b8 = 0;
    uStack_1b0 = 0xf;
    uStack_1c8 = 0;
    puStack_198 = &uStack_1a8;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = FUN_180188560();
    FUN_180183a20(auStack_178,aiStack_1d0);
    if (-1 < aiStack_1d0[0]) {
      uVar4 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a0a800,uVar4);
    }
    uVar4 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a0a890,uVar4);
  }
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_278);
}





// 函数: void FUN_180443b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180443b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [48];
  
  FUN_180627910(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1801865a0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443b80(undefined8 param_1,undefined1 param_2)
void FUN_180443b80(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  longlong lStack_98;
  undefined **ppuStack_68;
  undefined *apuStack_60 [4];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  ulonglong uStack_18;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  ppuStack_b8 = apuStack_60;
  puVar3 = (undefined8 *)FUN_180627910(apuStack_60,param_1);
  lVar2 = _DAT_180c8a9e0;
  puStack_a8 = puVar3;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *puVar3 = &UNK_180a3c3e0;
    if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0xf;
    auStack_40[0] = 0;
    puVar4 = &DAT_18098bc73;
    if ((undefined *)puVar3[1] != (undefined *)0x0) {
      puVar4 = (undefined *)puVar3[1];
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar4[lVar5] != '\0');
    FUN_1800671b0(auStack_40);
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_b8 = &puStack_a0;
    puStack_a0 = &UNK_180a0ac18;
    lStack_98 = lVar2;
    ppuStack_68 = &puStack_a0;
    uStack_20 = param_2;
    (**(code **)(*plVar1 + 0x20))(plVar1,auStack_40,&puStack_a0,0);
    FUN_180067070(auStack_40);
    *puVar3 = &UNK_180a3c3e0;
    if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
  }
  *puVar3 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_180443d10(undefined8 param_1)
void FUN_180443d10(undefined8 param_1)

{
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [40];
  
  FUN_180627910(auStack_50);
  FUN_180627910(auStack_30,param_1);
  FUN_180186880();
  return;
}





// 函数: void FUN_180443d70(undefined8 param_1)
void FUN_180443d70(undefined8 param_1)

{
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [40];
  
  FUN_180627910(auStack_50);
  FUN_180627910(auStack_30,param_1);
  FUN_180186ac0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180443df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  uVar11 = 0xfffffffffffffffe;
  plVar12 = (longlong *)0x0;
  plVar13 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  lVar4 = strtok(0,&UNK_180a2a43c,param_3,param_4,0xfffffffffffffffe,0,0,0,3);
  plVar7 = plVar8;
  plVar9 = plVar8;
  uVar2 = extraout_XMM0_Da;
  plVar3 = plVar12;
  plVar1 = plVar13;
  do {
    if (lVar4 == 0) {
      FUN_180186ca0(uVar2,plVar3,(longlong)plVar7 - (longlong)plVar3 >> 3,param_4,uVar11,plVar12,
                    plVar13,plVar14);
      if (plVar3 == (longlong *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar3);
    }
    if (plVar7 < plVar9) {
      *plVar1 = lVar4;
      plVar5 = plVar3;
    }
    else {
      lVar6 = (longlong)plVar7 - (longlong)plVar3 >> 3;
      lVar10 = lVar6 * 2;
      if (lVar6 == 0) {
        lVar10 = 1;
      }
      plVar5 = plVar8;
      if (lVar10 != 0) {
        plVar5 = (longlong *)
                 FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,CONCAT71((int7)((ulonglong)plVar7 >> 8),3))
        ;
      }
      if (plVar3 != plVar7) {
                    // WARNING: Subroutine does not return
        memmove(plVar5,plVar3,(longlong)plVar7 - (longlong)plVar3);
      }
      *plVar5 = lVar4;
      if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar3);
      }
      plVar9 = plVar5 + lVar10;
      plVar12 = plVar5;
      plVar14 = plVar9;
      plVar1 = plVar5;
    }
    plVar7 = plVar1 + 1;
    plVar13 = plVar7;
    lVar4 = strtok(0,&UNK_180a2a43c);
    uVar2 = extraout_XMM0_Da_00;
    plVar3 = plVar5;
    plVar1 = plVar7;
  } while( true );
}





// 函数: void FUN_180443f80(undefined8 param_1)
void FUN_180443f80(undefined8 param_1)

{
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [40];
  
  FUN_180627910(auStack_50);
  FUN_180627910(auStack_30,param_1);
  FUN_180186eb0();
  return;
}





// 函数: void FUN_180443ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180443ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [48];
  
  FUN_180627910(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1801871f0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444030(void)
void FUN_180444030(void)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(0x180c91970);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  _DAT_180c8a9b0 = *(undefined8 *)*_DAT_180c86960;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444070(undefined8 param_1,undefined8 *param_2)
void FUN_180444070(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  lVar3 = _DAT_180c8a9b0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uStack_28 = 0;
  uStack_24 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16c8);
  uStack_20 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16cc);
  uStack_1c = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d0);
  uStack_18 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d4);
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_28);
  *(undefined8 *)(lVar3 + 0x16c8) = uVar1;
  *(undefined8 *)(lVar3 + 0x16d0) = uVar2;
  return;
}





// 函数: void FUN_180444100(void)
void FUN_180444100(void)

{
  int iVar1;
  
  iVar1 = _Mtx_unlock(0x180c91970);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018044411b. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_180444200(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_180444200(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  uStack_10 = param_10;
  uStack_18 = param_2;
  FUN_18011a0a0(param_6,param_1,param_3,&uStack_18,param_3,param_4,param_5,param_6,param_7,
                CONCAT44(param_9,param_8));
  return;
}





// 函数: void FUN_180444280(undefined8 param_1)
void FUN_180444280(undefined8 param_1)

{
  undefined4 uStackX_10;
  undefined4 uStackX_14;
  
  uStackX_10 = 0xbf800000;
  uStackX_14 = 0;
  FUN_180111c30(param_1,&uStackX_10);
  return;
}





// 函数: void FUN_1804442c0(undefined8 param_1)
void FUN_1804442c0(undefined8 param_1)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = 0;
  FUN_18010f6f0(param_1,auStackX_10,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804442e0(void)
void FUN_1804442e0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong alStackX_8 [4];
  
  lVar1 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar2 = *(longlong *)(lVar1 + 0x1af8);
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    uVar3 = *(undefined4 *)(lVar2 + 0x1a0);
    *(undefined4 *)(lVar2 + 0x1a0) = 1;
    if (*(float *)(lVar2 + 0x124) <= 0.0) {
      alStackX_8[0] = (ulonglong)*(uint *)(lVar1 + 0x19f8) << 0x20;
    }
    else {
      alStackX_8[0] = 0;
    }
    func_0x000180124080(alStackX_8);
    *(undefined4 *)(lVar2 + 0x1a0) = uVar3;
  }
  return;
}





// 函数: void FUN_180444370(undefined8 param_1,undefined8 param_2,char *param_3)
void FUN_180444370(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_3[lVar2] != '\0');
    param_3 = param_3 + lVar3 + 2;
    cVar1 = *param_3;
  }
  FUN_180113380();
  return;
}





// 函数: void FUN_1804443c0(undefined8 param_1,undefined8 param_2)
void FUN_1804443c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  
  auStackX_18[0] = 100;
  auStackX_20[0] = 1;
  FUN_180114450(param_1,0,param_2,auStackX_20,auStackX_18,&UNK_1809fd0a0,0);
  return;
}





// 函数: void FUN_180444410(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)
void FUN_180444410(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  
  auStackX_18[0] = param_4;
  auStackX_20[0] = param_3;
  FUN_180113940(param_1,param_2,param_2,auStackX_20,auStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804445b0(undefined8 param_1)
void FUN_1804445b0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 auStackX_10 [3];
  
  lVar2 = _DAT_180c8a9b0;
  auStackX_10[0] = 0;
  uVar1 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1660);
  *(undefined4 *)(_DAT_180c8a9b0 + 0x1660) = 0;
  FUN_18010f6f0(param_1,auStackX_10,0x200);
  *(undefined4 *)(lVar2 + 0x1660) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444600(undefined8 param_1,undefined8 param_2,float param_3,float param_4,int param_5)
void FUN_180444600(undefined8 param_1,undefined8 param_2,float param_3,float param_4,int param_5)

{
  float *pfVar1;
  undefined1 auStack_98 [32];
  float *pfStack_78;
  undefined2 *puStack_70;
  undefined4 uStack_68;
  float afStack_58 [2];
  float afStack_50 [2];
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined8 uStack_45;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uStack_48 = 0x6625;
  uStack_46 = 0;
  uStack_45 = 0;
  uStack_3d = 0;
  uStack_39 = 0;
  if (-1 < param_5) {
    FUN_180121200(&uStack_48,0x10,&UNK_180a063b8);
  }
  uStack_68 = 0x20000;
  pfStack_78 = afStack_58;
  if (param_4 <= 0.0) {
    pfStack_78 = (float *)0x0;
  }
  pfVar1 = afStack_50;
  if (param_3 <= 0.0) {
    pfVar1 = (float *)0x0;
  }
  puStack_70 = &uStack_48;
  afStack_58[0] = param_4;
  afStack_50[0] = param_3;
  FUN_180114450(param_1,4,param_2,pfVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444700(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)
void FUN_180444700(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined1 auStack_78 [48];
  undefined2 *puStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined8 uStack_2d;
  undefined4 uStack_25;
  undefined1 uStack_21;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  uStack_38 = *param_2;
  uStack_34 = *param_3;
  uStack_30 = 0x6625;
  uStack_2e = 0;
  uStack_2d = 0;
  uStack_25 = 0;
  uStack_21 = 0;
  if (-1 < param_4) {
    FUN_180121200(&uStack_30,0x10,&UNK_180a063b8);
  }
  puStack_48 = &uStack_30;
  FUN_180114890(param_1);
  *param_2 = uStack_38;
  *param_3 = uStack_34;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804447c0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
void FUN_1804447c0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5)

{
  undefined1 auStack_98 [48];
  undefined2 *puStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined8 uStack_45;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uStack_58 = *param_2;
  uStack_54 = *param_3;
  uStack_48 = 0x6625;
  uStack_46 = 0;
  uStack_50 = *param_4;
  uStack_45 = 0;
  uStack_3d = 0;
  uStack_39 = 0;
  if (-1 < param_5) {
    FUN_180121200(&uStack_48,0x10,&UNK_180a063b8);
  }
  puStack_68 = &uStack_48;
  FUN_180114890(param_1);
  *param_2 = uStack_58;
  *param_3 = uStack_54;
  *param_4 = uStack_50;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804448a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
void FUN_1804448a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6)

{
  undefined1 auStack_98 [48];
  undefined2 *puStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined8 uStack_45;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uStack_58 = *param_2;
  uStack_54 = *param_3;
  uStack_48 = 0x6625;
  uStack_46 = 0;
  uStack_50 = *param_4;
  uStack_4c = *param_5;
  uStack_45 = 0;
  uStack_3d = 0;
  uStack_39 = 0;
  if (-1 < param_6) {
    FUN_180121200(&uStack_48,0x10,&UNK_180a063b8);
  }
  puStack_68 = &uStack_48;
  FUN_180114890(param_1);
  *param_2 = uStack_58;
  *param_3 = uStack_54;
  *param_4 = uStack_50;
  *param_5 = uStack_4c;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1804449a0(void)

{
  float fVar1;
  
  fVar1 = (float)expf(*(float *)(_DAT_180c86920 + 0x16c0) * 4.0);
  return fVar1 * 0.05;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444a20(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
void FUN_180444a20(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_168 [32];
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 auStack_144 [268];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  uStack_148 = (undefined1)param_3;
  uStack_147 = param_6;
                    // WARNING: Subroutine does not return
  memcpy(auStack_144,param_1,(longlong)param_3 << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)
void FUN_180444b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 in_stack_00000040;
  undefined1 auStack_1f8 [32];
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined1 auStack_1d4 [396];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  uStack_1d8 = (undefined1)param_4;
  uStack_1d7 = in_stack_00000040;
                    // WARNING: Subroutine does not return
  memcpy(auStack_1d4,param_1,(longlong)param_4 << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)
void FUN_180444dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)

{
  longlong lVar1;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  lVar1 = *(longlong *)(_DAT_180c868d0 + 0x2018);
  uStack_18._0_2_ = CONCAT11(param_2,param_1);
  uStack_18 = CONCAT13(param_4,CONCAT12(param_3,(undefined2)uStack_18));
  uStack_14 = CONCAT11(param_6,param_5);
  if ((*(int *)(lVar1 + 799) != uStack_18) || (*(short *)(lVar1 + 0x323) != uStack_14)) {
    *(int *)(lVar1 + 799) = uStack_18;
    *(short *)(lVar1 + 0x323) = uStack_14;
    *(undefined2 *)(lVar1 + 0x194) = 0;
    if (((param_1 == '\0') && (((param_2 == '\0' && (param_3 == '\0')) && (param_4 == '\0')))) &&
       ((param_5 == '\0' && (param_6 == '\0')))) {
      *(undefined1 *)(lVar1 + 0x192) = 0;
      return;
    }
    *(undefined1 *)(lVar1 + 0x192) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444e90(float param_1,float param_2,float param_3)
void FUN_180444e90(float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined1 uStackX_8;
  undefined1 uStackX_9;
  undefined1 uStackX_a;
  
  if (0.0 <= param_1) {
    if (1.0 <= param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if (0.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  fVar1 = 0.0;
  if ((0.0 <= param_3) && (fVar1 = param_3, 1.0 <= param_3)) {
    fVar1 = 1.0;
  }
  uStackX_8 = (undefined1)(int)(param_1 * 256.0);
  uStackX_9 = (undefined1)(int)(param_2 * 256.0);
  uStackX_a = (undefined1)(int)(fVar1 * 256.0);
  FUN_1808eea10(*(undefined4 *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 0x32c),&uStackX_8);
  return;
}



undefined8 FUN_180445060(ulonglong param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (uVar2 < 0x100) {
    if (uVar2 - 0xe0 < 5) {
      if (uVar2 == 0xe0) {
        param_1 = 1;
      }
      else if (uVar2 == 0xe1) {
        param_1 = 2;
      }
      else if (uVar2 == 0xe2) {
        param_1 = 4;
      }
      else if (uVar2 == 0xe3) {
        param_1 = 5;
      }
      else if (uVar2 == 0xe4) {
        param_1 = 6;
      }
    }
    else {
      uVar2 = FUN_1803f5970(param_1,param_1 & 0xffffffff);
      param_1 = (ulonglong)uVar2;
    }
    sVar1 = GetAsyncKeyState(param_1);
    if (sVar1 != 0) {
      return 1;
    }
  }
  return 0;
}





// 函数: void FUN_180445110(uint param_1)
void FUN_180445110(uint param_1)

{
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined8 uStack_10;
  
  if (param_1 < 0x100) {
    uStack_10 = 0;
    uStack_18 = 4;
    uStack_14 = (undefined1)param_1;
    FUN_1801edeb0(param_1,&uStack_18);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_180445180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puStack_30;
  longlong lStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  FUN_1801717e0(*(undefined8 *)(_DAT_180c86870 + 8),&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x78))(_DAT_180c8f008,&puStack_30);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_180445390(undefined4 *param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x468,8,3,0xfffffffffffffffe);
  plVar4 = (longlong *)FUN_1803dd0f0(uVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  if (param_2 != *(float *)(plVar4 + 6)) {
    *(undefined1 *)(plVar4 + 0x7d) = 0;
    *(undefined1 *)((longlong)plVar4 + 0x3a1) = 1;
    *(float *)(plVar4 + 6) = param_2;
    lVar1 = plVar4[5];
    if (lVar1 != 0) {
      *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
      if (*(longlong *)(lVar1 + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uStack_30 = SUB84(plVar4,0);
  uStack_2c = (undefined4)((ulonglong)plVar4 >> 0x20);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  param_1[2] = uVar2;
  param_1[3] = uStack_24;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return param_1;
}





// 函数: void FUN_180445480(undefined8 *param_1,undefined8 *param_2)
void FUN_180445480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((undefined *)*param_1 == &UNK_180a249c0) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = (undefined8 *)(**(code **)((undefined *)*param_1 + 0x158))();
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  uVar1 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar1;
  return;
}





