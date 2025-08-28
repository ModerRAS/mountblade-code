#include "TaleWorlds.Native.Split.h"

// 03_rendering_part103.c - 8 个函数

// 函数: void FUN_18032afa0(longlong param_1,longlong *param_2,ulonglong param_3)
void FUN_18032afa0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong *****ppppplVar2;
  longlong ****pppplVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *****ppppplVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStackX_18 [4];
  longlong alStack_70 [3];
  longlong ****pppplStack_58;
  longlong ****pppplStack_50;
  longlong ****pppplStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  auStackX_18[0] = (undefined4)param_3;
  FUN_18033af10(param_1 + 0x638,alStack_70,param_3,auStackX_18,param_3 & 0xffffffff);
  uStack_30 = *(undefined4 *)(alStack_70[0] + 0x30);
  pppplStack_58 = (longlong ****)&pppplStack_58;
  pppplStack_50 = (longlong ****)&pppplStack_58;
  pppplStack_48 = (longlong ****)0x0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(longlong *)(alStack_70[0] + 0x18) != 0) {
    pppplStack_48 =
         (longlong ****)
         FUN_18033c420(&pppplStack_58,*(longlong *)(alStack_70[0] + 0x18),&pppplStack_58);
    ppppplVar6 = (longlong *****)*pppplStack_48;
    pppplStack_58 = (longlong ****)(longlong *****)pppplStack_48;
    while (ppppplVar2 = ppppplVar6, ppppplVar2 != (longlong *****)0x0) {
      pppplStack_58 = (longlong ****)ppppplVar2;
      ppppplVar6 = (longlong *****)*ppppplVar2;
    }
    ppppplVar6 = (longlong *****)((longlong *****)pppplStack_48)[1];
    pppplStack_50 = (longlong ****)(longlong *****)pppplStack_48;
    while (ppppplVar2 = ppppplVar6, ppppplVar2 != (longlong *****)0x0) {
      pppplStack_50 = (longlong ****)ppppplVar2;
      ppppplVar6 = (longlong *****)ppppplVar2[1];
    }
    uStack_38 = *(undefined8 *)(alStack_70[0] + 0x28);
  }
  ppppplVar6 = (longlong *****)pppplStack_50;
  if ((longlong *****)pppplStack_50 != &pppplStack_58) {
    do {
      uVar1 = *(undefined4 *)(ppppplVar6 + 4);
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 < (undefined4 *)param_2[2]) {
        param_2[1] = (longlong)(puVar8 + 1);
        *puVar8 = uVar1;
      }
      else {
        puVar7 = (undefined4 *)*param_2;
        lVar4 = (longlong)puVar8 - (longlong)puVar7 >> 2;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18032b0f4:
          puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,(char)param_2[3]);
          puVar8 = (undefined4 *)param_2[1];
          puVar7 = (undefined4 *)*param_2;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18032b0f4;
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar7,(longlong)puVar8 - (longlong)puVar7);
        }
        *puVar5 = uVar1;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_2 = (longlong)puVar5;
        param_2[1] = (longlong)(puVar5 + 1);
        param_2[2] = (longlong)(puVar5 + lVar4);
      }
      ppppplVar6 = (longlong *****)func_0x00018066bd70(ppppplVar6);
    } while (ppppplVar6 != &pppplStack_58);
  }
  pppplVar3 = pppplStack_48;
  if ((longlong *****)pppplStack_48 != (longlong *****)0x0) {
    FUN_18004b790(&pppplStack_58,*pppplStack_48);
                    // WARNING: Subroutine does not return
    FUN_18064e900(pppplVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032b1c0(longlong param_1,longlong *param_2,ulonglong param_3,char param_4)
void FUN_18032b1c0(longlong param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 ***pppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint auStackX_18 [4];
  longlong alStack_80 [3];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  auStackX_18[0] = (uint)param_3;
  uVar9 = param_3 & 0xffffffff;
  FUN_18033af10(param_1 + 0x4a8,alStack_80,param_3,auStackX_18,uVar9);
  uStack_40 = *(undefined4 *)(alStack_80[0] + 0x30);
  ppuStack_68 = &ppuStack_68;
  ppuStack_60 = &ppuStack_68;
  ppuStack_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(longlong *)(alStack_80[0] + 0x18) != 0) {
    ppuStack_58 = (undefined8 **)
                  FUN_18033c420(&ppuStack_68,*(longlong *)(alStack_80[0] + 0x18),&ppuStack_68);
    pppuVar6 = (undefined8 ***)*ppuStack_58;
    ppuStack_68 = (undefined8 ***)ppuStack_58;
    while (pppuVar2 = pppuVar6, pppuVar2 != (undefined8 ***)0x0) {
      ppuStack_68 = pppuVar2;
      pppuVar6 = (undefined8 ***)*pppuVar2;
    }
    pppuVar6 = (undefined8 ***)((undefined8 ***)ppuStack_58)[1];
    ppuStack_60 = (undefined8 ***)ppuStack_58;
    while (pppuVar2 = pppuVar6, pppuVar2 != (undefined8 ***)0x0) {
      ppuStack_60 = pppuVar2;
      pppuVar6 = (undefined8 ***)pppuVar2[1];
    }
    uStack_48 = *(undefined8 *)(alStack_80[0] + 0x28);
  }
  pppuVar6 = (undefined8 ***)ppuStack_60;
  if ((undefined8 ***)ppuStack_60 != &ppuStack_68) {
    do {
      uVar1 = *(undefined4 *)(pppuVar6 + 4);
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 < (undefined4 *)param_2[2]) {
        param_2[1] = (longlong)(puVar8 + 1);
        *puVar8 = uVar1;
      }
      else {
        puVar7 = (undefined4 *)*param_2;
        lVar4 = (longlong)puVar8 - (longlong)puVar7 >> 2;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18032b314:
          puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,(char)param_2[3]);
          puVar8 = (undefined4 *)param_2[1];
          puVar7 = (undefined4 *)*param_2;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18032b314;
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar7,(longlong)puVar8 - (longlong)puVar7);
        }
        *puVar5 = uVar1;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_2 = (longlong)puVar5;
        param_2[1] = (longlong)(puVar5 + 1);
        param_2[2] = (longlong)(puVar5 + lVar4);
        uVar9 = (ulonglong)auStackX_18[0];
      }
      if (param_4 != '\0') {
        FUN_18032b400(param_1,param_2,uVar9,uVar1);
      }
      pppuVar6 = (undefined8 ***)func_0x00018066bd70(pppuVar6);
    } while (pppuVar6 != &ppuStack_68);
  }
  ppuVar3 = ppuStack_58;
  if ((undefined8 ***)ppuStack_58 == (undefined8 ***)0x0) {
    return;
  }
  FUN_18004b790(&ppuStack_68,*ppuStack_58);
                    // WARNING: Subroutine does not return
  FUN_18064e900(ppuVar3);
}





// 函数: void FUN_18032b400(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)
void FUN_18032b400(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = FUN_18032ba60(param_1,param_4);
  FUN_18033c870(param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(lVar1 + 0x170),
                *(undefined8 *)(lVar1 + 0x178));
  uVar2 = *(longlong *)(lVar1 + 0x178) - *(longlong *)(lVar1 + 0x170) >> 2;
  if ((int)uVar2 != 0) {
    lVar3 = 0;
    uVar2 = uVar2 & 0xffffffff;
    do {
      FUN_18032b400(param_1,param_2,param_3,*(undefined4 *)(*(longlong *)(lVar1 + 0x170) + lVar3));
      lVar3 = lVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_18032b452(void)
void FUN_18032b452(void)

{
  uint in_EAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)in_EAX;
  do {
    FUN_18032b400();
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}





// 函数: void FUN_18032b48d(void)
void FUN_18032b48d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18032b4a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  char acStackX_8 [4];
  uint uStackX_c;
  longlong lStackX_10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_34;
  
  lVar1 = param_1 + 0x358;
  lStackX_10 = lVar1;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _DAT_180d48e20;
  uVar7 = param_2 % (ulonglong)*(uint *)(param_1 + 0x338);
  lVar2 = *(longlong *)(param_1 + 0x330);
  puVar3 = *(ulonglong **)(lVar2 + uVar7 * 8);
  for (puVar5 = puVar3; puVar5 != (ulonglong *)0x0; puVar5 = (ulonglong *)puVar5[2]) {
    if (param_2 == *puVar5) {
      lVar6 = *(longlong *)(param_1 + 0x338);
      goto LAB_18032b522;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x338);
  puVar5 = *(ulonglong **)(lVar2 + lVar6 * 8);
LAB_18032b522:
  if (puVar5 == *(ulonglong **)(lVar2 + lVar6 * 8)) {
    _DAT_180d48e20 = _DAT_180d48e20 + 1;
    for (puVar5 = puVar3; puVar5 != (ulonglong *)0x0; puVar5 = (ulonglong *)puVar5[2]) {
      if (param_2 == *puVar5) {
        if (puVar5 != (ulonglong *)0x0) goto LAB_18032b629;
        break;
      }
    }
    puVar5 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x354));
    uStack_40 = (undefined4)param_2;
    uStack_3c = (undefined4)(param_2 >> 0x20);
    *(undefined4 *)puVar5 = uStack_40;
    *(undefined4 *)((longlong)puVar5 + 4) = uStack_3c;
    *(int *)(puVar5 + 1) = iVar4;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_34;
    puVar5[2] = 0;
    FUN_18066c220(param_1 + 0x348,acStackX_8,*(undefined4 *)(param_1 + 0x338),
                  *(undefined4 *)(param_1 + 0x340),1);
    if (acStackX_8[0] != '\0') {
      uVar7 = param_2 % (ulonglong)uStackX_c;
      FUN_18033db70(param_1 + 0x328,(ulonglong)uStackX_c);
    }
    puVar5[2] = *(ulonglong *)(*(longlong *)(param_1 + 0x330) + uVar7 * 8);
    *(ulonglong **)(*(longlong *)(param_1 + 0x330) + uVar7 * 8) = puVar5;
    *(longlong *)(param_1 + 0x340) = *(longlong *)(param_1 + 0x340) + 1;
  }
LAB_18032b629:
  uVar7 = puVar5[1];
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return (int)uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18032b680(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char acStackX_8 [4];
  uint uStackX_c;
  undefined8 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  uVar7 = (ulonglong)param_2;
  iVar2 = _Mtx_lock(param_1 + 0xa20);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x9f8);
  for (puVar5 = *(uint **)(lVar1 + (uVar7 % (ulonglong)*(uint *)(param_1 + 0xa00)) * 8);
      puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
    if (param_2 == *puVar5) {
      lVar3 = *(longlong *)(param_1 + 0xa00);
      goto LAB_18032b6ff;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xa00);
  puVar5 = *(uint **)(lVar1 + lVar3 * 8);
LAB_18032b6ff:
  if (puVar5 == *(uint **)(lVar1 + lVar3 * 8)) {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
    uVar4 = FUN_18033ac00(uVar4);
    uVar6 = uVar7 % (ulonglong)*(uint *)(param_1 + 0xa00);
    for (puVar5 = *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar6 * 8); puVar5 != (uint *)0x0;
        puVar5 = *(uint **)(puVar5 + 4)) {
      if (param_2 == *puVar5) {
        if (puVar5 != (uint *)0x0) goto LAB_18032b82c;
        break;
      }
    }
    puVar5 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0xa1c));
    uStack_38 = (uint)uVar4;
    uStack_34 = (uint)((ulonglong)uVar4 >> 0x20);
    *puVar5 = param_2;
    puVar5[1] = uStack_3c;
    puVar5[2] = uStack_38;
    puVar5[3] = uStack_34;
    puVar5[4] = 0;
    puVar5[5] = 0;
    FUN_18066c220(param_1 + 0xa10,acStackX_8,*(undefined4 *)(param_1 + 0xa00),
                  *(undefined4 *)(param_1 + 0xa08),1);
    if (acStackX_8[0] != '\0') {
      uVar6 = uVar7 % (ulonglong)uStackX_c;
      FUN_18033bf30(param_1 + 0x9f0,(ulonglong)uStackX_c);
    }
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 0x9f8) + uVar6 * 8);
    *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar6 * 8) = puVar5;
    *(longlong *)(param_1 + 0xa08) = *(longlong *)(param_1 + 0xa08) + 1;
  }
LAB_18032b82c:
  uVar4 = *(undefined8 *)(puVar5 + 2);
  iVar2 = _Mtx_unlock(param_1 + 0xa20);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18032b880(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d496d0) && (FUN_1808fcb90(&DAT_180d496d0), _DAT_180d496d0 == -1)) {
    _DAT_180d49730 = &UNK_1809fcc58;
    _DAT_180d49738 = &DAT_180d49748;
    _DAT_180d49740 = 0;


// 函数: void FUN_18032c0b0(longlong param_1,undefined8 param_2)
void FUN_18032c0b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 auStackX_8 [8];
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined *puStack_68;
  longlong lStack_60;
  undefined4 uStack_50;
  
  uStackX_18 = *(undefined8 *)(param_1 + 0x160);
  uStackX_10 = param_2;
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  lVar2 = FUN_180334500(param_1,&puStack_68);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(lVar2 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar2 + 8);
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_18062dee0(puVar1,puVar4,&UNK_180a0cf4c);
  puStack_68 = &UNK_180a3c3e0;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_60 = 0;
  uStack_50 = 0;
  puStack_68 = &UNK_18098bcb0;
  _fseeki64(puVar1[1],0,0);
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  FUN_18064e990(puVar3);
  *puVar3 = 0x655679616c706552;
  *(undefined4 *)(puVar3 + 1) = 0x6f697372;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x6e;
  fwrite(puVar3,0xd,1,puVar1[1]);
  auStackX_8[0] = 1;
  fwrite(auStackX_8,1,1,puVar1[1]);
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032c450(longlong param_1,longlong param_2)
void FUN_18032c450(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int aiStackX_8 [2];
  undefined8 uStackX_10;
  char acStackX_18 [4];
  uint uStackX_1c;
  longlong lStackX_20;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  
  FUN_18033ae70(param_1 + 0x4a8);
  FUN_18033ad00(param_1 + 0x9f0);
  FUN_18033ad00(param_1 + 0x568);
  FUN_18033ae70(param_1 + 0x638);
  FUN_18033ad00(param_1 + 0x6b8);
  lVar4 = param_1 + 0x848;
  FUN_180179f00(lVar4,*(undefined8 *)(param_1 + 0x858));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x850) = lVar4;
  iVar12 = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined1 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  lVar4 = param_1 + 0x958;
  puVar3 = *(undefined8 **)(param_1 + 0x968);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004b790(lVar4,*puVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x960) = lVar4;
  *(undefined8 *)(param_1 + 0x968) = 0;
  *(undefined1 *)(param_1 + 0x970) = 0;
  *(undefined8 *)(param_1 + 0x978) = 0;
  lVar4 = param_1 + 0x8d8;
  FUN_180179f00(lVar4,*(undefined8 *)(param_1 + 0x8e8));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x8e0) = lVar4;
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  lVar4 = param_1 + 0x8a8;
  FUN_180179f00(lVar4,*(undefined8 *)(param_1 + 0x8b8));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x8b0) = lVar4;
  *(undefined8 *)(param_1 + 0x8b8) = 0;
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  lVar4 = param_1 + 0x878;
  FUN_180179f00(lVar4,*(undefined8 *)(param_1 + 0x888));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x880) = lVar4;
  *(undefined8 *)(param_1 + 0x888) = 0;
  *(undefined1 *)(param_1 + 0x890) = 0;
  *(undefined8 *)(param_1 + 0x898) = 0;
  lVar4 = param_1 + 0x3d8;
  lStackX_20 = lVar4;
  iVar2 = _Mtx_lock(lVar4);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_18033ad00(param_1 + 0x3a8);
  iVar2 = _Mtx_unlock(lVar4);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puVar1 = (ulonglong *)(param_1 + 0x260);
  *(ulonglong *)(param_1 + 0x268) = *puVar1;
  puVar8 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar8 = *(undefined **)(param_2 + 8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x208) + 0x10))((longlong *)(param_1 + 0x208),puVar8);
  FUN_180334500(param_1,auStack_80);
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar8 = &DAT_18098bc73;
  if (puStack_78 != (undefined *)0x0) {
    puVar8 = puStack_78;
  }
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  FUN_18062dee0(puVar3,puVar8,&UNK_180a01ff0);
  if (puVar3[1] == 0) {
    FUN_180626f80(&UNK_180a1b150);
    if (puVar3[1] != 0) {
      fclose();
      puVar3[1] = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  FUN_1803345c0(param_1,puVar3);
  fread(param_1 + 0x160,8,1,puVar3[1]);
  FUN_1800e8140(puVar1,*(longlong *)(param_1 + 0x160) + 1);
  uVar7 = *(ulonglong *)(param_1 + 0x160);
  if (uVar7 != 0) {
    do {
      fread(&uStackX_10,8,1,puVar3[1]);
      puVar10 = *(undefined8 **)(param_1 + 0x268);
      if (puVar10 < *(undefined8 **)(param_1 + 0x270)) {
        *(undefined8 **)(param_1 + 0x268) = puVar10 + 1;
        *puVar10 = uStackX_10;
      }
      else {
        puVar9 = (undefined8 *)*puVar1;
        lVar4 = (longlong)puVar10 - (longlong)puVar9 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18032c711:
          puVar5 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(undefined1 *)(param_1 + 0x278));
          puVar10 = *(undefined8 **)(param_1 + 0x268);
          puVar9 = (undefined8 *)*puVar1;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18032c711;
          puVar5 = (undefined8 *)0x0;
        }
        if (puVar9 != puVar10) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar9,(longlong)puVar10 - (longlong)puVar9);
        }
        *puVar5 = uStackX_10;
        if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar1 = (ulonglong)puVar5;
        *(undefined8 **)(param_1 + 0x268) = puVar5 + 1;
        *(undefined8 **)(param_1 + 0x270) = puVar5 + lVar4;
      }
      iVar12 = iVar12 + 1;
      uVar7 = *(ulonglong *)(param_1 + 0x160);
    } while ((ulonglong)(longlong)iVar12 < uVar7);
  }
  uVar11 = 0;
  if (uVar7 != 0) {
    do {
      fread(aiStackX_8,4,1,puVar3[1]);
      iVar12 = aiStackX_8[0];
      iVar2 = (int)uVar11;
      uVar7 = uVar11 % (ulonglong)*(uint *)(param_1 + 0x998);
      for (piVar6 = *(int **)(*(longlong *)(param_1 + 0x990) + uVar7 * 8); piVar6 != (int *)0x0;
          piVar6 = *(int **)(piVar6 + 2)) {
        if (iVar2 == *piVar6) {
          if (piVar6 != (int *)0x0) goto LAB_18032c882;
          break;
        }
      }
      FUN_18066c220(param_1 + 0x9a8,acStackX_18,(ulonglong)*(uint *)(param_1 + 0x998),
                    *(undefined4 *)(param_1 + 0x9a0),1);
      piVar6 = (int *)FUN_18062b420(_DAT_180c8ed18,0x10,*(undefined1 *)(param_1 + 0x9b4));
      *piVar6 = iVar2;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      if (acStackX_18[0] != '\0') {
        uVar7 = uVar11 % (ulonglong)uStackX_1c;
        FUN_18033c010(param_1 + 0x988,uStackX_1c);
      }
      *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(*(longlong *)(param_1 + 0x990) + uVar7 * 8);
      *(int **)(*(longlong *)(param_1 + 0x990) + uVar7 * 8) = piVar6;
      *(longlong *)(param_1 + 0x9a0) = *(longlong *)(param_1 + 0x9a0) + 1;
LAB_18032c882:
      piVar6[1] = iVar12;
      uVar11 = (ulonglong)(iVar2 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar2 + 1U) < *(ulonglong *)(param_1 + 0x160));
  }
  FUN_18032f540(param_1,puVar3,param_1 + 0x208);
  FUN_18032f990(param_1,puVar3,param_1 + 0x208);
  FUN_18032ffc0(param_1,puVar3,param_1 + 0x208);
  FUN_1803304e0(param_1,puVar3,param_1 + 0x208);
  FUN_180330ab0(param_1,puVar3,param_1 + 0x208);
  FUN_180335590(param_1,puVar3);
  FUN_180335f10(param_1,puVar3);
  FUN_180336540(param_1,puVar3);
  if (puVar3[1] != 0) {
    fclose();
    puVar3[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    if (puVar3[1] != 0) {
      fclose();
      puVar3[1] = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032c9f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)
void FUN_18032c9f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  int aiStack_b8 [2];
  longlong lStack_b0;
  uint *puStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  undefined8 *puStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  _fseeki64(*(undefined8 *)(param_2 + 8),param_3,0);
  lStack_b0 = 0;
  puStack_a8 = (uint *)0x0;
  lStack_a0 = 0;
  uStack_98 = 3;
  FUN_18032b1c0(param_1,&lStack_b0,param_4,0);
  aiStack_b8[0] = (int)((longlong)puStack_a8 - lStack_b0 >> 2);
  fwrite(aiStack_b8,4,1,*(undefined8 *)(param_2 + 8));
  if (0 < aiStack_b8[0]) {
    fwrite(lStack_b0,4,(longlong)aiStack_b8[0],*(undefined8 *)(param_2 + 8));
  }
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_18032afa0(param_1,&puStack_88,param_4);
  puVar5 = puStack_88;
  aiStack_b8[0] = (int)(lStack_80 - (longlong)puStack_88 >> 2);
  fwrite(aiStack_b8,4,1,*(undefined8 *)(param_2 + 8));
  if (0 < aiStack_b8[0]) {
    fwrite(puVar5,4,(longlong)aiStack_b8[0],*(undefined8 *)(param_2 + 8));
  }
  if (puVar5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  lStack_b0 = 0;
  puStack_a8 = (undefined4 *)0x0;
  lStack_a0 = 0;
  uStack_98 = CONCAT13(uStack_98._3_1_,0x30000);
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_1803347d0(param_1,&puStack_88,param_4);
  puVar5 = puStack_88;
  uVar6 = lStack_80 - (longlong)puStack_88 >> 3;
  aiStack_b8[0] = (int)uVar6;
  if ((uVar6 & 0xffffff) != 0) {
    FUN_180639bf0(&lStack_b0,(longlong)(aiStack_b8[0] << 8));
  }
  fwrite(aiStack_b8,4,1,*(undefined8 *)(param_2 + 8));
  puVar4 = puStack_a8;
  lVar7 = lStack_b0;
  uStack_90 = 0;
  if (0 < aiStack_b8[0]) {
    puStack_68 = puVar5;
    puVar3 = (undefined4 *)*puVar5;
    uVar1 = *puVar3;
    if ((ulonglong)((lStack_a0 - (longlong)puStack_a8) + lStack_b0) < 5) {
      FUN_180639bf0(&lStack_b0,(longlong)puStack_a8 + (4 - lStack_b0));
    }
    *puStack_a8 = uVar1;
    puStack_a8 = puStack_a8 + 1;
    if ((ulonglong)((lStack_a0 - (longlong)puStack_a8) + lStack_b0) < 0x11) {
      FUN_180639bf0(&lStack_b0,(longlong)puStack_a8 + (0x10 - lStack_b0));
    }
    *puStack_a8 = puVar3[1];
    puStack_a8[1] = puVar3[2];
    puStack_a8[2] = puVar3[3];
    puStack_a8[3] = puVar3[4];
    puStack_a8 = puStack_a8 + 4;
    uVar2 = puVar3[10];
    uVar6 = (ulonglong)uVar2 + 4;
    if ((ulonglong)((lStack_a0 - (longlong)puStack_a8) + lStack_b0) <= uVar6) {
      FUN_180639bf0(&lStack_b0,(uVar6 - lStack_b0) + (longlong)puStack_a8);
    }
    *puStack_a8 = uVar2;
    puStack_a8 = puStack_a8 + 1;
    puVar8 = &DAT_18098bc73;
    if (*(undefined **)(puVar3 + 8) != (undefined *)0x0) {
      puVar8 = *(undefined **)(puVar3 + 8);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_a8,puVar8,(ulonglong)uVar2);
  }
  iStack_8c = (int)puStack_a8 - (int)lStack_b0;
  if (lStack_b0 == 0) {
    iStack_8c = 0;
  }
  fwrite(&iStack_8c,4,1,*(undefined8 *)(param_2 + 8));
  lVar9 = (longlong)puVar4 - lVar7;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  fwrite(lVar7,lVar9,1,*(undefined8 *)(param_2 + 8));
  if (puVar5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  if (((char)uStack_98 == '\0') && (lVar7 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar7);
  }
  FUN_180331530(param_1,param_2,param_4);
  fflush(*(undefined8 *)(param_2 + 8));
  lVar7 = _ftelli64(*(undefined8 *)(param_2 + 8));
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a1b118,param_4,lVar7 - param_3,
                *(undefined8 *)(param_1 + 0x2d0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



