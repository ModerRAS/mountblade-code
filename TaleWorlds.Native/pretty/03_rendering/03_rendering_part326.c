#include "TaleWorlds.Native.Split.h"

// 03_rendering_part326.c - 16 个函数

// 函数: void FUN_180439fb5(void)
void FUN_180439fb5(void)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  float unaff_XMM6_Da;
  undefined8 uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x4c0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x4c8))(&stack0x00000048), cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(lVar1 + 0x470) != (undefined *)0x0) {
        puVar3 = *(undefined **)(lVar1 + 0x470);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(undefined4 *)(lVar1 + 0x460) = *(undefined4 *)(lVar1 + 0x4a8);
    return;
  }
  *(int *)(lVar1 + 0x460) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439fd4(void)
void FUN_180439fd4(void)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  float unaff_XMM6_Da;
  undefined8 uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x21a0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x21a8))(&stack0x00000048), cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(lVar1 + 0x2150) != (undefined *)0x0) {
        puVar3 = *(undefined **)(lVar1 + 0x2150);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(undefined4 *)(lVar1 + 0x2140) = *(undefined4 *)(lVar1 + 0x2188);
    return;
  }
  *(int *)(lVar1 + 0x2140) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439ff3(void)
void FUN_180439ff3(void)

{
  float unaff_XMM6_Da;
  
  FUN_18010cdf0(_DAT_180c86920,(int)unaff_XMM6_Da);
  return;
}





// 函数: void FUN_18043a012(void)
void FUN_18043a012(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043a140(undefined4 param_1,int param_2)
void FUN_18043a140(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0x15:
    return;
  case 0x16:
    return;
  case 0x1b:
    return;
  case 0x1e:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x1f:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x20:
    if (param_2 != 0) {
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x21:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x22:
    if ((param_2 == 0) || (param_2 == 1)) {
      return;
    }
    if (((param_2 != 2) && (param_2 != 3)) && (param_2 == 5)) {
      return;
    }
    return;
  case 0x23:
    if (param_2 != 0) {
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x24:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 != 3) {
        if (param_2 != 5) {
          return;
        }
        return;
      }
      return;
    }
    break;
  case 0x25:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 != 3) {
        if (param_2 != 5) {
          return;
        }
        return;
      }
      return;
    }
    break;
  case 0x26:
    func_0x00018010e1f0(_DAT_180c86920);
    return;
  case 0x27:
    func_0x00018010d370(_DAT_180c86920);
    return;
  case 0x28:
    func_0x00018010d430(_DAT_180c86920);
    return;
  case 0x29:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x2a:
    func_0x00018010e130(_DAT_180c86920);
    return;
  case 0x2b:
    if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) {
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x2c:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x2d:
    func_0x00018010deb0(_DAT_180c86920);
    return;
  case 0x2e:
    if (param_2 != 0) {
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x2f:
    func_0x00018010ddf0(_DAT_180c86920);
    return;
  case 0x30:
    if (((param_2 != 0) && (param_2 != 1)) && ((param_2 != 2 && ((param_2 != 3 && (param_2 == 5)))))
       ) {
      return;
    }
    break;
  case 0x31:
    if (param_2 != 0) {
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x32:
    func_0x00018010df70(_DAT_180c86920);
    return;
  case 0x33:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x34:
    if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) {
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x35:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x36:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x37:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x38:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x39:
    if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) {
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x3a:
    if (param_2 != 0) {
      if (param_2 == 1) {
        return;
      }
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x3b:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x3c:
    if ((param_2 != 0) && (param_2 != 1)) {
      if (param_2 == 2) {
        return;
      }
      if (param_2 == 3) {
        return;
      }
      if (param_2 != 5) {
        return;
      }
      return;
    }
    break;
  case 0x3e:
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 1) {
      return;
    }
    if (((param_2 != 2) && (param_2 != 3)) &&
       ((param_2 == 5 && (*(int *)(_DAT_180c86920 + 0xee0) == 0)))) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xcb0) == 0) {
      return;
    }
    return;
  case 0x3f:
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 1) {
      return;
    }
    if ((((param_2 != 2) && (param_2 != 3)) && (param_2 == 5)) &&
       (*(int *)(_DAT_180c86920 + 0xf50) == 0)) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xd20) == 0) {
      return;
    }
    return;
  case 0x40:
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 1) {
      return;
    }
    if (((param_2 != 2) && (param_2 != 3)) &&
       ((param_2 == 5 && (*(int *)(_DAT_180c86920 + 0xfc0) == 0)))) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xd90) == 0) {
      return;
    }
    return;
  case 0x41:
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 1) {
      return;
    }
    if (param_2 == 2) {
      return;
    }
    if (param_2 == 3) {
      return;
    }
    if (param_2 != 5) {
      return;
    }
    if (*(int *)(_DAT_180c86920 + 0x10a0) == 0) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xe70) == 0) {
      return;
    }
    return;
  case 0x42:
    if ((((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) ||
         ((param_2 == 3 || (param_2 != 5)))) || (*(int *)(_DAT_180c86920 + 0x1030) != 0)) &&
       (*(int *)(_DAT_180c8a9c8 + 0xe00) != 0)) {
      return;
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_18043ab40(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStackX_10;
  
  lVar2 = _DAT_180c86920;
  if ((*(longlong *)(_DAT_180c86890 + 0x7ab8) == 0) || (*(int *)(_DAT_180c86920 + 0x540) < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  fVar7 = -1.0;
  fVar8 = -1.0;
  switch(param_1) {
  case 0:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1340);
    goto code_r0x00018043b131;
  case 1:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1500);
    goto code_r0x00018043b131;
  case 2:
    fVar7 = *(float *)(_DAT_180c86920 + 0x13b0);
    goto code_r0x00018043b131;
  case 3:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1420);
    goto code_r0x00018043b131;
  case 4:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1490);
    goto code_r0x00018043b131;
  case 5:
    iVar3 = (**(code **)(*_DAT_180c86878 + 0x98))();
    break;
  case 6:
    iVar3 = *(int *)(_DAT_180c86920 + 0x12d0);
    break;
  case 7:
    iVar3 = *(int *)(_DAT_180c86920 + 0x15e0);
    break;
  case 8:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1650);
    break;
  case 9:
    iVar3 = *(int *)(_DAT_180c86920 + 0x2370);
    break;
  case 10:
    iVar3 = *(int *)(_DAT_180c86920 + 0x23e0);
    break;
  case 0xb:
    fVar7 = *(float *)(_DAT_180c86920 + 0x16c0);
    goto code_r0x00018043b131;
  case 0xc:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1730);
    break;
  case 0xd:
    fVar7 = *(float *)(_DAT_180c86920 + 0x18f0);
    goto code_r0x00018043b131;
  case 0xe:
    fVar7 = *(float *)(_DAT_180c86920 + 0x17a0);
    goto code_r0x00018043b131;
  case 0xf:
    iVar3 = *(int *)(_DAT_180c86920 + 0x2300);
    break;
  case 0x10:
    if ((*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 100) - 2U & 0xfffffffd) == 0) {
      iVar3 = *(int *)(_DAT_180c86920 + 0x2450);
      break;
    }
    goto code_r0x00018043b131;
  case 0x11:
    if ((*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 100) - 2U & 0xfffffffd) == 0) {
      fVar7 = *(float *)(_DAT_180c86920 + 0x24c0);
    }
    goto code_r0x00018043b131;
  case 0x12:
    if ((*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 100) - 2U & 0xfffffffd) == 0) {
      iVar3 = *(int *)(_DAT_180c86920 + 0x2530);
      break;
    }
    goto code_r0x00018043b131;
  case 0x13:
    iVar3 = *(int *)(_DAT_180c86920 + 0x25a0);
    break;
  case 0x14:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1ea0);
    break;
  case 0x15:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1f10);
    break;
  case 0x16:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1810);
    break;
  case 0x17:
    FUN_180171f10(*(undefined8 *)(_DAT_180c86870 + 8),&uStackX_10);
    if (((float)uStackX_10 == (float)*(int *)(_DAT_180c86920 + 0x1d50)) &&
       (uStackX_10._4_4_ == (float)*(int *)(_DAT_180c86920 + 0x1dc0))) {
      iVar3 = FUN_180438350();
      break;
    }
    iVar4 = FUN_180438350();
    iVar3 = 0;
    fVar7 = (float)(iVar4 + 1);
    iVar4 = FUN_180438350();
    if (0 < iVar4) {
      do {
        uVar6 = FUN_1804386b0(iVar3);
        uStackX_10._0_4_ = (float)uVar6;
        if (((float)uStackX_10 == (float)*(int *)(_DAT_180c86920 + 0x1d50)) &&
           (uStackX_10._4_4_ = (float)((ulonglong)uVar6 >> 0x20),
           uStackX_10._4_4_ == (float)*(int *)(_DAT_180c86920 + 0x1dc0))) goto code_r0x00018043b12e;
        iVar3 = iVar3 + 1;
        uStackX_10 = uVar6;
        iVar4 = FUN_180438350();
      } while (iVar3 < iVar4);
    }
    goto code_r0x00018043b131;
  case 0x18:
    iVar4 = func_0x0001804388d0();
    iVar3 = 0;
    if (0 < iVar4) {
      fVar8 = *(float *)(lVar2 + 0x1e30);
      do {
        fVar9 = fVar8;
        if (fVar8 <= 0.0) {
          fVar9 = fVar8 - 0.9999999;
        }
        iVar5 = FUN_180438940(iVar3);
        if (iVar5 == (int)fVar9) goto code_r0x00018043b12e;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    goto code_r0x00018043b131;
  case 0x19:
    if (bVar1) {
      fVar7 = 100.0;
    }
    else {
      fVar7 = *(float *)(_DAT_180c86920 + 0x20d0);
    }
    goto code_r0x00018043b131;
  case 0x1a:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1b90);
    break;
  case 0x1b:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1f80);
    break;
  case 0x1c:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1110);
    goto code_r0x00018043b131;
  case 0x1d:
    iVar3 = FUN_180104d00();
    break;
  case 0x1e:
    iVar3 = *(int *)(_DAT_180c86920 + 0x700);
    break;
  case 0x1f:
    iVar3 = *(int *)(_DAT_180c86920 + 0x380);
    break;
  case 0x20:
    iVar3 = *(int *)(_DAT_180c86920 + 0x3f0);
    break;
  case 0x21:
    iVar3 = *(int *)(_DAT_180c86920 + 0xcb0);
    break;
  case 0x22:
    iVar3 = *(int *)(_DAT_180c86920 + 0xc40);
    break;
  case 0x23:
    iVar3 = *(int *)(_DAT_180c86920 + 0xd20);
    break;
  case 0x24:
    iVar3 = *(int *)(_DAT_180c86920 + 0xaf0);
    break;
  case 0x25:
    iVar3 = *(int *)(_DAT_180c86920 + 0xb60);
    break;
  case 0x26:
    iVar3 = *(int *)(_DAT_180c86920 + 0xe0);
    break;
  case 0x27:
    iVar3 = *(int *)(_DAT_180c86920 + 0xe00);
    break;
  case 0x28:
    iVar3 = *(int *)(_DAT_180c86920 + 0xd90);
    break;
  case 0x29:
    iVar3 = *(int *)(_DAT_180c86920 + 0xe70);
    break;
  case 0x2a:
    iVar3 = *(int *)(_DAT_180c86920 + 0x150);
    break;
  case 0x2b:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1c0);
    break;
  case 0x2c:
    iVar3 = *(int *)(_DAT_180c86920 + 0x5b0);
    break;
  case 0x2d:
    iVar3 = *(int *)(_DAT_180c86920 + 0x310);
    break;
  case 0x2e:
    iVar3 = *(int *)(_DAT_180c86920 + 0x460);
    break;
  case 0x2f:
    iVar3 = *(int *)(_DAT_180c86920 + 0x4d0);
    break;
  case 0x30:
    iVar3 = *(int *)(_DAT_180c86920 + 0x540);
    break;
  case 0x31:
    iVar3 = *(int *)(_DAT_180c86920 + 0xbd0);
    break;
  case 0x32:
    iVar3 = *(int *)(_DAT_180c86920 + 0x2a0);
    break;
  case 0x33:
    iVar3 = *(int *)(_DAT_180c86920 + 0x850);
    break;
  case 0x34:
    iVar3 = *(int *)(_DAT_180c86920 + 0x7e0);
    break;
  case 0x35:
    iVar3 = *(int *)(_DAT_180c86920 + 0x620);
    break;
  case 0x36:
    iVar3 = *(int *)(_DAT_180c86920 + 0x690);
    break;
  case 0x37:
    iVar3 = *(int *)(_DAT_180c86920 + 0x930);
    break;
  case 0x38:
    iVar3 = *(int *)(_DAT_180c86920 + 0x770);
    break;
  case 0x39:
    iVar3 = *(int *)(_DAT_180c86920 + 0xa80);
    break;
  case 0x3a:
    iVar3 = *(int *)(_DAT_180c86920 + 0x8c0);
    break;
  case 0x3b:
    iVar3 = *(int *)(_DAT_180c86920 + 0x9a0);
    break;
  case 0x3c:
    iVar3 = *(int *)(_DAT_180c86920 + 0xa10);
    break;
  case 0x3d:
    fVar7 = *(float *)(_DAT_180c86920 + 0x2060);
    goto code_r0x00018043b131;
  case 0x3e:
    if ((*(int *)(_DAT_180c86920 + 0xee0) == 0) || (*(int *)(_DAT_180c8a9c8 + 0xcb0) == 0)) {
code_r0x00018043b0b3:
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
    goto code_r0x00018043b131;
  case 0x3f:
    if ((*(int *)(_DAT_180c86920 + 0xf50) == 0) || (*(int *)(_DAT_180c8a9c8 + 0xd20) == 0))
    goto code_r0x00018043b0b3;
    fVar7 = 1.0;
    goto code_r0x00018043b131;
  case 0x40:
    if ((*(int *)(_DAT_180c86920 + 0xfc0) == 0) || (*(int *)(_DAT_180c8a9c8 + 0xd90) == 0))
    goto code_r0x00018043b0b3;
    fVar7 = 1.0;
    goto code_r0x00018043b131;
  case 0x41:
    if ((*(int *)(_DAT_180c86920 + 0x10a0) == 0) || (*(int *)(_DAT_180c8a9c8 + 0xe70) == 0))
    goto code_r0x00018043b0b3;
    fVar7 = 1.0;
  case 0x42:
    goto code_r0x00018043b131;
  case 0x43:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1180);
    goto code_r0x00018043b131;
  case 0x44:
    fVar7 = *(float *)(_DAT_180c86920 + 0x11f0);
    goto code_r0x00018043b131;
  case 0x45:
    iVar3 = *(int *)(_DAT_180c86920 + 0x1ab0);
    break;
  case 0x46:
    fVar7 = *(float *)(_DAT_180c86920 + 0x1260);
    goto code_r0x00018043b131;
  case 0x47:
    iVar3 = *(int *)(_DAT_180c86920 + 0x2140);
    break;
  case 0x48:
    iVar3 = *(int *)(_DAT_180c86920 + 0x21b0);
    break;
  default:
    goto FUN_18043b139;
  }
code_r0x00018043b12e:
  fVar7 = (float)iVar3;
code_r0x00018043b131:
  fVar8 = fVar7;
FUN_18043b139:
  return fVar8;
}





// 函数: void FUN_18043abac(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_18043abac(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)((ulonglong)*(uint *)(param_3 + 0x43b168 + in_RAX * 4) + param_3);
                    // WARNING: Could not recover jumptable at 0x00018043abbf. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}





// 函数: void FUN_18043b139(void)
void FUN_18043b139(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043b290(undefined4 param_1)
void FUN_18043b290(undefined4 param_1)

{
  bool bVar1;
  
  if ((*(longlong *)(_DAT_180c86890 + 0x7ab8) == 0) || (*(int *)(_DAT_180c86920 + 0x540) < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  switch(param_1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    (**(code **)(*_DAT_180c86878 + 0x98))();
    return;
  case 6:
    return;
  case 7:
    return;
  case 8:
    return;
  case 9:
    return;
  case 10:
    return;
  case 0xb:
    return;
  case 0xc:
    return;
  case 0xd:
    return;
  case 0xe:
    return;
  case 0xf:
    return;
  case 0x10:
    if ((*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 100) - 2U & 0xfffffffd) == 0) {
      return;
    }
    break;
  case 0x11:
    if ((*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 100) - 2U & 0xfffffffd) == 0) {
      return;
    }
    break;
  case 0x12:
    if ((*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2018) + 100) - 2U & 0xfffffffd) == 0) {
      return;
    }
    break;
  case 0x13:
    return;
  case 0x14:
    return;
  case 0x15:
    return;
  case 0x16:
    return;
  case 0x19:
    if (!bVar1) {
      return;
    }
    return;
  case 0x1a:
    return;
  case 0x1b:
    return;
  case 0x1c:
    return;
  case 0x1d:
    FUN_180104d00();
    return;
  case 0x1e:
    return;
  case 0x1f:
    return;
  case 0x20:
    return;
  case 0x21:
    return;
  case 0x22:
    return;
  case 0x23:
    return;
  case 0x24:
    return;
  case 0x25:
    return;
  case 0x26:
    return;
  case 0x27:
    return;
  case 0x28:
    return;
  case 0x29:
    return;
  case 0x2a:
    return;
  case 0x2b:
    return;
  case 0x2c:
    return;
  case 0x2d:
    return;
  case 0x2e:
    return;
  case 0x2f:
    return;
  case 0x30:
    return;
  case 0x31:
    return;
  case 0x32:
    return;
  case 0x33:
    return;
  case 0x34:
    return;
  case 0x35:
    return;
  case 0x36:
    return;
  case 0x37:
    return;
  case 0x38:
    return;
  case 0x39:
    return;
  case 0x3a:
    return;
  case 0x3b:
    return;
  case 0x3c:
    return;
  case 0x3d:
    return;
  case 0x3e:
    if (*(int *)(_DAT_180c86920 + 0xee0) == 0) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xcb0) == 0) {
      return;
    }
    return;
  case 0x3f:
    if (*(int *)(_DAT_180c86920 + 0xf50) == 0) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xd20) == 0) {
      return;
    }
    return;
  case 0x40:
    if (*(int *)(_DAT_180c86920 + 0xfc0) == 0) {
      return;
    }
    if (*(int *)(_DAT_180c8a9c8 + 0xd90) == 0) {
      return;
    }
    return;
  case 0x41:
    if ((*(int *)(_DAT_180c86920 + 0x10a0) != 0) && (*(int *)(_DAT_180c8a9c8 + 0xe70) != 0)) {
      return;
    }
    return;
  case 0x43:
    return;
  case 0x44:
    return;
  case 0x45:
    return;
  case 0x46:
    return;
  case 0x47:
    return;
  case 0x48:
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043b930(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
void FUN_18043b930(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  undefined8 param_7,undefined8 param_8,int param_9,int param_10)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 auStack_138 [32];
  undefined **ppuStack_118;
  undefined ***pppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [128];
  undefined4 uStack_60;
  ulonglong uStack_18;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  if (param_3 != 0) {
    FUN_18010d9f0(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x8c0));
  }
  if (param_4 != 0) {
    FUN_18010da70(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x850));
  }
  if (param_5 != 0) {
    FUN_18010d870(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0xa10));
  }
  if (param_6 != 0) {
    FUN_18010daf0(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x7e0));
  }
  if (param_2 != 0) {
    FUN_18010cd70(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x2060));
  }
  if (param_9 != 0) {
    FUN_18043be90();
  }
  if (param_10 != 0) {
    FUN_18010cdf0(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x21b0));
  }
  FUN_180103970();
  if (param_1 != 0) {
    FUN_1800b3a40();
  }
  ppuStack_118 = &puStack_f8;
  puStack_f8 = &UNK_1809fcc28;
  puStack_f0 = auStack_e0;
  uStack_e8 = 0;
  auStack_e0[0] = 0;
  uStack_60 = 0x1b;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
  ppuVar2 = (undefined **)FUN_18005ce30(uVar1,&puStack_f8);
  ppuStack_100 = ppuVar2;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  uVar1 = _DAT_180c82868;
  pppuStack_110 = &ppuStack_118;
  ppuStack_118 = ppuVar2;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  FUN_18005e370(uVar1,&ppuStack_118);
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  }
  pppuStack_110 = (undefined ***)&puStack_f8;
  puStack_f8 = &UNK_18098bcb0;
  FUN_18004b1f0(0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043bbe0(int param_1)
void FUN_18043bbe0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  uint uStack_78;
  undefined1 auStack_70 [72];
  char acStack_28 [16];
  ulonglong uStack_18;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  lVar4 = (longlong)param_1 * 0x70 + *(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x18);
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = *(uint *)(lVar4 + 0x10);
  puVar1 = *(undefined **)(lVar4 + 8);
  puVar5 = &DAT_18098bc73;
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
  }
  strcpy_s(auStack_70,0x40,puVar5);
  if (uStack_78 + 2 < 0x3f) {
    *(undefined2 *)(puStack_80 + uStack_78) = 0x2820;
    *(undefined1 *)((longlong)(puStack_80 + uStack_78) + 2) = 0;
    uStack_78 = uStack_78 + 2;
  }
  FUN_180060680(acStack_28,&UNK_1809fd0a0,param_1);
  lVar4 = -1;
  do {
    lVar3 = lVar4;
    lVar4 = lVar3 + 1;
  } while (acStack_28[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if ((0 < iVar2) && (uStack_78 + iVar2 < 0x3f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_80 + uStack_78,acStack_28,(longlong)((int)lVar3 + 2));
  }
  if (uStack_78 + 1 < 0x3f) {
    *(undefined2 *)(puStack_80 + uStack_78) = 0x29;
    uStack_78 = uStack_78 + 1;
  }
  (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_88);
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043be00(longlong param_1,undefined4 param_2)
void FUN_18043be00(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char acStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  FUN_180060680(acStack_28,&UNK_1809fd0a0,param_2);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_28[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x3f)) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_28,
           (longlong)((int)lVar3 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_48);
}





// 函数: void FUN_18043be50(undefined8 param_1,uint param_2)
void FUN_18043be50(undefined8 param_1,uint param_2)

{
  int in_EAX;
  longlong unaff_RDI;
  undefined1 auStackX_20 [8];
  ulonglong in_stack_00000030;
  
  if (param_2 + in_EAX < 0x3f) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)param_2 + *(longlong *)(unaff_RDI + 8),auStackX_20,(longlong)(in_EAX + 1));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000030 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18043be7b(void)
void FUN_18043be7b(void)

{
  ulonglong in_stack_00000030;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000030 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043be90(undefined8 param_1,undefined4 param_2)
void FUN_18043be90(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 auStackX_10 [6];
  
  lVar1 = _DAT_180c86920;
  if ((*(longlong *)(_DAT_180c86920 + 0x1800) != 0) &&
     (auStackX_10[0] = param_2, cVar2 = (**(code **)(_DAT_180c86920 + 0x1808))(auStackX_10),
     param_2 = auStackX_10[0], cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(lVar1 + 0x17b0) != (undefined *)0x0) {
        puVar3 = *(undefined **)(lVar1 + 0x17b0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(undefined4 *)(lVar1 + 0x17a0) = *(undefined4 *)(lVar1 + 0x17e8);
    return;
  }
  *(undefined4 *)(lVar1 + 0x17a0) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043bf20(undefined8 param_1,undefined4 param_2)
void FUN_18043bf20(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 auStackX_10 [6];
  
  lVar1 = _DAT_180c86920;
  if ((*(longlong *)(_DAT_180c86920 + 0x1170) != 0) &&
     (auStackX_10[0] = param_2, cVar2 = (**(code **)(_DAT_180c86920 + 0x1178))(auStackX_10),
     param_2 = auStackX_10[0], cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(lVar1 + 0x1120) != (undefined *)0x0) {
        puVar3 = *(undefined **)(lVar1 + 0x1120);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(undefined4 *)(lVar1 + 0x1110) = *(undefined4 *)(lVar1 + 0x1158);
    return;
  }
  *(undefined4 *)(lVar1 + 0x1110) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043bfb0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)
void FUN_18043bfb0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1800623b0(_DAT_180c86928,param_1,param_4,param_3,&UNK_180a29740,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



