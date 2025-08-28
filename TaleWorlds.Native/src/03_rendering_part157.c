#include "TaleWorlds.Native.Split.h"

// 03_rendering_part157.c - 19 个函数

// 函数: void FUN_1803653d0(longlong param_1)
void FUN_1803653d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_8;
  
  if (((*(longlong **)(param_1 + 0x120) != (longlong *)0x0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xd8))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x80))(), cVar2 != '\0')) {
    uVar4 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    fVar8 = 1.0;
    lVar3 = *(longlong *)(lVar1 + 0x540);
    fStackX_8 = 1.0;
    uVar6 = uVar4;
    if (*(longlong *)(lVar1 + 0x548) - lVar3 >> 3 != 0) {
      do {
        lVar3 = *(longlong *)(uVar4 + lVar3);
        if (((*(char *)(lVar3 + 0x151) == '\0') ||
            (*(longlong **)(lVar3 + 0x120) == (longlong *)0x0)) ||
           ((cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x120) + 0xd8))(), cVar2 == '\0' ||
            (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x120) + 0x80))(), cVar2 == '\0')))) {
LAB_180365659:
          fVar8 = 0.0;
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x18);
          fVar10 = *(float *)(lVar3 + 0xa0) - *(float *)(_DAT_180c86878 + 0x1b8);
          fVar11 = *(float *)(lVar3 + 0xa4) - *(float *)(_DAT_180c86878 + 0x1bc);
          fVar9 = *(float *)(lVar3 + 0xa8) - *(float *)(_DAT_180c86878 + 0x1c0);
          fVar8 = SQRT(*(float *)(lVar3 + 0x70) * *(float *)(lVar3 + 0x70) +
                       *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0x74) +
                       *(float *)(lVar3 + 0x78) * *(float *)(lVar3 + 0x78));
          fVar7 = SQRT(*(float *)(lVar3 + 0x80) * *(float *)(lVar3 + 0x80) +
                       *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0x84) +
                       *(float *)(lVar3 + 0x88) * *(float *)(lVar3 + 0x88));
          if (fVar8 <= fVar7) {
            fVar8 = fVar7;
          }
          fVar7 = SQRT(*(float *)(lVar3 + 0x90) * *(float *)(lVar3 + 0x90) +
                       *(float *)(lVar3 + 0x94) * *(float *)(lVar3 + 0x94) +
                       *(float *)(lVar3 + 0x98) * *(float *)(lVar3 + 0x98));
          if (fVar8 <= fVar7) {
            fVar8 = fVar7;
          }
          fVar8 = (1.0 / fVar8) * SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          fVar8 = ((fVar8 - 0.5) + fVar8) - 0.5;
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          fVar8 = 1.0 - fVar8;
          if (fVar8 < 0.0) goto LAB_180365659;
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        fVar8 = 1.0 - fVar8;
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        lVar3 = *(longlong *)(lVar1 + 0x540);
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 8;
        fVar8 = fStackX_8 * fVar8;
        uVar6 = (ulonglong)uVar5;
        fStackX_8 = fVar8;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(lVar1 + 0x548) - lVar3 >> 3));
    }
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0xf8))(*(longlong **)(param_1 + 0x120),fVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180365419(void)
void FUN_180365419(void)

{
  longlong lVar1;
  char cVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack00000000000000e0;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(in_RAX + 0x20);
  lVar3 = *(longlong *)(lVar1 + 0x540);
  fStack00000000000000e0 = 1.0;
  uVar6 = uVar4;
  if (*(longlong *)(lVar1 + 0x548) - lVar3 >> 3 != 0) {
    do {
      fVar8 = fStack00000000000000e0;
      lVar3 = *(longlong *)(uVar4 + lVar3);
      if ((((*(char *)(lVar3 + 0x151) == '\0') || (*(longlong **)(lVar3 + 0x120) == (longlong *)0x0)
           ) || (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x120) + 0xd8))(), cVar2 == '\0')) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x120) + 0x80))(), cVar2 == '\0')) {
LAB_180365659:
        fVar7 = 0.0;
        fStack00000000000000e0 = fVar8;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x18);
        fVar10 = *(float *)(lVar3 + 0xa0) - *(float *)(_DAT_180c86878 + 0x1b8);
        fVar11 = *(float *)(lVar3 + 0xa4) - *(float *)(_DAT_180c86878 + 0x1bc);
        fVar9 = *(float *)(lVar3 + 0xa8) - *(float *)(_DAT_180c86878 + 0x1c0);
        fVar8 = SQRT(*(float *)(lVar3 + 0x70) * *(float *)(lVar3 + 0x70) +
                     *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0x74) +
                     *(float *)(lVar3 + 0x78) * *(float *)(lVar3 + 0x78));
        fVar7 = SQRT(*(float *)(lVar3 + 0x80) * *(float *)(lVar3 + 0x80) +
                     *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0x84) +
                     *(float *)(lVar3 + 0x88) * *(float *)(lVar3 + 0x88));
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar7 = SQRT(*(float *)(lVar3 + 0x90) * *(float *)(lVar3 + 0x90) +
                     *(float *)(lVar3 + 0x94) * *(float *)(lVar3 + 0x94) +
                     *(float *)(lVar3 + 0x98) * *(float *)(lVar3 + 0x98));
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar8 = (1.0 / fVar8) * SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        fVar7 = ((fVar8 - 0.5) + fVar8) - 0.5;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        fVar7 = 1.0 - fVar7;
        fVar8 = fStack00000000000000e0;
        if (fVar7 < 0.0) goto LAB_180365659;
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
      }
      fVar7 = 1.0 - fVar7;
      if (0.0 <= fVar7) {
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
      }
      else {
        fVar7 = 0.0;
      }
      lVar3 = *(longlong *)(lVar1 + 0x540);
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      fStack00000000000000e0 = fStack00000000000000e0 * fVar7;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(lVar1 + 0x548) - lVar3 >> 3));
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x120) + 0xf8))
            (*(longlong **)(unaff_RBP + 0x120),fStack00000000000000e0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180365471(undefined8 param_1,longlong param_2)
void FUN_180365471(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  uint unaff_EDI;
  longlong unaff_R14;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM15_Da;
  float in_stack_000000e0;
  
  uVar3 = (ulonglong)unaff_EDI;
  do {
    lVar1 = *(longlong *)(uVar3 + param_2);
    if ((((*(char *)(lVar1 + 0x151) == '\0') || (*(longlong **)(lVar1 + 0x120) == (longlong *)0x0))
        || (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x120) + 0xd8))(), cVar2 == '\0')) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x120) + 0x80))(), cVar2 == '\0')) {
LAB_180365659:
      fVar5 = 0.0;
      in_stack_000000e0 = unaff_XMM6_Da;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x18);
      fVar7 = *(float *)(lVar1 + 0xa0) - *(float *)(_DAT_180c86878 + 0x1b8);
      fVar8 = *(float *)(lVar1 + 0xa4) - *(float *)(_DAT_180c86878 + 0x1bc);
      fVar6 = *(float *)(lVar1 + 0xa8) - *(float *)(_DAT_180c86878 + 0x1c0);
      fVar5 = SQRT(*(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x70) +
                   *(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x74) +
                   *(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x78));
      fVar4 = SQRT(*(float *)(lVar1 + 0x80) * *(float *)(lVar1 + 0x80) +
                   *(float *)(lVar1 + 0x84) * *(float *)(lVar1 + 0x84) +
                   *(float *)(lVar1 + 0x88) * *(float *)(lVar1 + 0x88));
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = SQRT(*(float *)(lVar1 + 0x90) * *(float *)(lVar1 + 0x90) +
                   *(float *)(lVar1 + 0x94) * *(float *)(lVar1 + 0x94) +
                   *(float *)(lVar1 + 0x98) * *(float *)(lVar1 + 0x98));
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar5 = (unaff_XMM15_Da / fVar5) * SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar5 = ((fVar5 - 0.5) + fVar5) - 0.5;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar5 = unaff_XMM15_Da - fVar5;
      unaff_XMM6_Da = in_stack_000000e0;
      if (fVar5 < 0.0) goto LAB_180365659;
      if (unaff_XMM15_Da <= fVar5) {
        fVar5 = unaff_XMM15_Da;
      }
    }
    fVar5 = unaff_XMM15_Da - fVar5;
    if (0.0 <= fVar5) {
      if (unaff_XMM15_Da <= fVar5) {
        fVar5 = unaff_XMM15_Da;
      }
    }
    else {
      fVar5 = 0.0;
    }
    param_2 = *(longlong *)(unaff_R14 + 0x540);
    unaff_EDI = unaff_EDI + 1;
    uVar3 = uVar3 + 8;
    unaff_XMM6_Da = in_stack_000000e0 * fVar5;
    in_stack_000000e0 = unaff_XMM6_Da;
    if ((ulonglong)(*(longlong *)(unaff_R14 + 0x548) - param_2 >> 3) <=
        (ulonglong)(longlong)(int)unaff_EDI) {
      (**(code **)(**(longlong **)(unaff_RBP + 0x120) + 0xf8))
                (*(longlong **)(unaff_RBP + 0x120),unaff_XMM6_Da);
      return;
    }
  } while( true );
}





// 函数: void FUN_1803656f2(void)
void FUN_1803656f2(void)

{
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0x120) + 0xf8))();
  return;
}





// 函数: void FUN_180365723(void)
void FUN_180365723(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180365730(longlong *param_1,undefined4 param_2)
void FUN_180365730(longlong *param_1,undefined4 param_2)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((char)param_1[0x2f] != '\0') {
    (**(code **)(*param_1 + 0x170))();
  }
  FUN_180362ef0(param_1,param_2);
  if ((char)param_1[0x2a] != '\0') {
    FUN_1803653d0(param_1);
  }
  if ((char)param_1[0x2f] != '\0') {
    uStack_28 = *(undefined4 *)(_DAT_180c86878 + 0x1b8);
    uStack_24 = *(undefined4 *)(_DAT_180c86878 + 0x1bc);
    uStack_20 = *(undefined4 *)(_DAT_180c86878 + 0x1c0);
    uStack_1c = *(undefined4 *)(_DAT_180c86878 + 0x1c4);
    FUN_180364d70(param_1,param_1[3] + 0xa0,&uStack_28);
  }
  return;
}





// 函数: void FUN_1803657c0(longlong *param_1)
void FUN_1803657c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  int iVar5;
  ulonglong uVar6;
  
  if (*(code **)(*param_1 + 0x178) == (code *)&UNK_180363750) {
    FUN_1803638c0();
  }
  else {
    (**(code **)(*param_1 + 0x178))();
  }
  if (((char)param_1[0x2f] != '\0') && (lVar1 = *(longlong *)(param_1[3] + 0x20), lVar1 != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x548);
    puVar3 = *(undefined8 **)(lVar1 + 0x540);
    iVar5 = 0;
    uVar6 = (longlong)puVar2 - (longlong)puVar3 >> 3;
    puVar4 = puVar3;
    if (uVar6 != 0) {
      while ((longlong *)*puVar4 != param_1) {
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
        if (uVar6 <= (ulonglong)(longlong)iVar5) {
          return;
        }
      }
      if (iVar5 != -1) {
        puVar4 = puVar3 + iVar5 + 1;
        if (puVar4 < puVar2) {
                    // WARNING: Subroutine does not return
          memmove(puVar3 + iVar5,puVar4,(longlong)puVar2 - (longlong)puVar4,uVar6,unaff_RBX);
        }
        *(undefined8 **)(lVar1 + 0x548) = puVar2 + -1;
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180365820(undefined8 param_1)
void FUN_180365820(undefined8 param_1)

{
  undefined1 auStack_388 [32];
  undefined4 uStack_368;
  undefined **appuStack_360 [2];
  undefined8 uStack_350;
  undefined *apuStack_348 [19];
  undefined4 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined4 uStack_298;
  undefined1 auStack_290 [136];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [136];
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [136];
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_350 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_388;
  uStack_368 = 0;
  FUN_180362fb0();
  puStack_2a8 = &UNK_1809fcc28;
  puStack_2a0 = auStack_290;
  auStack_290[0] = 0;
  uStack_298 = 0xf;
  strcpy_s(auStack_290,0x80,&DAT_180a201c0);
  FUN_180049b30(apuStack_348,&puStack_2a8);
  uStack_2b0 = 3;
  uStack_368 = 1;
  FUN_1803617c0(param_1,appuStack_360,apuStack_348);
  uStack_368 = 0;
  appuStack_360[0] = apuStack_348;
  apuStack_348[0] = &UNK_18098bcb0;
  puStack_2a8 = &UNK_18098bcb0;
  puStack_208 = &UNK_1809fcc28;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0x13;
  strcpy_s(auStack_1f0,0x80,&DAT_180a201a8);
  FUN_180049b30(apuStack_348,&puStack_208);
  uStack_2b0 = 3;
  uStack_368 = 2;
  FUN_1803617c0(param_1,appuStack_360,apuStack_348);
  uStack_368 = 0;
  appuStack_360[0] = apuStack_348;
  apuStack_348[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_168 = &UNK_1809fcc28;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xc;
  strcpy_s(auStack_150,0x80,&DAT_180a20198);
  FUN_180049b30(apuStack_348,&puStack_168);
  uStack_2b0 = 3;
  uStack_368 = 4;
  FUN_1803617c0(param_1,appuStack_360,apuStack_348);
  uStack_368 = 0;
  appuStack_360[0] = apuStack_348;
  apuStack_348[0] = &UNK_18098bcb0;
  puStack_168 = &UNK_18098bcb0;
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0xd;
  strcpy_s(auStack_b0,0x80,&DAT_180a20238);
  FUN_180049b30(apuStack_348,&puStack_c8);
  uStack_2b0 = 9;
  uStack_368 = 8;
  FUN_1803617c0(param_1,appuStack_360,apuStack_348);
  uStack_368 = 0;
  appuStack_360[0] = apuStack_348;
  apuStack_348[0] = &UNK_18098bcb0;
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_388);
}



bool FUN_180365b30(void)

{
  char cVar1;
  
  cVar1 = FUN_180365b50();
  return cVar1 == '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180365b50(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined *puStack_c0;
  longlong lStack_b8;
  undefined4 uStack_b0;
  ulonglong uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  longlong lStack_70;
  undefined4 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  iVar8 = 0;
  bVar1 = true;
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 3;
  FUN_180627ae0(&puStack_c0,param_1 + 0x90,param_3,param_4,0);
  puStack_a0 = &DAT_180a1ff70;
  puStack_98 = &UNK_180a3c3e0;
  uStack_88 = uStack_b0;
  lStack_90 = lStack_b8;
  uStack_80._4_4_ = (uint)(uStack_a8 >> 0x20);
  uStack_80._0_4_ = (undefined4)uStack_a8;
  uStack_b0 = 0;
  lStack_b8 = 0;
  uStack_a8 = 0;
  FUN_180627910(&puStack_78,&DAT_180a1ff70);
  FUN_180365de0(&lStack_58,&puStack_98);
  lVar4 = lStack_58;
  puStack_78 = &UNK_180a3c3e0;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_70 = 0;
  uStack_60 = 0;
  puStack_78 = &UNK_18098bcb0;
  puStack_98 = &UNK_180a3c3e0;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  puStack_98 = &UNK_18098bcb0;
  uVar11 = 0;
  puStack_c0 = &UNK_180a3c3e0;
  if (lStack_b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b8 = 0;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  puStack_c0 = &UNK_18098bcb0;
  uVar10 = lStack_50 - lStack_58 >> 6;
  lVar2 = lVar4;
  lVar3 = lStack_50;
  if (uVar10 != 0) {
    piVar9 = (int *)(lStack_58 + 0x10);
    do {
      if (*piVar9 != 0) {
        uVar7 = FUN_180213440(_DAT_180c86878,param_1 + 0x90,1,param_4,uVar11);
        if ((bVar1) && (cVar6 = FUN_180363eb0(param_1,uVar7), cVar6 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 0x10;
      lVar3 = lStack_50;
    } while ((ulonglong)(longlong)iVar8 < uVar10);
  }
  for (; lVar5 = lStack_50, lVar2 != lStack_50; lVar2 = lVar2 + 0x40) {
    lStack_50 = lVar3;
    FUN_1800596a0(lVar2);
    lVar3 = lStack_50;
    lStack_50 = lVar5;
  }
  if (lVar4 != 0) {
    lStack_50 = lVar3;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
  return bVar1;
}





// 函数: void FUN_180365d60(longlong *param_1)
void FUN_180365d60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180365d80(longlong *param_1)
void FUN_180365d80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180365de0(longlong *param_1,undefined8 param_2)
void FUN_180365de0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar4 = lVar6 - lVar5 >> 6;
  puVar1 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) goto LAB_180365e4a;
  }
  puVar1 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar4 << 6,(char)param_1[3],lVar6,0xfffffffffffffffe);
  lVar6 = param_1[1];
  lVar5 = *param_1;
LAB_180365e4a:
  puVar3 = puVar1;
  if (lVar5 != lVar6) {
    puVar2 = puVar1 + 5;
    lVar5 = lVar5 - (longlong)puVar1;
    do {
      *puVar3 = &UNK_18098bcb0;
      puVar2[-4] = 0;
      *(undefined4 *)(puVar2 + -3) = 0;
      *puVar3 = &UNK_180a3c3e0;
      puVar2[-2] = 0;
      puVar2[-4] = 0;
      *(undefined4 *)(puVar2 + -3) = 0;
      *(undefined4 *)(puVar2 + -3) = *(undefined4 *)(lVar5 + -0x18 + (longlong)puVar2);
      puVar2[-4] = *(undefined8 *)(lVar5 + -0x20 + (longlong)puVar2);
      *(undefined4 *)((longlong)puVar2 + -0xc) = *(undefined4 *)(lVar5 + -0xc + (longlong)puVar2);
      *(undefined4 *)(puVar2 + -2) = *(undefined4 *)((longlong)puVar2 + lVar5 + -0x10);
      *(undefined4 *)(lVar5 + -0x18 + (longlong)puVar2) = 0;
      *(undefined8 *)(lVar5 + -0x20 + (longlong)puVar2) = 0;
      *(undefined4 *)(lVar5 + -0xc + (longlong)puVar2) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar5 + -0x10) = 0;
      puVar2[-1] = &UNK_18098bcb0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[-1] = &UNK_180a3c3e0;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + lVar5 + 8);
      *puVar2 = *(undefined8 *)(lVar5 + (longlong)puVar2);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar2 + lVar5 + 0x14);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)puVar2 + lVar5 + 0x10);
      *(undefined4 *)((longlong)puVar2 + lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + (longlong)puVar2) = 0;
      *(undefined8 *)((longlong)puVar2 + lVar5 + 0x10) = 0;
      puVar3 = puVar3 + 8;
      puVar2 = puVar2 + 8;
    } while (lVar5 + -0x28 + (longlong)puVar2 != lVar6);
  }
  FUN_18005caa0(puVar3,param_2);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar6) {
    do {
      FUN_1800596a0(lVar5);
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar6);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    *param_1 = (longlong)puVar1;
    param_1[1] = (longlong)(puVar3 + 8);
    param_1[2] = (longlong)(puVar1 + lVar4 * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar5);
}





// 函数: void FUN_180365fa0(longlong param_1,longlong param_2)
void FUN_180365fa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x548);
  plVar2 = *(longlong **)(param_1 + 0x540);
  iVar4 = 0;
  uVar5 = (longlong)plVar1 - (longlong)plVar2 >> 3;
  plVar3 = plVar2;
  if (uVar5 != 0) {
    while (*plVar3 != param_2) {
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
      if (uVar5 <= (ulonglong)(longlong)iVar4) {
        return;
      }
    }
    if (iVar4 != -1) {
      plVar3 = plVar2 + iVar4 + 1;
      if (plVar3 < plVar1) {
                    // WARNING: Subroutine does not return
        memmove(plVar2 + iVar4,plVar3,(longlong)plVar1 - (longlong)plVar3);
      }
      *(longlong **)(param_1 + 0x548) = plVar1 + -1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180366030(longlong param_1,longlong param_2)
void FUN_180366030(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)0x0;
  plVar3 = *(longlong **)(param_1 + 0x540);
  uVar7 = *(longlong *)(param_1 + 0x548) - (longlong)plVar3 >> 3;
  plVar2 = plVar3;
  plVar6 = plVar1;
  if (uVar7 != 0) {
    do {
      if (*plVar2 == param_2) {
        if ((int)plVar6 != -1) {
          return;
        }
        break;
      }
      uVar5 = (int)plVar6 + 1;
      plVar2 = plVar2 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < uVar7);
  }
  plVar2 = *(longlong **)(param_1 + 0x548);
  if (plVar2 < *(longlong **)(param_1 + 0x550)) {
    *(longlong **)(param_1 + 0x548) = plVar2 + 1;
    *plVar2 = param_2;
    return;
  }
  if (uVar7 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = uVar7 * 2;
    if (lVar4 == 0) goto LAB_1803660ff;
  }
  plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(undefined1 *)(param_1 + 0x558));
  plVar3 = *(longlong **)(param_1 + 0x540);
  plVar2 = *(longlong **)(param_1 + 0x548);
LAB_1803660ff:
  if (plVar3 != plVar2) {
                    // WARNING: Subroutine does not return
    memmove(plVar1,plVar3,(longlong)plVar2 - (longlong)plVar3);
  }
  *plVar1 = param_2;
  if (*(longlong *)(param_1 + 0x540) == 0) {
    *(longlong **)(param_1 + 0x540) = plVar1;
    *(longlong **)(param_1 + 0x550) = plVar1 + lVar4;
    *(longlong **)(param_1 + 0x548) = plVar1 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180366090(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)
void FUN_180366090(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 *puVar1;
  undefined8 *unaff_R14;
  
  puVar1 = *(undefined8 **)(unaff_RBX + 0x548);
  if (puVar1 < *(undefined8 **)(unaff_RBX + 0x550)) {
    *(undefined8 **)(unaff_RBX + 0x548) = puVar1 + 1;
    *puVar1 = unaff_RSI;
    return;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  else {
    param_4 = param_4 * 2;
    if (param_4 == 0) goto LAB_1803660ff;
  }
  unaff_R14 = (undefined8 *)
              FUN_18062b420(_DAT_180c8ed18,param_4 * 8,*(undefined1 *)(unaff_RBX + 0x558));
  param_2 = *(undefined8 **)(unaff_RBX + 0x540);
  puVar1 = *(undefined8 **)(unaff_RBX + 0x548);
LAB_1803660ff:
  if (param_2 != puVar1) {
                    // WARNING: Subroutine does not return
    memmove(unaff_R14,param_2,(longlong)puVar1 - (longlong)param_2);
  }
  *unaff_R14 = unaff_RSI;
  if (*(longlong *)(unaff_RBX + 0x540) == 0) {
    *(undefined8 **)(unaff_RBX + 0x540) = unaff_R14;
    *(undefined8 **)(unaff_RBX + 0x550) = unaff_R14 + param_4;
    *(undefined8 **)(unaff_RBX + 0x548) = unaff_R14 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803660b8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_1803660b8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 *unaff_R14;
  
  if (param_4 == 0) {
    param_4 = 1;
  }
  else {
    param_4 = param_4 * 2;
    if (param_4 == 0) goto LAB_1803660ff;
  }
  unaff_R14 = (undefined8 *)
              FUN_18062b420(_DAT_180c8ed18,param_4 * 8,*(undefined1 *)(unaff_RBX + 0x558));
  param_2 = *(longlong *)(unaff_RBX + 0x540);
  unaff_RDI = *(longlong *)(unaff_RBX + 0x548);
LAB_1803660ff:
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(unaff_R14,param_2,unaff_RDI - param_2);
  }
  *unaff_R14 = unaff_RSI;
  if (*(longlong *)(unaff_RBX + 0x540) == 0) {
    *(undefined8 **)(unaff_RBX + 0x540) = unaff_R14;
    *(undefined8 **)(unaff_RBX + 0x550) = unaff_R14 + param_4;
    *(undefined8 **)(unaff_RBX + 0x548) = unaff_R14 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180366155(void)
void FUN_180366155(void)

{
  return;
}





// 函数: void FUN_18036615a(void)
void FUN_18036615a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180366170(undefined8 *param_1)
void FUN_180366170(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined4 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a20448;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(undefined4 *)(puVar3 + 0x12) = 3;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)puVar3 + 0x9c) = 0x3f800000;
  *(undefined4 *)(puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)puVar3 + 0xa4) = 0x3f800000;
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_78 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puVar2 = 0x7265764f;
  puVar2[1] = 0x65646972;
  puVar2[2] = 0x63614620;
  puVar2[3] = 0x20726f74;
  puVar2[4] = 0x6f6c6f43;
  *(undefined2 *)(puVar2 + 5) = 0x72;
  uStack_70 = 0x15;
  FUN_1803460a0(param_1,&puStack_80,param_1 + 0x15,3,uVar4);
  puStack_80 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_180366340(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180057830();
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803663a0(undefined8 param_1,undefined8 param_2)
void FUN_1803663a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined4 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb0,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &UNK_180a20448;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  *(undefined4 *)(puVar4 + 0x12) = 3;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  *(undefined4 *)(puVar4 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x9c) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xa4) = 0x3f800000;
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_78 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puVar2 = 0x7265764f;
  puVar2[1] = 0x65646972;
  puVar2[2] = 0x63614620;
  puVar2[3] = 0x20726f74;
  puVar2[4] = 0x6f6c6f43;
  *(undefined2 *)(puVar2 + 5) = 0x72;
  uStack_70 = 0x15;
  FUN_1803460a0(puVar3,&puStack_80,puVar3 + 0x15,3,uVar5);
  puStack_80 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





