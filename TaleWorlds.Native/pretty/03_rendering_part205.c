#include "TaleWorlds.Native.Split.h"

// 03_rendering_part205.c - 15 个函数

// 函数: void FUN_180387ef8(void)
void FUN_180387ef8(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong in_RAX;
  longlong lVar5;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  uint64_t unaff_R15;
  float fVar6;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R15;
  do {
    lVar3 = *(longlong *)(*(longlong *)*unaff_RSI + unaff_RDI * 8);
    uVar2 = *(uint *)(lVar3 + 0x2b8);
    if (uVar2 != 0xffffffff) {
      pcVar4 = (char *)unaff_RSI[1];
      *(int32_t *)(unaff_RBP + -0x29) = 0;
      *(int16_t *)(unaff_RBP + -0x1d) = 0xff00;
      *(uint64_t *)(unaff_RBP + -0x19) = 0;
      cVar1 = *pcVar4;
      *(uint64_t *)(unaff_RBP + -0x11) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -9) = 0xffffffff;
      *(int8_t *)(unaff_RBP + -5) = 0xff;
      *(int32_t *)(unaff_RBP + -1) = 0xffffffff;
      *(uint64_t *)(unaff_RBP + 3) = 0;
      *(int16_t *)(unaff_RBP + 0xb) = 0x400;
      *(uint64_t *)(unaff_RBP + 0xf) = 0;
      *(int32_t *)(unaff_RBP + 0x17) = 0;
      *(uint64_t *)(unaff_RBP + 0x1f) = 0;
      *(int32_t *)(unaff_RBP + 0x27) = 0;
      *(int8_t *)(unaff_RBP + 0x2b) = 0;
      *(uint *)(unaff_RBP + -0x25) = uVar2;
      if (cVar1 == '\0') {
        fVar6 = *(float *)(lVar3 + 0x2c0);
      }
      else {
        fVar6 = 0.0;
      }
      *(int *)(unaff_RBP + -0x21) = (int)fVar6;
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(lVar3 + 0x28) + 0x150;
      }
      else {
        lVar5 = *(longlong *)(lVar3 + 0x28) + 0x130;
      }
      *(longlong *)(unaff_RBP + 0x3f) = lVar5;
      lVar5 = *(longlong *)unaff_RSI[2];
      if (*(int *)(*(longlong *)(lVar5 + 0x98f8) + (ulonglong)uVar2 * 4) != 0) {
        if (*(longlong *)(lVar3 + 0x260) != 0) {
          FUN_1801bcdd0(*(longlong *)(lVar3 + 0x260),lVar3 + 0x70,*(longlong *)unaff_RSI[3] + 0xf0,
                        *(int32_t *)(*(longlong *)(unaff_RSI[4] + 0x90) + 0x8220));
          lVar5 = *(longlong *)unaff_RSI[2];
        }
        FUN_1802e7550(lVar3,lVar5,unaff_RBP + -0x29);
      }
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_R14);
  return;
}





// 函数: void FUN_180388025(void)
void FUN_180388025(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180388040(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06170;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180388120(int param_1,int param_2,longlong *param_3)
void FUN_180388120(int param_1,int param_2,longlong *param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int32_t uStack_88;
  uint uStack_84;
  int iStack_80;
  int16_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int8_t uStack_64;
  int32_t uStack_60;
  uint64_t uStack_5c;
  int16_t uStack_54;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int8_t uStack_34;
  longlong lStack_20;
  
  puVar1 = (uint64_t *)*param_3;
  for (lVar4 = (longlong)param_1; lVar4 < param_2; lVar4 = lVar4 + 1) {
    lVar2 = *(longlong *)(*(longlong *)*puVar1 + lVar4 * 8);
    uStack_84 = *(uint *)(lVar2 + 0x2b8);
    if (uStack_84 != 0xffffffff) {
      uStack_88 = 0;
      uStack_7c = 0xff00;
      uStack_78 = 0;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = 0xffffffff;
      uStack_64 = 0xff;
      uStack_60 = 0xffffffff;
      uStack_5c = 0;
      uStack_54 = 0x400;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      if (*(char *)puVar1[1] == '\0') {
        fVar5 = *(float *)(lVar2 + 0x2c0);
      }
      else {
        fVar5 = 0.0;
      }
      iStack_80 = (int)fVar5;
      if (*(char *)puVar1[1] == '\0') {
        lStack_20 = *(longlong *)(lVar2 + 0x28) + 0x150;
      }
      else {
        lStack_20 = *(longlong *)(lVar2 + 0x28) + 0x130;
      }
      lVar3 = *(longlong *)puVar1[2];
      if (*(int *)(*(longlong *)(lVar3 + 0x98f8) + (ulonglong)uStack_84 * 4) != 0) {
        if (*(longlong *)(lVar2 + 0x260) != 0) {
          FUN_1801bcce0(*(longlong *)(lVar2 + 0x260),lVar2 + 0x70,*(longlong *)puVar1[3] + 0xf0,
                        *(int32_t *)(*(longlong *)(puVar1[4] + 0x90) + 0x8220));
          lVar3 = *(longlong *)puVar1[2];
        }
        FUN_1802e7550(lVar2,lVar3,&uStack_88);
      }
    }
  }
  return;
}





// 函数: void FUN_180388148(void)
void FUN_180388148(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong in_RAX;
  longlong lVar5;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  uint64_t unaff_R15;
  float fVar6;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R15;
  do {
    lVar3 = *(longlong *)(*(longlong *)*unaff_RSI + unaff_RDI * 8);
    uVar2 = *(uint *)(lVar3 + 0x2b8);
    if (uVar2 != 0xffffffff) {
      pcVar4 = (char *)unaff_RSI[1];
      *(int32_t *)(unaff_RBP + -0x29) = 0;
      *(int16_t *)(unaff_RBP + -0x1d) = 0xff00;
      *(uint64_t *)(unaff_RBP + -0x19) = 0;
      cVar1 = *pcVar4;
      *(uint64_t *)(unaff_RBP + -0x11) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -9) = 0xffffffff;
      *(int8_t *)(unaff_RBP + -5) = 0xff;
      *(int32_t *)(unaff_RBP + -1) = 0xffffffff;
      *(uint64_t *)(unaff_RBP + 3) = 0;
      *(int16_t *)(unaff_RBP + 0xb) = 0x400;
      *(uint64_t *)(unaff_RBP + 0xf) = 0;
      *(int32_t *)(unaff_RBP + 0x17) = 0;
      *(uint64_t *)(unaff_RBP + 0x1f) = 0;
      *(int32_t *)(unaff_RBP + 0x27) = 0;
      *(int8_t *)(unaff_RBP + 0x2b) = 0;
      *(uint *)(unaff_RBP + -0x25) = uVar2;
      if (cVar1 == '\0') {
        fVar6 = *(float *)(lVar3 + 0x2c0);
      }
      else {
        fVar6 = 0.0;
      }
      *(int *)(unaff_RBP + -0x21) = (int)fVar6;
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(lVar3 + 0x28) + 0x150;
      }
      else {
        lVar5 = *(longlong *)(lVar3 + 0x28) + 0x130;
      }
      *(longlong *)(unaff_RBP + 0x3f) = lVar5;
      lVar5 = *(longlong *)unaff_RSI[2];
      if (*(int *)(*(longlong *)(lVar5 + 0x98f8) + (ulonglong)uVar2 * 4) != 0) {
        if (*(longlong *)(lVar3 + 0x260) != 0) {
          FUN_1801bcce0(*(longlong *)(lVar3 + 0x260),lVar3 + 0x70,*(longlong *)unaff_RSI[3] + 0xf0,
                        *(int32_t *)(*(longlong *)(unaff_RSI[4] + 0x90) + 0x8220));
          lVar5 = *(longlong *)unaff_RSI[2];
        }
        FUN_1802e7550(lVar3,lVar5,unaff_RBP + -0x29);
      }
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_R14);
  return;
}





// 函数: void FUN_180388275(void)
void FUN_180388275(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180388290(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c061b0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



int32_t
FUN_180388370(uint *param_1,uint *param_2,longlong param_3,longlong param_4,int8_t param_5)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  int iStackX_8;
  uint uStack_48;
  
  lVar11 = (longlong)param_2 - (longlong)param_1 >> 4;
  if (param_4 < 1) {
    puVar10 = param_2;
    if ((param_1 != param_2) && (puVar6 = param_1 + 4, puVar6 != param_2)) {
      uVar8 = *param_1;
      do {
        uVar2 = *puVar6;
        puVar10 = puVar6;
        if (uVar8 < uVar2) break;
        puVar6 = puVar6 + 4;
        puVar10 = param_2;
        uVar8 = uVar2;
      } while (puVar6 != param_2);
    }
    param_4 = (longlong)puVar10 - (longlong)param_1 >> 4;
  }
  if (lVar11 <= param_4) {
    return 0;
  }
  if (lVar11 < 0x11) {
    if (param_1 == param_2) {
      return 0;
    }
    puVar10 = param_1 + param_4 * 4;
    do {
      if (puVar10 == param_2) {
        return 0;
      }
      uVar3 = *(uint64_t *)puVar10;
      uVar4 = *(uint64_t *)(puVar10 + 2);
      puVar6 = puVar10;
      if (puVar10 != param_1) {
        uStack_48 = (uint)uVar3;
        do {
          puVar1 = puVar6 + -4;
          if (uStack_48 <= puVar6[-4]) break;
          *(uint64_t *)puVar6 = *(uint64_t *)puVar1;
          *(uint64_t *)(puVar6 + 2) = *(uint64_t *)(puVar6 + -2);
          puVar6 = puVar1;
        } while (puVar1 != param_1);
      }
      puVar10 = puVar10 + 4;
      *(uint64_t *)puVar6 = uVar3;
      *(uint64_t *)(puVar6 + 2) = uVar4;
    } while( true );
  }
  lVar7 = lVar11 - ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1;
  iStackX_8 = 0;
  if (param_4 < lVar7) {
    iStackX_8 = FUN_180388370(param_1,param_1 + lVar7 * 4,param_3,param_4,param_5);
  }
  puVar10 = param_1 + lVar7 * 4;
  lVar9 = lVar7 * 0x10 + param_3;
  iVar5 = FUN_180388370(puVar10,param_2,lVar9,param_4 - lVar7,param_5);
  if (iStackX_8 == 0) {
    if (iVar5 == 0) {
      FUN_180388550(param_1,puVar10,puVar10,param_2,param_3);
      return 1;
    }
    if (param_1 != puVar10) {
      lVar11 = (longlong)puVar10 - (longlong)param_1;
      lVar9 = param_3;
      puVar10 = param_1;
LAB_18038850c:
                    // WARNING: Subroutine does not return
      memmove(lVar9,puVar10,lVar11);
    }
  }
  else if ((iVar5 == 0) && (puVar10 != param_2)) {
    lVar11 = (longlong)param_2 - (longlong)puVar10;
    goto LAB_18038850c;
  }
  FUN_180388550(param_3,lVar9,lVar9,param_3 + lVar11 * 0x10,param_1);
  return 0;
}



uint * FUN_180388550(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
          memmove(param_5,param_1,(longlong)param_2 - (longlong)param_1);
        }
        break;
      }
      if (*param_1 < *param_3) {
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        param_3 = param_3 + 4;
      }
      else {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar3 = param_1[2];
        uVar4 = param_1[3];
        param_1 = param_1 + 4;
      }
      *param_5 = uVar1;
      param_5[1] = uVar2;
      param_5[2] = uVar3;
      param_5[3] = uVar4;
      param_5 = param_5 + 4;
    } while (param_1 != param_2);
  }
  if (param_3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(param_5,param_3,(longlong)param_4 - (longlong)param_3);
  }
  return param_5;
}





// 函数: void FUN_1803885f0(longlong *param_1)
void FUN_1803885f0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((longlong)param_1 + 0x39) != '\0') {
    *(int8_t *)((longlong)param_1 + 0x39) = 0;
    FUN_1801c0df0();
  }
  func_0x0001801c0ee0();
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    do {
      iVar2 = 0;
      iVar1 = *(int *)((longlong)param_1 + 0x24);
      if (0 < iVar1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)(iVar1 * iVar3 + iVar2) * 0x28 + 8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          iVar2 = iVar2 + 1;
          iVar1 = *(int *)((longlong)param_1 + 0x24);
        } while (iVar2 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  if (*param_1 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180388630(uint64_t param_1,longlong param_2)
void FUN_180388630(uint64_t param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_8;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  
  fVar8 = 1e+06;
  lVar6 = 0;
  fVar9 = -1e+06;
  uVar5 = (ulonglong)*(byte *)(param_2 + 0xa8);
  fStackX_10 = 1e+06;
  fVar10 = 1e+06;
  fStackX_14 = 1e+06;
  fVar7 = -1e+06;
  fStackX_8 = -1e+06;
  fStackX_c = -1e+06;
  if (3 < uVar5) {
    puVar3 = (uint64_t *)(param_2 + 0x88);
    lVar4 = (uVar5 - 4 >> 2) + 1;
    lVar6 = lVar4 * 4;
    do {
      fVar1 = *(float *)puVar3[-1];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)puVar3[-1])[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      fVar1 = *(float *)*puVar3;
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)*puVar3)[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      fVar1 = *(float *)puVar3[1];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)puVar3[1])[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      fVar1 = *(float *)puVar3[2];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)puVar3[2])[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar6 < (longlong)uVar5) {
    lVar4 = uVar5 - lVar6;
    puVar3 = (uint64_t *)(param_2 + 0x80 + lVar6 * 8);
    do {
      fVar1 = *(float *)*puVar3;
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
      }
      fVar2 = ((float *)*puVar3)[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
      fStackX_8 = fVar9;
      fStackX_c = fVar7;
      fStackX_10 = fVar8;
      fStackX_14 = fVar10;
    } while (lVar4 != 0);
  }
  FUN_180388e90(param_1,&fStackX_10,&fStackX_8,param_2);
  return;
}





// 函数: void FUN_180388830(longlong *param_1,longlong param_2)
void FUN_180388830(longlong *param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar10 = 0;
  fVar18 = 1e+06;
  uVar4 = (ulonglong)*(byte *)(param_2 + 0xa8);
  iVar11 = 0;
  fVar19 = -1e+06;
  fVar20 = -1e+06;
  fVar21 = 1e+06;
  if (3 < uVar4) {
    lVar5 = (uVar4 - 4 >> 2) + 1;
    lVar10 = lVar5 * 4;
    puVar6 = (uint64_t *)(param_2 + 0x88);
    do {
      fVar14 = *(float *)puVar6[-1];
      fVar15 = ((float *)puVar6[-1])[1];
      fVar17 = fVar14;
      if (fVar14 <= fVar19) {
        fVar17 = fVar19;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      fVar16 = fVar15;
      if (fVar15 <= fVar20) {
        fVar16 = fVar20;
      }
      if (fVar21 <= fVar15) {
        fVar15 = fVar21;
      }
      fVar19 = ((float *)*puVar6)[1];
      fVar20 = *(float *)*puVar6;
      if (fVar17 <= fVar20) {
        fVar17 = fVar20;
      }
      if (fVar20 <= fVar14) {
        fVar14 = fVar20;
      }
      if (fVar19 <= fVar15) {
        fVar15 = fVar19;
      }
      fVar20 = *(float *)puVar6[1];
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      fVar19 = ((float *)puVar6[1])[1];
      if (fVar17 <= fVar20) {
        fVar17 = fVar20;
      }
      pfVar2 = (float *)puVar6[2];
      if (fVar20 <= fVar14) {
        fVar14 = fVar20;
      }
      if (fVar19 <= fVar15) {
        fVar15 = fVar19;
      }
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      fVar19 = fVar17;
      if (fVar17 <= *pfVar2) {
        fVar19 = *pfVar2;
      }
      fVar18 = fVar14;
      if (*pfVar2 <= fVar14) {
        fVar18 = *pfVar2;
      }
      fVar21 = fVar15;
      if (pfVar2[1] <= fVar15) {
        fVar21 = pfVar2[1];
      }
      fVar20 = fVar16;
      if (fVar16 <= pfVar2[1]) {
        fVar20 = pfVar2[1];
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0);
  }
  if (lVar10 < (longlong)uVar4) {
    lVar5 = uVar4 - lVar10;
    puVar6 = (uint64_t *)(param_2 + 0x80 + lVar10 * 8);
    fVar14 = fVar18;
    fVar15 = fVar19;
    fVar17 = fVar20;
    fVar16 = fVar21;
    do {
      pfVar2 = (float *)*puVar6;
      puVar6 = puVar6 + 1;
      fVar19 = *pfVar2;
      fVar20 = pfVar2[1];
      fVar18 = fVar19;
      if (fVar14 <= fVar19) {
        fVar18 = fVar14;
      }
      fVar21 = fVar20;
      if (fVar16 <= fVar20) {
        fVar21 = fVar16;
      }
      if (fVar19 <= fVar15) {
        fVar19 = fVar15;
      }
      if (fVar20 <= fVar17) {
        fVar20 = fVar17;
      }
      lVar5 = lVar5 + -1;
      fVar14 = fVar18;
      fVar15 = fVar19;
      fVar17 = fVar20;
      fVar16 = fVar21;
    } while (lVar5 != 0);
  }
  iVar3 = (int)param_1[4];
  iVar8 = (int)(((fVar18 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  iVar9 = iVar11;
  if ((-1 < iVar8) && (iVar9 = iVar8, iVar3 <= iVar8)) {
    iVar9 = iVar3 + -1;
  }
  iVar8 = *(int *)((longlong)param_1 + 0x24);
  iVar12 = (int)(((fVar21 - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
                *(float *)((longlong)param_1 + 0x1c));
  iVar13 = iVar11;
  if ((-1 < iVar12) && (iVar13 = iVar12, iVar8 <= iVar12)) {
    iVar13 = iVar8 + -1;
  }
  iVar7 = (int)(((fVar19 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  iVar12 = iVar11;
  if ((-1 < iVar7) && (iVar12 = iVar7, iVar3 <= iVar7)) {
    iVar12 = iVar3 + -1;
  }
  iVar3 = (int)(((fVar20 - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_1 + 0x1c));
  if ((-1 < iVar3) && (iVar11 = iVar8 + -1, iVar3 < iVar8)) {
    iVar11 = iVar3;
  }
  for (; iVar3 = iVar13, iVar9 <= iVar12; iVar9 = iVar9 + 1) {
    for (; iVar3 <= iVar11; iVar3 = iVar3 + 1) {
      piVar1 = (int *)(*param_1 +
                      (longlong)(*(int *)((longlong)param_1 + 0x24) * iVar9 + iVar3) * 0x28);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}





// 函数: void FUN_180388a90(uint64_t param_1,longlong param_2)
void FUN_180388a90(uint64_t param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_8;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  
  fVar8 = 1e+06;
  lVar6 = 0;
  fVar9 = -1e+06;
  uVar5 = (ulonglong)*(byte *)(param_2 + 0xa8);
  fStackX_10 = 1e+06;
  fVar10 = 1e+06;
  fStackX_14 = 1e+06;
  fVar7 = -1e+06;
  fStackX_8 = -1e+06;
  fStackX_c = -1e+06;
  if (3 < uVar5) {
    puVar3 = (uint64_t *)(param_2 + 0x88);
    lVar4 = (uVar5 - 4 >> 2) + 1;
    lVar6 = lVar4 * 4;
    do {
      fVar1 = *(float *)puVar3[-1];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)puVar3[-1])[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      fVar1 = *(float *)*puVar3;
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)*puVar3)[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      fVar1 = *(float *)puVar3[1];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)puVar3[1])[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      fVar1 = *(float *)puVar3[2];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
        fStackX_10 = fVar1;
      }
      fVar2 = ((float *)puVar3[2])[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
        fStackX_14 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
        fStackX_8 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
        fStackX_c = fVar2;
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar6 < (longlong)uVar5) {
    lVar4 = uVar5 - lVar6;
    puVar3 = (uint64_t *)(param_2 + 0x80 + lVar6 * 8);
    do {
      fVar1 = *(float *)*puVar3;
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
      }
      fVar2 = ((float *)*puVar3)[1];
      if (fVar2 < fVar10) {
        fVar10 = fVar2;
      }
      if (fVar9 < fVar1) {
        fVar9 = fVar1;
      }
      if (fVar7 < fVar2) {
        fVar7 = fVar2;
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
      fStackX_8 = fVar9;
      fStackX_c = fVar7;
      fStackX_10 = fVar8;
      fStackX_14 = fVar10;
    } while (lVar4 != 0);
  }
  FUN_180388d10(param_1,&fStackX_10,&fStackX_8,param_2);
  return;
}





// 函数: void FUN_180388d10(longlong *param_1,float *param_2,float *param_3,longlong param_4)
void FUN_180388d10(longlong *param_1,float *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = (int)param_1[4];
  iVar8 = (int)(((*param_2 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (iVar9 <= iVar8) {
    iVar8 = iVar9 + -1;
  }
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  iVar12 = (int)(((param_2[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
                *(float *)((longlong)param_1 + 0x1c));
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (iVar2 <= iVar12) {
    iVar12 = iVar2 + -1;
  }
  iVar11 = (int)(((*param_3 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (iVar9 <= iVar11) {
    iVar11 = iVar9 + -1;
  }
  iVar9 = (int)(((param_3[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_1 + 0x1c));
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (iVar2 <= iVar9) {
    iVar9 = iVar2 + -1;
  }
  do {
    iVar2 = iVar12;
    if (iVar11 < iVar8) {
      return;
    }
    for (; iVar2 <= iVar9; iVar2 = iVar2 + 1) {
      lVar3 = *param_1;
      iVar6 = 0;
      lVar7 = 0;
      lVar5 = (longlong)(iVar8 * *(int *)((longlong)param_1 + 0x24) + iVar2);
      lVar4 = *(longlong *)(lVar3 + 8 + lVar5 * 0x28);
      iVar10 = (int)(*(longlong *)(lVar3 + 0x10 + lVar5 * 0x28) - lVar4 >> 3);
      if (0 < iVar10) {
        do {
          if (*(longlong *)(lVar4 + lVar7 * 8) == param_4) {
            if (iVar6 != iVar10 + -1) {
              *(uint64_t *)(lVar4 + lVar7 * 8) =
                   *(uint64_t *)(lVar4 + -8 + (longlong)iVar10 * 8);
            }
            plVar1 = (longlong *)(lVar3 + 0x10 + lVar5 * 0x28);
            *plVar1 = *plVar1 + -8;
            break;
          }
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar10);
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}





// 函数: void FUN_180388dee(void)
void FUN_180388dee(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int unaff_EBP;
  int unaff_ESI;
  int iVar7;
  int iVar8;
  longlong in_R11;
  int unaff_R12D;
  longlong *unaff_R14;
  int unaff_R15D;
  
  do {
    iVar8 = unaff_R15D;
    if (unaff_R15D <= unaff_ESI) {
      do {
        lVar2 = *unaff_R14;
        iVar5 = 0;
        lVar6 = 0;
        lVar4 = (longlong)(unaff_EBP * *(int *)((longlong)unaff_R14 + 0x24) + iVar8);
        lVar3 = *(longlong *)(lVar2 + 8 + lVar4 * 0x28);
        iVar7 = (int)(*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) - lVar3 >> 3);
        if (0 < iVar7) {
          do {
            if (*(longlong *)(lVar3 + lVar6 * 8) == in_R11) {
              if (iVar5 != iVar7 + -1) {
                *(uint64_t *)(lVar3 + lVar6 * 8) =
                     *(uint64_t *)(lVar3 + -8 + (longlong)iVar7 * 8);
              }
              plVar1 = (longlong *)(lVar2 + 0x10 + lVar4 * 0x28);
              *plVar1 = *plVar1 + -8;
              break;
            }
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar7);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= unaff_ESI);
    }
    unaff_EBP = unaff_EBP + 1;
    if (unaff_R12D < unaff_EBP) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180388e75(void)
void FUN_180388e75(void)

{
  return;
}





// 函数: void FUN_180388e90(longlong *param_1,float *param_2,float *param_3,uint64_t param_4)
void FUN_180388e90(longlong *param_1,float *param_2,float *param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t auStack_38 [2];
  
  iVar4 = 0;
  iVar2 = (int)param_1[4];
  iVar5 = (int)(((*param_2 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  iVar6 = iVar4;
  if ((-1 < iVar5) && (iVar6 = iVar5, iVar2 <= iVar5)) {
    iVar6 = iVar2 + -1;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x24);
  iVar8 = (int)(((param_2[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_1 + 0x1c));
  iVar9 = iVar4;
  if ((-1 < iVar8) && (iVar9 = iVar8, iVar5 <= iVar8)) {
    iVar9 = iVar5 + -1;
  }
  iVar7 = (int)(((*param_3 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  iVar8 = iVar4;
  if ((-1 < iVar7) && (iVar8 = iVar7, iVar2 <= iVar7)) {
    iVar8 = iVar2 + -1;
  }
  iVar2 = (int)(((param_3[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_1 + 0x1c));
  if ((-1 < iVar2) && (iVar4 = iVar5 + -1, iVar2 < iVar5)) {
    iVar4 = iVar2;
  }
  for (; auStack_38[0] = param_4, iVar2 = iVar9, iVar6 <= iVar8; iVar6 = iVar6 + 1) {
    for (; iVar2 <= iVar4; iVar2 = iVar2 + 1) {
      lVar3 = (longlong)(iVar6 * *(int *)((longlong)param_1 + 0x24) + iVar2);
      lVar1 = *param_1 + lVar3 * 0x28;
      FUN_1800e8140(lVar1 + 8,(longlong)*(int *)(*param_1 + lVar3 * 0x28));
      FUN_18005ea90(lVar1 + 8,auStack_38);
    }
  }
  return;
}





// 函数: void FUN_180388f6b(void)
void FUN_180388f6b(void)

{
  longlong lVar1;
  longlong lVar2;
  int unaff_EBP;
  int unaff_ESI;
  int iVar3;
  int unaff_R12D;
  longlong *unaff_R14;
  int unaff_R15D;
  
  do {
    iVar3 = unaff_R15D;
    if (unaff_R15D <= unaff_EBP) {
      do {
        lVar2 = (longlong)(unaff_ESI * *(int *)((longlong)unaff_R14 + 0x24) + iVar3);
        lVar1 = *unaff_R14 + lVar2 * 0x28;
        FUN_1800e8140(lVar1 + 8,(longlong)*(int *)(*unaff_R14 + lVar2 * 0x28));
        FUN_18005ea90(lVar1 + 8,&stack0x00000020);
        iVar3 = iVar3 + 1;
      } while (iVar3 <= unaff_EBP);
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI <= unaff_R12D);
  return;
}





// 函数: void FUN_180388fd8(void)
void FUN_180388fd8(void)

{
  return;
}





